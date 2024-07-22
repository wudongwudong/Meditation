using System.Collections;
using System.Collections.Generic;
using HaptGlove;
using Unity.XR.CoreUtils;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.XR;
using UnityEngine.XR.Management;

public class HaptGloveUIOpenXR : MonoBehaviour
{
    public Toggle toggleHEXR_L, toggleHEXR_R, toggleHandMesh;
    public Button buttonBLE, buttonPump, buttonExhaust, buttonDropObject, buttonReset, buttonAdjustFloorLow, buttonAdjustFloorHigh;

    public HaptGloveHandler handLeft, handRight;

    public Text log;

    private List<string> controlledHandsList = new List<string>();

    void Start()
    {
        toggleHEXR_L.onValueChanged.AddListener(delegate
        {
            if (toggleHEXR_L.isOn)
                controlledHandsList.Add("Left");
            else
                controlledHandsList.Remove("Left");
            
        });

        toggleHEXR_R.onValueChanged.AddListener(delegate {
            if (toggleHEXR_R.isOn)
                controlledHandsList.Add("Right");
            else
                controlledHandsList.Remove("Right");
        });

        toggleHandMesh.onValueChanged.AddListener(delegate
        {
            if (toggleHandMesh.isOn)
            {
                handLeft.transform.Find("LeftHand").gameObject.SetActive(false);
                handRight.transform.Find("RightHand").gameObject.SetActive(false);
            }
            else
            {
                handLeft.transform.Find("LeftHand").gameObject.SetActive(true);
                handRight.transform.Find("RightHand").gameObject.SetActive(true);
            }
        });

        buttonBLE.onClick.AddListener(BTButtonOnClick);
        buttonPump.onClick.AddListener(PSButtonOnClick);
        buttonExhaust.onClick.AddListener(ExButtonOnClick);
        buttonDropObject.onClick.AddListener(DropObjectButtonOnClick);
        buttonReset.onClick.AddListener(ResetButtonOnClick);
        buttonAdjustFloorHigh.onClick.AddListener(BringFloorUp);
        buttonAdjustFloorLow.onClick.AddListener(BringFloorDown);
    }

    void Update()
    {
        log.text = handRight.GetComponent<HaptGloveHandler>().btText;
    }
    private void BTButtonOnClick()
    {
        foreach (var hand in controlledHandsList)
        {
            switch (hand)
            {
                case "Left":
                    handLeft.GetComponent<HaptGloveHandler>().BTConnection();
                    break;
                case "Right":
                    handRight.GetComponent<HaptGloveHandler>().BTConnection();
                    break;
            }
        }
    }

    private void PSButtonOnClick()
    {
        foreach (var hand in controlledHandsList)
        {
            switch (hand)
            {
                case "Left":
                    handLeft.GetComponent<HaptGloveHandler>().AirPressureSourceControl();
                    break;
                case "Right":
                    handRight.GetComponent<HaptGloveHandler>().AirPressureSourceControl();
                    break;
            }
        }
    }

    private void ExButtonOnClick()
    {
        byte[][] clutchStates =
            {new byte[] {0, 2}, new byte[] {1, 2}, new byte[] {2, 2}, new byte[] {3, 2}, new byte[] {4, 2}};
        byte[] btData;

        foreach (var hand in controlledHandsList)
        {
            switch (hand)
            {
                case "Left":
                    btData = handLeft.GetComponent<HaptGloveHandler>().haptics.ApplyHaptics(clutchStates, 60, false);
                    handLeft.GetComponent<HaptGloveHandler>().BTSend(btData);
                    break;
                case "Right":
                    btData = handRight.GetComponent<HaptGloveHandler>().haptics.ApplyHaptics(clutchStates, 60, false);
                    handRight.GetComponent<HaptGloveHandler>().BTSend(btData);
                    break;
            }
        }
    }

    private void DropObjectButtonOnClick()
    {
        foreach (var hand in controlledHandsList)
        {
            switch (hand)
            {
                case "Left":
                    handLeft.GetComponent<Grasping>().DropObject();
                    break;
                case "Right":
                    handRight.GetComponent<Grasping>().DropObject();
                    break;
            }
        }
    }

    private void ResetButtonOnClick()
    {
        Camera.main.transform.parent.parent.GetComponent<XROrigin>().CameraYOffset = 1.7f;
    }

    private void BringFloorUp()
    {
        Camera.main.transform.parent.parent.GetComponent<XROrigin>().CameraYOffset = Camera.main.transform.parent.parent.GetComponent<XROrigin>().CameraYOffset - 0.05f;
    }

    private void BringFloorDown()
    {
        Camera.main.transform.parent.parent.GetComponent<XROrigin>().CameraYOffset = Camera.main.transform.parent.parent.GetComponent<XROrigin>().CameraYOffset + 0.05f;
    }
}
