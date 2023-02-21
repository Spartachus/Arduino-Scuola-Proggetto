#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(32,16,2);
int time=200;
byte customChar[] = {
  B00110,
  B01101,
  B10100,
  B01111,
  B00101,
  B10101,
  B01110,
  B00100
};
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
delay(time); 
lcd.clear();

lcd.print("TAWIAH | LIXI");
lcd.setCursor(0,1);
lcd.createChar(0, customChar);
lcd.setCursor(6,1);
lcd.write(0);

}

void loop()
{

  // scroll the contents of the display left by one position
  lcd.scrollDisplayLeft();
  // delay for a short period to slow down the scrolling speed
  delay(time);
}
