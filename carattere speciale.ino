byte heart[8] = {
  B00000,
  B01010,
  B11111,
  B11111,
  B11111,
  B01110,
  B00100,
  B00000
};

lcd.createChar(0, heart);
byte smiley[8] = {
  B00000,
  B10001,
  B00000,
  B00000,
  B10001,
  B01110,
  B00000,
  B00000
};

lcd.createChar(1, smiley);

byte frown[8] = {
  B00000,
  B10001,
  B00000,
  B00000,
  B01110,
  B10001,
  B00000,
  B00000
};

lcd.createChar(2, frown);

byte up_arrow[8] = {
  B00100,
  B01110,
  B10101,
  B00100,
  B00100,
  B00100,
  B00100,
  B00000
};

lcd.createChar(3, up_arrow);

byte down_arrow[8] = {
  B00000,
  B00100,
  B00100,
  B00100,
  B00100,
  B10101,
  B01110,
  B00100
};

lcd.createChar(4, down_arrow);

byte degree[8] = {
  B00110,
  B01001,
  B01001,
  B00110,
  B00000,
  B00000,
  B00000,
  B00000
};

lcd.createChar(5, degree);

byte left_arrow[8] = {
  B00000,
  B00100,
  B01110,
  B11111,
  B01110,
  B00100,
  B00000,
  B00000
};

lcd.createChar(6, left_arrow);

byte right_arrow[8] = {
  B00000,
  B00100,
  B01110,
  B11111,
  B01110,
  B00100,
  B00000,
  B00000
};

lcd.createChar(7, right_arrow);
