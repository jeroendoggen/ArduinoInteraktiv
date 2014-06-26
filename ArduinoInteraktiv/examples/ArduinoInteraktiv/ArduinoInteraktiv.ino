#include <ArduinoInteraktiv.h>

ArduinoInteraktiv camera;

void setup()
{
}

void loop()
{
  camera.MultiFlash();
  delay(3000);
}
