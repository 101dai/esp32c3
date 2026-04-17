#include "Arduino.h"

#define Led_Pin 12

void setup() 
{
  // put your setup code here, to run once:
  pinMode(Led_Pin, OUTPUT);
}

void loop() 
{
  // put your main code here, to run repeatedly:
  for (int dutyCycle = 0; dutyCycle <= 255; dutyCycle++){
    analogWrite(Led_Pin, dutyCycle);
    delay(5);
  }
  for (int dutyCycle = 255; dutyCycle >= 0; dutyCycle--){
    analogWrite(Led_Pin, dutyCycle);
    delay(5);
  }

  delay(300);
}