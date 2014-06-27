#include <ArduinoInteraktiv.h>

ArduinoInteraktiv camera;

void setup()
{
  camera.Start();
}

void loop()
{
  if (camera.GetPushButtonState() == HIGH) {
  camera.MultiFlash();
  }
}
