#include "blink.c"
#include "help.c"
#include "info.c"
#include "dr.c"
#include "C:\Users\alireza\Desktop\sketch_mar11a\core\input.c"
#include <string.h>
String program_list(String find){
  String programs [] = { "blink"  , "help" , "info" };
  if (find != NULL) {
    if (find == "blink")
    blink();

    if (find == "help")
    help(programs);
    if (find == "info")
    info();
    if (find == "dr") {
    Serial.println("which pin ?");
    String pinin;
    int pin;
    pin = (pinin=input()).toInt();
    Serial.println(dr(pin));
    }
  }
  return "done"; 
}
