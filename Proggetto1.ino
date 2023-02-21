#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(32,16,2);
int time=3000;

void setup()
{
lcd.init();
lcd.backlight();
}

void loop()
{
lcd.setCursor(0,0);
lcd.print("W LA SCUOLA");
delay(time);
  
lcd.clear();
  
lcd.setCursor(0,0);
lcd.print("TAWIAH ABU CON");
lcd.setCursor(0,1);
lcd.print("ALESSANDRO LIXI");
delay(time);
lcd.clear();
}
