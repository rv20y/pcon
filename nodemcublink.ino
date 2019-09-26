
void setup() 
{
pinMode(A0,INPUT);
pinMode(D4,OUTPUT);
pinMode(D5,OUTPUT);
digitalWrite(D5,HIGH);
Serial.begin(9600);
}

void loop() {
analogWrite(D4,analogRead(A0));
delay(500);
}
