#include "Arduino.h"
#include "ArduinoInteraktiv.h"


ArduinoInteraktiv::ArduinoInteraktiv(int pushButton, int Switch, int piezoSensor, int lightSensor, int potentiometer, int focus, int shutter, int flash, int led1, int led2)
{
  _pushButton = pushButton;
  _switch = Switch;
  _lightSensor = lightSensor;
  _piezoSensor = piezoSensor;
  _potentiometer = potentiometer;
  _focus = focus;
  _shutter = shutter;
  _flash = flash;
  _led1 = led1;
  _led2 = led2;
  Init_pinMode();
}

void ArduinoInteraktiv::Init_pinMode()
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
  _focusStart();
  delay(2000);
  _shutterStart();
  delay(time_between_flash_ms);
  for (int i=0; i < flashes; i++){
    _flashLight();
    delay(time_between_flash_ms);
  }
  _shutterStop();
  _focusStop();
}

void ArduinoInteraktiv::SinglePicture(bool flashLight)
{
  _focusStart();
  _shutterStart();
  if(flashLight)
  {
    _flashLight()
  }
  else {
    delay(200);
  } 
  _shutterStop();
  _focusStop();
}

void ArduinoInteraktiv::_flashLight(int time_flash_on) 
{
  _flashOn();
  delay(time_flash_on);
  _flashOff();
}

void ArduinoInteraktiv::_flashOn()
{
  digitalWrite(_flash, HIGH);
  digitalWrite(_led2, HIGH);
}

void ArduinoInteraktiv::_flashOff()
{
  digitalWrite(_flash, LOW);
  digitalWrite(_led2, LOW);
}

void ArduinoInteraktiv::_shutterStart() { 
  digitalWrite(_shutter, HIGH);
}

void ArduinoInteraktiv::_shutterStop() {
 digitalWrite(_shutter, LOW); 
}

void ArduinoInteraktiv::_focusStart() {
  digitalWrite(_focus, HIGH);
}

void ArduinoInteraktiv::_focusStop() {
  digitalWrite(_focus, LOW);
}