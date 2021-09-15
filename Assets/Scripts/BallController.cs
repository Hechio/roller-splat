using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BallController : MonoBehaviour
{

    public static BallController singleton;

    public Rigidbody rb;
    public float speed = 15;

    private bool isTraveling;
    private Vector3 travelDirection;
    private Vector3 nextCollosionPosition;

    public int minSwipeRecognition = 500;
    private Vector2 swipePosLastFrame;
    private Vector2 swipePosCurrentFrame;
    private Vector2 currentSwipe;

    private Color solveColor;

    private AudioSource audioSource;

    private void Awake()
    {
        if (singleton == null)
        {
            singleton = this;
        }
        else if (singleton != this)
        {
            Destroy(gameObject);
            DontDestroyOnLoad(gameObject);
        }
    }

    public void PlayMusic() {
        audioSource.Play();
    }

    public void StopMusic()
    {
        audioSource.Stop();
    }

    private void Start()
    {
        solveColor = Random.ColorHSV(0.5f, 1);
        GetComponent<MeshRenderer>().material.color = solveColor;
        audioSource = GetComponent<AudioSource>();

    }
    private void FixedUpdate()
    {
        if (isTraveling)
        {
            rb.velocity = speed * travelDirection;
        }
        Collider[] hitColliders = Physics.OverlapSphere(transform.position - (Vector3.up / 2), 0.05f);
        int i = 0;
        while(i < hitColliders.Length)
        {
            GroundPiece ground = hitColliders[i].transform.GetComponent<GroundPiece>();
            if(ground && !ground.isColored)
            {
                ground.ChangeColor(solveColor);
            }
            i++;
        }

        if(nextCollosionPosition != Vector3.zero)
        {
            if(Vector3.Distance(transform.position, nextCollosionPosition) <1)
            {
                isTraveling = false;
                travelDirection = Vector3.zero;
                nextCollosionPosition = Vector3.zero;
            }
        }

        if (isTraveling)
            return;

        if (Input.GetMouseButton(0))
        {
            swipePosCurrentFrame =
                new Vector2(Input.mousePosition.x, Input.mousePosition.y);
            if(swipePosLastFrame != Vector2.zero)
            {
                currentSwipe = swipePosCurrentFrame - swipePosLastFrame;
                if(currentSwipe.sqrMagnitude < minSwipeRecognition)
                {
                    return;
                }

                currentSwipe.Normalize();
                //up/down
                if(currentSwipe.x > -0.5f && currentSwipe.x < 0.5)
                {
                    //go up/down
                    SetDestination(currentSwipe.y > 0 ? Vector3.forward : Vector3.back);
                }

                if (currentSwipe.y > -0.5f && currentSwipe.y < 0.5)
                {
                    //go left/right
                    SetDestination(currentSwipe.x > 0 ? Vector3.right : Vector3.left);
                }
                
            }
            swipePosLastFrame = swipePosCurrentFrame;

        }

        if (Input.GetMouseButtonUp(0))
        {
            swipePosLastFrame = Vector2.zero;
            currentSwipe = Vector2.zero;
        }
    }

    private void SetDestination(Vector3 direction)
    {
        travelDirection = direction;

        RaycastHit hit;
        if(Physics.Raycast(transform.position, direction, out hit, 100f))
        {
            nextCollosionPosition = hit.point;
        }
        isTraveling = true;
    }

}
