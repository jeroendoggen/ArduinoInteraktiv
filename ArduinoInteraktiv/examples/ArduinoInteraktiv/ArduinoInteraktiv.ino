#include <ArduinoInteraktiv.h>


ArduinoInteraktiv camera = ArduinoInteraktiv();

void setup()
{
  camera.start();
}

void loop()
{
  camera.MultiFlash(1000,);
  delay(3000);
}




