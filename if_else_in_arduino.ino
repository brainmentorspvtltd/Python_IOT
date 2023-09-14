int data;
void setup() {
  // put your setup code here, to run once:
  pinMode(7, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()!=0){
     data = Serial.read();
  }
  if(data == '1'){
    digitalWrite(7, HIGH);
  }else if(data == '2'){
    digitalWrite(7, LOW);
  }
  delay(100);

}
