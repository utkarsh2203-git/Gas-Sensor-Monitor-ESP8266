# Gas Sensor Monitoring System using ESP8266

An IoT-based Gas Monitoring System developed using the ESP8266 NodeMCU and MQ-135 Gas Sensor. The system continuously monitors gas concentration in the surrounding environment and sends real-time data to the Blynk IoT Cloud for remote monitoring.

---

## Project Overview

This project is designed to detect harmful gases and monitor air quality in real time. The MQ-135 sensor measures gas concentration, while the ESP8266 transmits the data over Wi-Fi to the Blynk cloud platform. If the gas level exceeds a predefined threshold, the system alerts the user through the Blynk application.

---

## Features

- Real-time gas monitoring
- Wi-Fi connectivity using ESP8266
- Remote monitoring using Blynk IoT
- Gas leakage alerts
- Live sensor readings
- Low-cost IoT solution
- Easy to build and deploy

---

## Hardware Components

| Component | Quantity |
|-----------|----------|
| ESP8266 NodeMCU | 1 |
| MQ-135 Gas Sensor | 1 |
| Breadboard | 1 |
| Jumper Wires | As Required |
| USB Cable | 1 |

---

## Software Used

- Arduino IDE
- Blynk IoT
- ESP8266 Board Package

---

## Project Structure

```
Gas-Sensor-Monitor-ESP8266
│
├── README.md
├── LICENSE
├── .gitignore
│
├── code
│   └── GasSensorMonitor
│       └── GasSensorMonitor.ino
│
├── circuit
│   └── circuit_diagram.png
│
├── images
│   ├── hardware.jpg
│   ├── serial_monitor.png
│   └── blynk_dashboard.jpg
│
├── report
│   └── Gas-Sensor-Monitoring-System.pdf
│
└── docs
    └── components.md
```

---

## Installation

1. Install Arduino IDE.
2. Install the ESP8266 Board Package.
3. Install the required libraries:
   - Blynk
   - ESP8266WiFi
4. Open `GasSensorMonitor.ino`.
5. Update your Wi-Fi credentials and Blynk Auth Token.
6. Upload the code to the ESP8266.
7. Open the Blynk dashboard to monitor gas levels.

---

## Circuit Diagram

The circuit diagram is available in:

```
circuit/circuit_diagram.png
```

---

## Project Images

### Hardware Setup

```
images/hardware.jpg
```

### Arduino Serial Monitor

```
images/serial_monitor.png
```

### Blynk Dashboard

```
images/blynk_dashboard.jpg
```

---

## Working Principle

1. MQ-135 detects harmful gases.
2. ESP8266 reads sensor values.
3. Data is sent to the Blynk Cloud.
4. Gas levels are displayed on the mobile dashboard.
5. Alerts are generated when gas concentration exceeds the threshold.

---

## Future Improvements

- SMS Alerts
- Email Notifications
- OLED Display
- Data Logging
- Multiple Gas Sensors
- Mobile Push Notifications
- AI-Based Air Quality Prediction

---

## License

This project is licensed under the MIT License.

---

## Author

**Utkarsh Singh**

B.Tech Electronics & Communication Engineering  
Bharati Vidyapeeth (Deemed to be University), Pune

**GitHub:** https://github.com/utkarsh2203-git

**LinkedIn:** https://www.linkedin.com/in/utkarsh-singh-a35712393
