using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HeartbeatSelection : MonoBehaviour
{
    public HeartbeatHandler heartbeatHandler;


    public enum HeartBeatType
    {
        HealthyHeart,
        HypertensiveHeart,
        HeartFailure,
        NonBeatingHeart
    }

    public HeartBeatType heartBeatType;

    void Start()
    {
        switch (heartBeatType)
        {
            case HeartBeatType.HealthyHeart:
                heartbeatHandler.heartBeat_Hz = 70 / 60f;
                heartbeatHandler.pres1 = 20;
                heartbeatHandler.pres2 = 50;
                break;
            case HeartBeatType.HypertensiveHeart:
                heartbeatHandler.heartBeat_Hz = 100 / 60f;
                heartbeatHandler.pres1 = 20;
                heartbeatHandler.pres2 = 50;
                break;
            case HeartBeatType.HeartFailure:
                heartbeatHandler.heartBeat_Hz = 100 / 60f;
                heartbeatHandler.pres1 = 10;
                heartbeatHandler.pres2 = 15;
                break;
            case HeartBeatType.NonBeatingHeart:
                heartbeatHandler.isInteractable = false;
                heartbeatHandler.StopBeating(); //0hz
                break;
        }
    }
}

