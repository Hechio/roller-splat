using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;


public class GameManager : MonoBehaviour
{
    public static GameManager singleton;

    private GroundPiece[] allGroundPieces;
    private AudioSource audioSource;
    private int level = 5;

    void Start()
    {
        audioSource = GetComponent<AudioSource>();
        SetUpNewLevel();
        BallController.singleton.PlayMusic();
    }


    private void SetUpNewLevel()
    {
        allGroundPieces = FindObjectsOfType<GroundPiece>();
    }

    private void Awake()
    {
        if(singleton == null)
        {
            singleton = this;
        }else if(singleton != this)
        {
            Destroy(gameObject);
            DontDestroyOnLoad(gameObject);
        }
    }
    private void OnEnable()
    {
        SceneManager.sceneLoaded += OnLevelFinishedLoading;
    }

    private void OnLevelFinishedLoading(Scene scene, LoadSceneMode mode)
    {
        SetUpNewLevel();
    }

    public void CheckComplete()
    {
        bool isFinished = true;

        for (int i = 0; i< allGroundPieces.Length; i++)
        {
            if(allGroundPieces[i].isColored == false)
            {
                isFinished = false;
                break;
            }
        }
        if (isFinished)
        {
            //Next level method
            NextLevel();
        }
    }

    private void NextLevel()
    {

        StartCoroutine(PlayCheersOnCompleted());
    }

    IEnumerator PlayCheersOnCompleted()
    {
        BallController.singleton.StopMusic();
        audioSource.Play();
        yield return new WaitForSeconds(2);

        if (SceneManager.GetActiveScene().buildIndex == level - 1)
        {
            SceneManager.LoadScene(0);
        }
        else
        {
            SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex + 1);
        }

    }
}
