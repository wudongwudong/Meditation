using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Assets.ProgressBars.Scripts;
using HaptGlove;

public class TrigerProcessBar : MonoBehaviour
{
    private bool Contacted;
    
    public GuiProgressBar[] _progressBars;
    public enum TriggerType
    {
        Grasp,
        Touch
    }
    public TriggerType triggerType = TriggerType.Touch;

    public HapMaterial hapMaterial;

    private void Start()
    {
        Contacted = false;
    }
    void OnTriggerEnter(Collider collider)
    {
        if (triggerType == TriggerType.Touch)
        {
            if (collider.name.Contains("_Palm"))
            {
                Contacted = true;
            }
        }
    }

    void OnTriggerExit(Collider collider)
    {
        if (triggerType == TriggerType.Touch)
        {
            if (collider.name.Contains("_Palm"))
            {
                Contacted = false;
            }
        }
            
    }

    void Update()
    {
        if (triggerType == TriggerType.Grasp)
        {
            if (hapMaterial == null)
            {
                Debug.LogError("HapMaterial that triggers the process bar is not assigned.");
                return;
            }
            if (hapMaterial.isGrasped & (Contacted == false))
            {
                Contacted = true;
                Debug.Log("Progress bar starts");
            }
            else if ((hapMaterial.isGrasped == false) & Contacted)
            {
                Contacted = false;
                Debug.Log("Progress bar stops");
            }
        }

        //Debug.Log(Contacted);


        if (Contacted == true)
        {
            foreach (var progressBar in _progressBars)
            {

                if (progressBar.Value < 1)
                {
                    progressBar.Value += 0.003f;
                }
                else if (progressBar.Value >= 1)
                {
                    progressBar.Value = 1;
                }
            }
        }
    }
}
