#include "WiFi.h"

void setup() {
  Serial.begin(115200);
  WiFi.mode(WIFI_STA); // Set the Wi-Fi mode to station mode
  WiFi.begin(); // Initialize Wi-Fi
  Serial.print("Station MAC Address: ");
  Serial.println(WiFi.macAddress()); // Print the MAC address
}

void loop() {

}
