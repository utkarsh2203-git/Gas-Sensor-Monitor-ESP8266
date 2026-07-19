import serial
import time
import requests

# ---------------- Blynk Configuration ----------------
BLYNK_AUTH_TOKEN = "YOUR_BLYNK_AUTH_TOKEN"

# Replace with your ESP8266 COM Port
SERIAL_PORT = "COM3"

# Baud Rate
BAUD_RATE = 115200

# Blynk API URL
BLYNK_URL = f"https://blynk.cloud/external/api/update?token={BLYNK_AUTH_TOKEN}&V2="

# Open Serial Port
ser = serial.Serial(SERIAL_PORT, BAUD_RATE)

print("Gas Sensor Monitoring Started...")

while True:
    try:
        if ser.in_waiting:
            gas_value = ser.readline().decode().strip()

            if gas_value.isdigit():

                gas_value = int(gas_value)

                print("=" * 40)
                print("Gas Value (MQ-135):", gas_value)

                # Send value to Blynk
                requests.get(BLYNK_URL + str(gas_value))

                # Warning
                if gas_value > 600:
                    print("Bad Air Quality Detected!")

        time.sleep(1)

    except KeyboardInterrupt:
        print("Program Stopped")
        break
