# L298 Motor Driver Control – Arduino Project

This project demonstrates how to control DC motors using an **L298 motor driver** and **Arduino**.

## 📌 Project Description
In this project, two DC motors are controlled using the L298 driver module.  
The code allows the robot/motor system to:
- Move forward
- Turn left
- Turn right
- Stop motors

Motor speed is controlled using PWM via enable pins.

## ⚙️ Hardware Used
- Arduino (Uno / Nano / compatible)
- L298 Motor Driver Module
- DC Motors
- Power Supply
- Connecting Wires

## 🔌 Pin Configuration
- en1, en2 → Enable pins (PWM speed control)
- in1, in2 → Motor 1 direction control
- in3, in4 → Motor 2 direction control

Pin numbers can be changed based on your wiring.

## ▶️ How It Works
1. Clone the repository
2. Open the `.ino` file in Arduino IDE
3. Connect the motors and L298 module correctly
4. Upload the code to Arduino
5. The motors will move forward, stop, turn right, and turn left in sequence

## 🧠 Functions Included
- `forward()` → Move forward
- `left()` → Turn left
- `right()` → Turn right
- `stop_m()` → Stop all motors

## 🛠️ Software
- Arduino IDE

## 📌 Notes
This project was created for learning and practice purposes.  
You can modify motor speed, delays, and logic as you like.

Thanks for reading ❤️  
Created by **Amirali Granmayeh**
