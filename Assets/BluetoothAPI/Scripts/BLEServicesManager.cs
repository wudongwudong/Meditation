﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using ArduinoBluetoothAPI;
using System;
using TMPro;

public class BLEServicesManager : MonoBehaviour
{
    private BluetoothHelper bluetoothHelper;
    private float timer;
    public float[] sensorArray = new float[16];
    public float[] InitialData = new float[16];
    public TMP_Text message;
    public bool _connected;
    public AudioClip ArisConnected;
    private AudioSource ASArisConnected;
    private bool ASArisConnectedNotplayed;
    void Start()
    {
        ASArisConnected = gameObject.AddComponent<AudioSource>();
        // Assign the audio clip to the AudioSource
        ASArisConnected.clip = ArisConnected;
        ASArisConnectedNotplayed = true;
        timer = 0;
    }

    private void OnScanEnded(BluetoothHelper helper, LinkedList<BluetoothDevice> devices){
        Debug.Log("FOund " + devices.Count);
        if(devices.Count == 0){
            bluetoothHelper.ScanNearbyDevices();
            return;
        }

        foreach(var d in devices)
        {
            Debug.Log(d.DeviceName);
        }
            
        try
        {
            bluetoothHelper.setDeviceName("AR3C002");
            bluetoothHelper.Connect();
            Debug.Log("Connecting");
        }catch(Exception ex)
        {
            bluetoothHelper.ScanNearbyDevices();
            Debug.Log(ex.Message);
        }

    }

    void OnDestroy()
    {
        if (bluetoothHelper != null)
            bluetoothHelper.Disconnect();
    }

    void Update(){
        if(bluetoothHelper == null)
            return;
        if(!bluetoothHelper.isConnected())
            return;
        timer += Time.deltaTime;

        if(timer < 5)
            return;
        timer = 0;
        //sendData();
    }

    void sendData(){
        // Debug.Log("Sending");
        // BluetoothHelperCharacteristic ch = new BluetoothHelperCharacteristic("FFE1");
        // ch.setService("FFE0"); //this line is mandatory!!!
        // bluetoothHelper.WriteCharacteristic(ch, new byte[]{0x44, 0x55, 0xff});

        Debug.Log("Sending");
        BluetoothHelperCharacteristic ch = new BluetoothHelperCharacteristic("19B10001-E8F2-537E-4F6C-D104768A1214");
        ch.setService("19B10000-E8F2-537E-4F6C-D104768A1214"); //this line is mandatory!!!
        bluetoothHelper.WriteCharacteristic(ch, "1234");
    }

    void read(){
        BluetoothHelperCharacteristic ch = new BluetoothHelperCharacteristic("2A24");
        ch.setService("180A");//this line is mandatory!!!
        bluetoothHelper.ReadCharacteristic(ch);
    }

    public void setupBluetooth()
    {
        try
        {
            if (bluetoothHelper != null)
                return;

            Debug.Log("HI");
            message.text = "HI";

            BluetoothHelper.BLE = true;  //use Bluetooth Low Energy Technology
            bluetoothHelper = BluetoothHelper.GetNewInstance();
            bluetoothHelper.OnConnected += (helper) =>
            {
                List<BluetoothHelperService> services = helper.getGattServices();
                foreach (BluetoothHelperService s in services)
                {
                    Debug.Log("Service : " + s.getName());
                    foreach (BluetoothHelperCharacteristic item in s.getCharacteristics())
                    {
                        Debug.Log(item.getName());
                    }
                }

                Debug.Log("Connected");
                message.text = "Connected!";
                _connected = true;
                BluetoothHelperCharacteristic c = new BluetoothHelperCharacteristic("ffe4", "ffe0");
                c.setService("ffe0");
                bluetoothHelper.Subscribe(c);
                //sendData();
            };
            bluetoothHelper.OnConnectionFailed += (helper) =>
            {
                Debug.Log("Connection failed");
            };
            bluetoothHelper.OnScanEnded += OnScanEnded;
            bluetoothHelper.OnServiceNotFound += (helper, serviceName) =>
            {
                Debug.Log(serviceName);
            };
            bluetoothHelper.OnCharacteristicNotFound += (helper, serviceName, characteristicName) =>
            {
                Debug.Log(characteristicName);
            };
            bluetoothHelper.OnCharacteristicChanged += (helper, value, characteristic) =>
            {
                Debug.Log(characteristic.getName());
                Debug.Log(value[0]);
                byte[] temp = new byte[4];
                for (int i = 0; i < 16; i++)
                {
                    temp[0] = value[i * 4 + 2 + 3];
                    temp[1] = value[i * 4 + 2 + 2];
                    temp[2] = value[i * 4 + 2 + 1];
                    temp[3] = value[i * 4 + 2 + 0];
                    sensorArray[i] = (float)BitConverter.ToInt32(temp, 0);
                    if (i < 5) sensorArray[i] *= 10;
                }
                
                message.text = sensorArray[0].ToString();
                if(ASArisConnectedNotplayed == true)
                {
                    ASArisConnected.Play();
                    ASArisConnectedNotplayed = false;
                }


            };

            bluetoothHelper.ScanNearbyDevices();

        }
        catch (Exception ex)
        {
            Debug.Log(ex.StackTrace);
        }
    }
}