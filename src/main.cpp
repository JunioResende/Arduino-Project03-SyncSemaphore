#include <Arduino.h>

byte pinSemGreen1 = 8;
byte pinSemBlue1 = 9;
byte pinSemRed1 = 10;

byte pinSemGreen2 = 5;
byte pinSemBlue2 = 6;
byte pinSemRed2 = 7;

void setup()
{
  pinMode(pinSemRed2, OUTPUT);
}

void loop()
{
  digitalWrite(pinSemRed2, HIGH);
}