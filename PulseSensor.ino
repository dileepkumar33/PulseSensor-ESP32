/*
 * Pulse Monitoring using ESP32, Pulse Sensor, and Blynk IoT
 * Author: Dileep Kumar M
 * Hackathon Project - Elevium
 */

#include <WiFi.h>
#include <BlynkSimpleEsp32.h>

// Replace with your actual credentials
char auth[] = "AuthToken";    // Blynk Auth Token
char ssid[] = "WiFiSSID";         // Wi-Fi SSID
char pass[] = "WiFiPassword";     // Wi-Fi Password

const int pulsePin = 34;              // Analog pin for pulse sensor
int signal;
int threshold = 550;                  // Adjust based on your sensor/environment
unsigned long lastBeat = 0;
int BPM = 0;

BlynkTimer timer;

void setup() {
  Serial.begin(115200);
  pinMode(pulsePin, INPUT);
  Blynk.begin(auth, ssid, pass);
  timer.setInterval(100L, sendBPM);   // check every 100ms
  Serial.println("Place your finger on the pulse sensor...");
}

void sendBPM() {
  signal = analogRead(pulsePin);

  if (signal > threshold && (millis() - lastBeat > 300)) {
    unsigned long currentTime = millis();
    BPM = 60000 / (currentTime - lastBeat);
    lastBeat = currentTime;

    Serial.print("Heartbeat detected! BPM: ");
    Serial.println(BPM);

    Blynk.virtualWrite(V1, BPM);  // Send BPM to Blynk App (Virtual Pin V1)
  }
}

void loop() {
  Blynk.run();
  timer.run();
}
