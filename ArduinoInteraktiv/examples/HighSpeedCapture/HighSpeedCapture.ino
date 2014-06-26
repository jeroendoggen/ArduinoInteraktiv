#include <ArduinoInteraktiv.h>

ArduinoInteraktiv camera;

void setup()
{
}

void loop()
{
  camera.HighSpeedCapture(A1);
}
