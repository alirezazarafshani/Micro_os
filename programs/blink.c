void blink (){
  String input;
  Serial.println("which pin ?");
    while(!Serial.available()){}
    if (Serial.available()){
         input = Serial.read();
    }
    int pin = (input.toInt())-48;
    pinMode( pin ,OUTPUT);
    digitalWrite(pin,1);
    delay(500);
    digitalWrite(pin,0);
    delay(500);
    Serial.print(pin);
    Serial.println(" has been toggled");
}
