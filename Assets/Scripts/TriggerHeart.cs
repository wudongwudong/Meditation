using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TriggerHeart : MonoBehaviour
{
    //public bool Contacted;
    public GameObject scriptAGameObject, Key;
    private SceneController sceneController;
    public AudioClip correctHeart;
    private AudioSource ASCorrectHeart;
    public AudioClip WrongHeart;
    private AudioSource ASWrongHeart;
    private bool choiceCorrect;

    public HeartbeatHandler normalHeart, fastBeatingHeart;
    void Start()
    {
        //Contacted = false;

        sceneController = scriptAGameObject.GetComponent<SceneController>();
        ASWrongHeart = gameObject.AddComponent<AudioSource>();
        // Assign the audio clip to the AudioSource
        ASWrongHeart.clip = WrongHeart;

        ASCorrectHeart = gameObject.AddComponent<AudioSource>();
        ASCorrectHeart.clip = correctHeart;
    }

    void OnTriggerEnter(Collider collider)
    {
        if (collider.name.Contains("Correct"))
        {
            //Contacted = true;

            normalHeart.isInteractable = false;
            normalHeart.StopBeating();

            if (!choiceCorrect)
            {
                choiceCorrect = true;

                if (!ASCorrectHeart.isPlaying)
                {
                    ASCorrectHeart.Play();
                }

                StartCoroutine(DelayChangeScene(4));
            }
            
            //sceneController.LiarTriggered();
        }

        if (collider.name.Contains("Wrong"))
        {
            fastBeatingHeart.isInteractable = false;
            fastBeatingHeart.StopBeating();

            if (!choiceCorrect)
            {
                //Contacted = true;
                if (!ASWrongHeart.isPlaying)
                {
                    ASWrongHeart.Play();
                }
            }

        }

    }

    IEnumerator DelayChangeScene(float sec)
    {
        yield return new WaitForSeconds(sec);
        sceneController.LiarTriggered();
    }

    void OnTriggerExit(Collider collider)
    {
        

    }

    //void OnTriggerEnter(Collider collider)
    //{
    //    // You don't need to get the SceneController again here
    //    if (collider.name.Contains("Correct"))
    //    {
    //        Contacted = true;
    //        sceneController.LiarTriggered();
    //    }

    //}


    //void OnTriggerExit(Collider collider)
    //{
    //    if (collider.name.Contains("Wrong"))
    //    {
    //        Contacted = false;
    //        if (!ASWrongHeart.isPlaying)
    //        {
    //            ASWrongHeart.Play();
    //        }
    //    }

    //}

    void Update()
    {

    }
}
