using System.Collections;
using System.Collections.Generic;
using HaptGlove;
using UnityEngine;

public class TriggerGrabOrb : MonoBehaviour
{
    private HaptGloveHandler haptGloveHandler;
    // Start is called before the first frame update
    void Start()
    {

    }


    private void OnTriggerEnter(Collider other)
    {

        if (other.name.Contains("R_Palm"))
        {
            if(other.transform.childCount == 0)
            {
                gameObject.transform.SetParent(other.transform);
            }

            haptGloveHandler = other.GetComponentInParent<HaptGloveHandler>();
            string[] fingers = new string[5] { "Thumb", "Index", "Middle", "Ring", "Pinky"};
            byte[][] clutchStates = haptGloveHandler.haptics.SetClutchState(fingers, true);
            byte[] btData = haptGloveHandler.haptics.ApplyHaptics(clutchStates, 40, false);
            haptGloveHandler.BTSend(btData);

            byte[] clutchState = haptGloveHandler.haptics.SetClutchState("Palm", true);
            btData = haptGloveHandler.haptics.ApplyHaptics(5, clutchState, 10, false);
            haptGloveHandler.BTSend(btData);
        }
    }
}
