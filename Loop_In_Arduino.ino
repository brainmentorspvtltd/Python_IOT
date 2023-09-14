int timer = 100;
void setup() {
  // put your setup code here, to run once:
  for(int thisPin = 2; thisPin < 8; thisPin++){
    pinMode(thisPin, OUTPUT);
  }

}

void loop() {
  // put your main code here, to run repeatedly:
  for(int thisPin = 2; thisPin < 8; thisPin++){
    digitalWrite(thisPin , HIGH);
    delay(timer);
    digitalWrite(thisPin, LOW);
    delay(timer);
  }

}
