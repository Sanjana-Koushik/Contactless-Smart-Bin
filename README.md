# Contactless Smart Bin (IoT)

A hands-free, automated waste management system designed to improve hygiene by eliminating the need for physical contact with the bin lid.

## 🚀 Overview
This project uses an **Arduino Uno** and an **Ultrasonic Sensor** to detect a user's hand within a specific range (e.g., 20cm). Once triggered, a **Servo Motor** automatically opens the lid, holds it for 3 seconds, and then closes it.

## 🛠️ Tech Stack
* **Microcontroller:** Arduino Uno
* **Sensors:** HC-SR04 Ultrasonic Sensor
* **Actuators:** MG995/SG90 Servo Motor
* **Programming Language:** C++ (Arduino Sketch)

## 📂 Project Structure
* `main.ino`: The core logic for distance calculation and motor control.
* `README.md`: Documentation.

## 🔧 How it Works
1. The **Ultrasonic Sensor** sends a pulse and measures the time it takes to bounce back to calculate distance.
2. If the distance is less than 20cm, the **Arduino** sends a signal to the **Servo Motor**.
3. The Servo rotates to 90 degrees (opening the lid).
4. After a delay of 3000ms, the Servo rotates back to 0 degrees (closing the lid).