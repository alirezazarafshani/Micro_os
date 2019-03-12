String input (){
  String input;
  while(!Serial.available());
  if (Serial.available()){input = Serial.readString();}
  return input;
}
