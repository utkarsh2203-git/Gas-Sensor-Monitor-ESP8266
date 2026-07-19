 #define BLYNK_TEMPLATE_ID "TMPL3U0AxVlnl" 
#define BLYNK_TEMPLATE_NAME "Gas Sensor Monitor" 
#define BLYNK_AUTH_TOKEN "5Rqd40FymT6nrJ5FLwdjEJyGDianbT7e" 
 
#define BLYNK_PRINT Serial 
 
#include <ESP8266WiFi.h> 
#include <BlynkSimpleEsp8266.h> 
 
// ---------------- Wi-Fi Credentials ---------------- 
char ssid[] = "YOUR_WIFI_NAME";
char pass[] = "YOUR_WIFI_PASSWORD";
char auth[] = "YOUR_BLYNK_AUTH_TOKEN";
 
// ---------------- Sensor Setup ---------------- 
#define GAS_PIN A0  // MQ-135 analog output 
 
unsigned long previousMillis = 0;  // For timing 
const long interval = 30000;       // 30 seconds 
 
// ---------------- Send Gas Data ---------------- 
void sendGasSensor() { 
  int gasValue = analogRead(GAS_PIN); 
 
  // Print to Serial Monitor 
  Serial.println("===================================="); 
  Serial.print(" Gas Value (MQ-135): "); Serial.println(gasValue); 
 
  // Send to Blynk (Virtual Pin V2) 
  Blynk.virtualWrite(V2, gasValue); 
 
  // Optional warning 
  if (gasValue > 600) { 
    Blynk.logEvent("pollution_alert", " Bad Air Quality Detected!"); 
  } 
} 
 
10 
 
// ---------------- Setup ---------------- 
void setup() { 
  Serial.begin(115200); 
  Serial.println("Connecting to Blynk..."); 
  Blynk.begin(auth, ssid, pass); 
  Serial.println(" Gas Sensor Monitoring Started..."); 
} 
 
// ---------------- Main Loop ---------------- 
void loop() { 
  Blynk.run(); 
 
  unsigned long currentMillis = millis(); 
  if (currentMillis - previousMillis >= interval) { 
    previousMillis = currentMillis; 
    sendGasSensor(); 
  } 
} 
 
 