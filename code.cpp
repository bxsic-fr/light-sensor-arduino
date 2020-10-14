#include <LiquidCrystal.h>
#include "rgb_lcd.h"

rgb_lcd lcd;

const int colorR = 127;
const int colorG = 0;
const int colorB = 255;

const int pinLight = A0;
const int pinLed = 7;
int thresholdvalue = 200;

void setup()
{
  
  lcd.begin(16, 2);
  lcd.setRGB(colorR, colorG, colorB);
  pinMode(pinLed, OUTPUT);
  Serial.begin(9600);
  lcd.print("Luminosite : ");

}

void loop() 
{
  int sensorValue = analogRead(pinLight);
  lcd.setCursor(0, 1);
  lcd.print(sensorValue);
  lcd.print(" lux");
  delay(200);
}
