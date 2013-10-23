int sensorValue;
int sensorLow = 1023;
int sensorHigh = 0;

const int ledPin = 13;

void setup() {
 pinMode(ledPin, OUTPUT);
 digitalWrite(ledPin, HIGH);
 Serial.begin(9600);
 while (millis() < 5000) {
   
   sensorValue = analogRead(A0);
   
   if (sensorValue > sensorHigh) {
     sensorHigh = sensorValue;
   }
   
   if (sensorValue < sensorLow) {
    sensorLow = sensorValue; 
   }
 }
 
 digitalWrite(ledPin, LOW);
}

void loop() {
 sensorValue = analogRead(A0);
 Serial.print(sensorValue);
 Serial.print("\n");
 int pitch = map(sensorValue, sensorLow, sensorHigh, 50, 4000);
 tone(11, pitch, 20);

 delay(10); 
}
