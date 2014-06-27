#include <ArduinoInteraktiv.h>

ArduinoInteraktiv camera;

void setup()
{
  camera.Start();
}

void loop()
{
  camera.HighSpeedCapture(A1);
}
