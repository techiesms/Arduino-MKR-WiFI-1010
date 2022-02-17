#include <SPI.h>
#include <WiFiNINA.h>

void setup() {
  Serial.begin(9600);
  WiFi.WiFiInitLEDs();
}

void loop() {

 WiFi.WiFiRedLED(255);
 WiFi.WiFiGreenLED(0);
 WiFi.WiFiBlueLED(0);
 delay(500);
 WiFi.WiFiRedLED(0);
 WiFi.WiFiGreenLED(255);
 WiFi.WiFiBlueLED(0);
 delay(500);
 WiFi.WiFiRedLED(0);
 WiFi.WiFiGreenLED(0);
 WiFi.WiFiBlueLED(255);
 delay(500);
}
