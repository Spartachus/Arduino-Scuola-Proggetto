#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(32,16,2);
int time=200;

void setup()
{
lcd.init();
lcd.backlight();
lcd.setCursor(0,0);
lcd.print("W LA SCUOLA");
delay(time);
lcd.clear();
  
lcd.setCursor(0,0);
lcd.print("TAWIAH ABU CON");
lcd.setCursor(0,1);
lcd.print("ALESSANDRO LIXI");
}

void loop()
{

  // scroll the contents of the display left by one position
  lcd.scrollDisplayLeft();
  // delay for a short period to slow down the scrolling speed
  delay(time);
}
