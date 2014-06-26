#include <ArduinoInteraktiv.h>

ArduinoInteraktiv camera;

void setup()
{
}

void loop()
{
  if (camera.GetPushButtonState() == HIGH) {
  camera.MultiFlash();
  }
}
