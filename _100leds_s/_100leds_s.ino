int leds[100];
int ledCount = 100;
int blinkFactor = 1;
void setup() {
  Serial.begin(9600);
  for (int blinkFactor = 1; blinkFactor <= 100; blinkFactor++) {
    for (int thisLed = blinkFactor - 1; thisLed < ledCount; thisLed += blinkFactor) {
      if (leds[thisLed] == 0) {
        leds[thisLed] = 1;
      } else {
        leds[thisLed] = 0;
      }
    }
  }
  for (int thisLed; thisLed <= ledCount; thisLed++) {
    if (leds[thisLed] == 1) {
      Serial.print(thisLed + 1);
      Serial.print(" ");
    }
  }
}

void loop() {
}

