#include <SoftwareSerial.h>
// XBee's DOUT (TX) is connected to pin 14 (Arduino's Software RX)
// XBee's DIN (RX) is connected to pin 15 (Arduino's Software TX)
SoftwareSerial XBee(14, 15); // RX, TX
// ---------------------------------------------------------------------------
// Example NewPing library sketch that does a ping about 20 times per second.
// ---------------------------------------------------------------------------
#include <NewPing.h>

#define TRIGGER_PIN  3  // RX Arduino pin tied to trigger pin on the ultrasonic sensor.
#define ECHO_PIN     2  // TX Arduino pin tied to echo pin on the ultrasonic sensor.
#define MAX_DISTANCE 450 // Maximum distance we want to ping for (in centimeters). Maximum sensor distance is rated at 400-500cm.

NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE); // NewPing setup of pins and maximum distance.
void setup() {
  Serial.begin(9600); // Open serial monitor at 115200 baud to see ping results.
  //pinMode(LEDPin, OUTPUT);
  XBee.begin(9600);
}

void loop() {
  delay(50);                      // Wait 50ms between pings (about 20 pings/sec). 29ms should be the shortest delay between pings.
  unsigned int uS = sonar.ping_median(); // Returning median pings at a rate of 3Hz.
  int distance = uS / US_ROUNDTRIP_CM;
  if (distance < 5){
    distance=500;
  }
  
  XBee.write(distance);
 // Serial.print("Ping: ");
  Serial.println(distance); // Convert ping time to distance and print result (0 = outside set distance range, no ping echo)
}
