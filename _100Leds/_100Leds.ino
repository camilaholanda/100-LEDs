int leds[100];
int ledCount = 100;
int blinkFactor = 1;
void setup() {
  Serial.begin(9600);
  Serial.println();
  Serial.println();
  Serial.println("*********Begin**********");
  for (int blinkFactor = 1; blinkFactor <= 100; blinkFactor++) {
    Serial.println();
    Serial.print("Running and flipping every\t");
    Serial.print(blinkFactor);
    Serial.println("\tLEDs.");
    for (int thisLed = blinkFactor - 1; thisLed < ledCount; thisLed += blinkFactor) {
      if (leds[thisLed] == 0) {
        leds[thisLed] = 1;
      } else {
        leds[thisLed] = 0;
      }
      Serial.print("Flipping LED #\t");
      Serial.println(thisLed + 1);
    }
    Serial.println();
    Serial.println("Current state of LEDs:");
    for (int i = 0; i < ledCount; i++) {
      Serial.print(i + 1);
      Serial.print("\t");
      Serial.println(leds[i]);
    }
  }
  Serial.println();
  Serial.print("## LEDs ");
  for (int thisLed; thisLed <= ledCount; thisLed++) {
    if (leds[thisLed] == 1) {
      Serial.print(thisLed + 1);
      Serial.print(", ");
    }
  }
  Serial.println("are on.");
  Serial.println("#####END PROGRAM#####");
}

void loop() {
}

