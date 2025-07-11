# PulseSensor-ESP32
ESP32 Pulse Sensor with Blynk IoT Dashboard | Hackathon Project
# 🫀 Pulse Monitoring System using ESP32, Pulse Sensor & Blynk IoT

## 🏁 Problem Statement

In modern healthcare, there is a growing need for **portable, affordable, and real-time heart rate monitoring systems**. Many remote areas and low-resource environments lack access to such technology. The goal of this project was to **design a compact pulse monitoring device** that is:

- **Easy to build**
- **Wireless and real-time**
- **Affordable for public use**
- **IoT-enabled for remote monitoring**

## 💡 Project Description

This project demonstrates a **heart rate monitoring system** built using an **ESP32 microcontroller**, a **pulse sensor**, and integrated with the **Blynk IoT platform**. The sensor captures heartbeats in real-time, and the ESP32 sends BPM data to the Blynk app, where it is displayed on a customizable dashboard.

## 🔧 Technologies & Components Used

- 🧠 **ESP32** microcontroller
- 🫀 **Pulse Sensor**
- 🔌 **Arduino IDE**
- ☁️ **Blynk IoT Cloud**
- 📱 **Blynk Mobile App**
- ⚙️ **C++ / Embedded C**

## 🔍 Features

- Real-time BPM calculation
- Sends data to Blynk IoT dashboard
- Custom mobile interface (gauge/label)
- Portable, low-cost and IoT-enabled

## 📱 Blynk Setup

- Add **Gauge** or **Label** widget to your dashboard
- Set the data stream to **Virtual Pin V1**
- Copy the **Auth Token** from the template and add it to the code

## 🚀 Getting Started

1. Connect the pulse sensor to ESP32
2. Paste your **Wi-Fi** and **Blynk token** in the code
3. Upload via Arduino IDE
4. Monitor heart rate on your phone using the Blynk App

## 📌 Pin Configuration

| Pulse Sensor Pin | ESP32 Pin |
|------------------|-----------|
| VCC              | 3.3V      |
| GND              | GND       |
| Signal (OUT)     | GPIO 34   |

## 👥 Team / Credits

- **Dileep Kumar M**  
- Project built during a hackathon by **Elevium Company**

## 📄 License

MIT License – use, modify and share freely!
