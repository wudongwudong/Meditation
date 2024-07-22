using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HeartDialogue : MonoBehaviour
{
    private bool Contacted;
    private SceneController sceneController;
    public GameObject scriptAGameObject;
    public AudioClip Man, Woman;
    private AudioSource audioSourceMan, audioSourceWoman;
    private bool ManPlayed,WomanPLayed,InstructionPlayed;
    public bool ManSelected, WomanSelected;

    private void Start()
    {
        sceneController = scriptAGameObject.GetComponent<SceneController>();

        ManPlayed = false;
        WomanPLayed = false;
        Contacted = false;
        InstructionPlayed = false;
        // Create an AudioSource component
        audioSourceMan = gameObject.AddComponent<AudioSource>();
        audioSourceWoman = gameObject.AddComponent<AudioSource>();
        // Assign the audio clip to the AudioSource
        audioSourceMan.clip = Man;
        audioSourceWoman.clip = Woman;
    }
    void OnTriggerEnter(Collider collider)
    {
        if (collider.name.Contains("_Palm"))
        {

            Contacted = true;
            if(ManSelected == true && audioSourceMan.isPlaying == false)
            {
                if(ManPlayed == false)
                {
                    audioSourceMan.Play();
                    ManPlayed = true;
                    sceneController.TriggerInstructions("Male");
                }
                
            }
            if (WomanSelected == true && audioSourceWoman.isPlaying == false)
            {
                if (WomanPLayed == false)
                {
                    audioSourceWoman.Play();
                    WomanPLayed = true;
                    sceneController.TriggerInstructions("Female");
                }

            }

        }
    }

    void OnTriggerExit(Collider collider)
    {
        if (collider.name.Contains("_Palm"))
        {
            Contacted = false;
        }
    }

    void Update()
    {
        if (Input.GetKeyDown(KeyCode.J))
        {
            audioSourceMan.Play();
            ManPlayed = true;
            sceneController.TriggerInstructions("Male");
        }
        if (Input.GetKeyDown(KeyCode.K))
        {
            audioSourceWoman.Play();
            WomanPLayed = true;
            sceneController.TriggerInstructions("Female");
        }
    }
}
