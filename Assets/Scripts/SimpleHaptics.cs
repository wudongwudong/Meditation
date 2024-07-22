using System.Collections;
using System.Collections.Generic;
using HaptGlove;
using UnityEngine;

public class SimpleHaptics : MonoBehaviour
{
    public SimpleGrasping simpleGrasping;

    public HaptGloveHandler leftHand;
    public HaptGloveHandler rightHand;

    public bool[] hapticsChannels = new bool[6];
    public byte tarPres = 0;

    void Start()
    {
        if (simpleGrasping == null)
        {
            Debug.LogError("SimpleHaptics: SimpleGrasping is not assigned");
            return;
        }
        else
        {
            simpleGrasping.onGrasped += ApplySimpleHaptics;
            simpleGrasping.onReleased += RemoveSimpleHaptics;
        }

        if ((leftHand == null) | (rightHand == null))
        {
            Debug.LogError("SimpleHaptics: left and right hand is not assigned");
        }
        
    }

    private void ApplySimpleHaptics(HaptGloveHandler.HandType hand)
    {
        switch (hand)
        {
            case HaptGloveHandler.HandType.Left:
                string[] fingers = new string[6] { "Thumb", "Index", "Middle", "Ring", "Pinky", "Palm" };
                List<string> fingerList = new List<string>();
                for (int i = 0; i < hapticsChannels.Length; i++)
                {
                    if (hapticsChannels[i])
                    {
                        fingerList.Add(fingers[i]);
                    }
                }

                byte[][] clutchStates = leftHand.haptics.SetClutchState(fingerList.ToArray(), true);
                byte[] btData = leftHand.haptics.ApplyHaptics(clutchStates, tarPres, false);
                leftHand.BTSend(btData);
                break;
            case HaptGloveHandler.HandType.Right:
                fingers = new string[6] { "Thumb", "Index", "Middle", "Ring", "Pinky", "Palm" };
                fingerList = new List<string>();
                for (int i = 0; i < hapticsChannels.Length; i++)
                {
                    if (hapticsChannels[i])
                    {
                        fingerList.Add(fingers[i]);
                    }
                }

                clutchStates = rightHand.haptics.SetClutchState(fingerList.ToArray(), true);
                btData = rightHand.haptics.ApplyHaptics(clutchStates, tarPres, false);
                rightHand.BTSend(btData);
                break;
        }
    }

    private void RemoveSimpleHaptics(HaptGloveHandler.HandType hand)
    {
        switch (hand)
        {
            case HaptGloveHandler.HandType.Left:
                string[] fingers = new string[6] { "Thumb", "Index", "Middle", "Ring", "Pinky", "Palm" };
                List<string> fingerList = new List<string>();
                for (int i = 0; i < hapticsChannels.Length; i++)
                {
                    if (hapticsChannels[i])
                    {
                        fingerList.Add(fingers[i]);
                    }
                }

                byte[][] clutchStates = leftHand.haptics.SetClutchState(fingerList.ToArray(), false);
                byte[] btData = leftHand.haptics.ApplyHaptics(clutchStates, tarPres, false);
                leftHand.BTSend(btData);
                break;
            case HaptGloveHandler.HandType.Right:
                fingers = new string[6] { "Thumb", "Index", "Middle", "Ring", "Pinky", "Palm" };
                fingerList = new List<string>();
                for (int i = 0; i < hapticsChannels.Length; i++)
                {
                    if (hapticsChannels[i])
                    {
                        fingerList.Add(fingers[i]);
                    }
                }

                clutchStates = rightHand.haptics.SetClutchState(fingerList.ToArray(), false);
                btData = rightHand.haptics.ApplyHaptics(clutchStates, tarPres, false);
                rightHand.BTSend(btData);
                break;
        }
    }
}
