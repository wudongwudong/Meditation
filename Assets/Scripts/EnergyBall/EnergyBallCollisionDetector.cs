using System;
using System.Collections;
using System.Collections.Generic;
using HaptGlove;
using UnityEngine;

public class EnergyBallCollisionDetector : MonoBehaviour
{
    //public EnergyBallHaptics energyBallHaptics;
    private HaptGloveHandler haptGloveHandler;
    public enum Energy
    {
        Small,
        Middle,
        High
    };

    public Energy energyLevel = Energy.Small;

    //public EnergyBallCollisionDetector middleEnergy;

    void OnTriggerEnter(Collider collider)
    {
        if (collider.name.Contains("_Palm"))
        {
            //Debug.Log(collider.name);
            haptGloveHandler = collider.GetComponentInParent<HaptGloveHandler>();

            string[] fingers; 
            //byte[][] clutchStates = haptGloveHandler.haptics.SetClutchState(fingers, true);

            byte[] btsend;

            switch (energyLevel)
            {
                case Energy.Small:
                    //middleEnergy.middleEnergyApplied = false;

                    string finger = "Palm";
                    byte[] clutchState = haptGloveHandler.haptics.SetClutchState(finger, true);
                    LowEnergy(clutchState);
                    Debug.Log(Energy.Small);
                    break;
                case Energy.Middle:
                    //middleEnergy.middleEnergyApplied = true;

                    fingers = new string[5] { "Thumb", "Index", "Middle", "Ring", "Pinky" };
                    byte[][] clutchStates = haptGloveHandler.haptics.SetClutchState(fingers, true);
                    MiddleEnergy(clutchStates);
                    Debug.Log(Energy.Middle);
                    break;
                case Energy.High:
                    //middleEnergy.middleEnergyApplied = false;

                    fingers = new string[6] { "Thumb", "Index", "Middle", "Ring", "Pinky", "Palm" };
                    clutchStates = haptGloveHandler.haptics.SetClutchState(fingers, true);
                    HighEnergy(clutchStates);
                    Debug.Log(Energy.High);
                    break;
            }

            
        }
    }

    void OnTriggerExit(Collider collider)
    {
        if (collider.name.Contains("_Palm"))
        {
            haptGloveHandler = collider.GetComponentInParent<HaptGloveHandler>();

            //string[] fingers = new string[6] { "Thumb", "Index", "Middle", "Ring", "Pinky", "Palm" };
            //byte[][] clutchStates = haptGloveHandler.haptics.SetClutchState(fingers, true);

            byte[] btsend;

            switch (energyLevel)
            {
                case Energy.Small:
                    //Apply a lower level vibration to all fingers and palm.
                    //middleEnergy.middleEnergyApplied = false;
                    Debug.Log("No energy");
                    string finger = "Palm";
                    byte[] clutchState = haptGloveHandler.haptics.SetClutchState(finger, false);
                    LowEnergy(clutchState);
                    break;
                case Energy.Middle:
                    //middleEnergy.middleEnergyApplied = false;
                    string[] fingers = new string[5] { "Thumb", "Index", "Middle", "Ring", "Pinky"};
                    byte[][] clutchStates = haptGloveHandler.haptics.SetClutchState(fingers, false);
                    MiddleEnergy(clutchStates);
                    Debug.Log(Energy.Small);
                    break;
                case Energy.High:
                    //middleEnergy.middleEnergyApplied = true;
                    fingers = new string[6] { "Thumb", "Index", "Middle", "Ring", "Pinky", "Palm" };
                    clutchStates = haptGloveHandler.haptics.SetClutchState(fingers, true);
                    MiddleEnergy(clutchStates);
                    Debug.Log(Energy.Middle);
                    break;
            }
        }
    }

    private void LowEnergy(byte[] clutchStates)
    {
        byte[] btsend = haptGloveHandler.haptics.ApplyHaptics(3, clutchStates, 10, false);
        haptGloveHandler.BTSend(btsend);
    }

    private void MiddleEnergy(byte[][] clutchStates)
    {
        byte[] btsend = haptGloveHandler.haptics.ApplyHaptics(3, clutchStates, 10, false);
        haptGloveHandler.BTSend(btsend);
    }

    private void HighEnergy(byte[][] clutchStates)
    {
        byte[] btsend = haptGloveHandler.haptics.ApplyHaptics(5, clutchStates, 20, false);
        haptGloveHandler.BTSend(btsend);
    }


    //public bool middleEnergyApplied = false;
    //private float time;
    //private int fingerID;
    //void Update()
    //{
    //    if (middleEnergyApplied)
    //    {
    //        time += Time.deltaTime;

    //        if (time >= 0.33f)
    //        {
    //            time = 0;

    //            List<byte> data = new List<byte>();
    //            byte[] clutchState = new byte[2];

    //            switch (fingerID)
    //            {
    //                case 0:
    //                    data = new List<byte>();
    //                    clutchState = haptGloveHandler.haptics.SetClutchState("Thumb", true);
    //                    data.AddRange(haptGloveHandler.haptics.ApplyHaptics(5, clutchState, 15, false));
    //                    clutchState = haptGloveHandler.haptics.SetClutchState("Pinky", false);
    //                    data.AddRange(haptGloveHandler.haptics.ApplyHaptics(5, clutchState, 15, false));
    //                    break;
    //                case 1:
    //                    data = new List<byte>();
    //                    clutchState = haptGloveHandler.haptics.SetClutchState("Index", true);
    //                    data.AddRange(haptGloveHandler.haptics.ApplyHaptics(5, clutchState, 15, false));
    //                    clutchState = haptGloveHandler.haptics.SetClutchState("Thumb", false);
    //                    data.AddRange(haptGloveHandler.haptics.ApplyHaptics(5, clutchState, 15, false));
    //                    break;
    //                case 2:
    //                    data = new List<byte>();
    //                    clutchState = haptGloveHandler.haptics.SetClutchState("Middle", true);
    //                    data.AddRange(haptGloveHandler.haptics.ApplyHaptics(5, clutchState, 15, false));
    //                    clutchState = haptGloveHandler.haptics.SetClutchState("Index", false);
    //                    data.AddRange(haptGloveHandler.haptics.ApplyHaptics(5, clutchState, 15, false));
    //                    break;
    //                case 3:
    //                    data = new List<byte>();
    //                    clutchState = haptGloveHandler.haptics.SetClutchState("Ring", true);
    //                    data.AddRange(haptGloveHandler.haptics.ApplyHaptics(5, clutchState, 15, false));
    //                    clutchState = haptGloveHandler.haptics.SetClutchState("Middle", false);
    //                    data.AddRange(haptGloveHandler.haptics.ApplyHaptics(5, clutchState, 15, false));
    //                    break;
    //                case 4:
    //                    data = new List<byte>();
    //                    clutchState = haptGloveHandler.haptics.SetClutchState("Pinky", true);
    //                    data.AddRange(haptGloveHandler.haptics.ApplyHaptics(5, clutchState, 15, false));
    //                    clutchState = haptGloveHandler.haptics.SetClutchState("Ring", false);
    //                    data.AddRange(haptGloveHandler.haptics.ApplyHaptics(5, clutchState, 15, false));
    //                    break;
    //            }

    //            haptGloveHandler.BTSend(data.ToArray());

    //            if (fingerID == 4)
    //            {
    //                fingerID = 0;
    //            }
    //            else
    //            {
    //                fingerID++;
    //            }
    //        }
    //    }
    //}
}
