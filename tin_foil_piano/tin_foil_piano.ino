#include <CapacitiveSensor.h>
CapacitiveSensor capSensor1 = CapacitiveSensor(4,2);
CapacitiveSensor capSensor2 = CapacitiveSensor(7,2);
int notes[] = {262, 330};
int threshold = 1000;
void setup(){
  Serial.begin(9600);
}
void loop(){
  int keyVal1 = analogRead(4);
  Serial.println(keyVal1);
  long sensorValue1 = capSensor1.capacitiveSensor(30);
  Serial.println(sensorValue1);
  if(sensorValue1 > threshold){
    tone(12, notes[0]);
  }
  else {
    noTone(12);
  }
  int keyVal2 = analogRead(6);
  Serial.println(keyVal2);
  long sensorValue2 = capSensor2.capacitiveSensor(30);
  Serial.println(sensorValue2);
  if(sensorValue2 > threshold){
    tone(12, notes[1]);
  }
  else {
    noTone(12);
  }
  delay(10);
}

