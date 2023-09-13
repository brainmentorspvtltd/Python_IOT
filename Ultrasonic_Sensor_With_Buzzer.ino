
const int trigpin= 7;
const int echopin= 8;
const int buzzerPin = 6;
long duration;
int distance;
void setup()

{

pinMode(trigpin,OUTPUT);
pinMode(echopin,INPUT);
pinMode(buzzerPin, OUTPUT);
Serial.begin(9600);

}

void loop()

{

digitalWrite(trigpin,HIGH);
delay(1000);
digitalWrite(trigpin,LOW);
duration=pulseIn(echopin,HIGH);
distance = duration*0.034/2;
Serial.println(distance);
delay(500);

if(distance <= 100){
  digitalWrite(buzzerPin, HIGH);
}else{
  digitalWrite(buzzerPin, LOW);
}

}