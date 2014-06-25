#include "Arduino.h"
#include "ArduinoInteraktiv.h"

ArduinoInteraktiv::ArduinoInteraktiv(int pushButton, int Switch, int piezoSensor, int lightSensor, int potentiometer, int focus, int shutter, int flash, int led1, int led2)
{
  int _pushButton = pushButton;
  int _switch = Switch;
  int _lightSensor = lightSensor;
  int _piezoSensor = piezoSensor;
  int _potentiometer = potentiometer;
  int _focus = focus;
  int _shutter = shutter;
  int _flash = flash;
  int _led1 = led1;
  int _led2 = led2;
}

void ArduinoInteraktiv::start()
{
  pinMode(_pushButton, INPUT);
  pinMode(_switch, INPUT);
  pinMode(_focus, OUTPUT);
  pinMode(_shutter, OUTPUT);
  pinMode(_flash, OUTPUT);
  pinMode(_led1, OUTPUT);
  pinMode(_led2, OUTPUT);
}

void ArduinoInteraktiv::MultiFlash(int time_between_flash_ms, int flashes) 
{
  // Do stuff
}