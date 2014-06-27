#include <ArduinoInteraktiv.h>

ArduinoInteraktiv camera;

void setup()
{
  camera.Start();
}

void loop()
{
  camera.Time_Lapse(12,5000);
}
