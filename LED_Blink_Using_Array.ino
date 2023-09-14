int timer = 100;
int ledPins[] = {
  2,3,4,5,6,7
};
int pinCount = 6;

void setup() {
  // put your setup code here, to run once:
  for(int thisPin = 0; thisPin<pinCount; thisPin++){
    pinMode(ledPins[thisPin], OUTPUT);
  }
  Serial.println(ledPins.length)

}

void loop() {
  // put your main code here, to run repeatedly:
  for(int thisPin = 0; thisPin < pinCount; thisPin++){
    digitalWrite(ledPins[thisPin], HIGH);
    delay(timer);
    digitalWrite(ledPins[thisPin], LOW);
    delay(timer);
  }
}
