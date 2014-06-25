#ifndef ArduinoInteraktiv_h
#define ArduinoInteraktiv_h

#include "Arduino.h"

class ArduinoInteraktiv
{
  public:
    ArduinoInteraktiv(int pushButton = 11, int Switch = 12, int piezoSensor = A0, int lightSensor = A1, int potentiometer = A2, int focus = 10, int shutter = 9, int flash = 8, int led1 = 2, int led2 = 3);
    void MultiFlash(int time_between_flash_ms = 1000, int flashes = 3);
    //void HighSpeedCapture();
    //void TimeLapse(int interval);
  private:
  //SHIELD IN en OUTPUT
    int _pushButton;
    int _switch;
    int _lightSensor;
    int _piezoSensor;
    int _potentiometer;
    int _focus;
    int _shutter;
    int _flash;
	int _led1;
	int _led2;
    
  // INPUT status or value
  	int _statePushButton;
  	int _stateSwitch;
  	int _valuePiezoSensor;
  	int _valuePotentiometer;
  	int _valueLightSensor;
  	
  //Private Function
    void Init_pinMode();
    void _flashLight(int time_flash_on = 200);
  	void _flashOn();
  	void _flashOff();
  	void _bulkStart();
  	void _bulkStop();
  	void _focusStart();
  	void _focusStop();
};

#endif