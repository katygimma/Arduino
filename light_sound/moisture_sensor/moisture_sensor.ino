/*
The sensor value description
0-300    dry soil
300-700  humid soil
700-950  in water

*/
int notes[] = {262, 294, 330, 349, 355, 363, 370, 378};
void setup(){
  Serial.begin(9800);
}
void loop(){
  Serial.print("Moisture Sensor Value:");
  Serial.println(analogRead(A5));
  delay(1000);
  int keyVal = analogRead(A5);
  Serial.println(keyVal);
  if(keyVal >= 980 && keyVal <=1015){
    tone(11, notes[0]);
  }
  else if(keyVal >=800 && keyVal <=979){
    tone(11, notes[1]);
  }
  else if(keyVal >=730 && keyVal <=799){
    tone(11, notes[2]);
  }
  else if(keyVal >= 645 && keyVal<=729){
    tone(11, notes[3]);
  }
  else if(keyVal >= 605 && keyVal<= 644){
    tone(11, notes[4]);
  }
  else if(keyVal >= 536 && keyVal<= 604){
    tone(11, notes[5]);
  }
  else if(keyVal >=410 && keyVal<=535){
    tone(11, notes[6]);
  }
  else if(keyVal >=300&& keyVal<=409){
    tone(11, notes[7]);
  }
  else{
    noTone(11);
  }
}
  

