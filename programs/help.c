void help (String programs[] ){
  Serial.println("os v0.1");
  Serial.println("programs that installed in this system are :");
  for (int i=0; i<=sizeof(programs);i++)
        Serial.println(programs[i]);
        Serial.println("for using the programs you must call it from command line like : blink ");
        return ;

}
