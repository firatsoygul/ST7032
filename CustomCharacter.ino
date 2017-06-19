/*
	ST7032 I2C LCD control sample
	firat_soygul@hotmail.com
*/

/*
 
  The circuit:
 * LCD RS pin to digital pin 12
 * LCD Enable pin to digital pin 11
 * LCD D4 pin to digital pin 5
 * LCD D5 pin to digital pin 4
 * LCD D6 pin to digital pin 3
 * LCD D7 pin to digital pin 2
 * LCD R/W pin to ground
 * 10K potentiometer:
 * ends to +5V and ground
 * wiper to LCD VO pin (pin 3)
 * 10K poterntiometer on pin A0

 
 Also useful:
 http://icontexto.com/charactercreator/
 
 */

// include the library code:
//#include <LiquidCrystal.h>
#include <Wire.h>
#include <ST7032.h>

//LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
ST7032 lcd;

// make some custom characters:
byte heart[8] = {
  0b00000,
  0b01010,
  0b11111,
  0b11111,
  0b11111,
  0b01110,
  0b00100,
  0b00000
};

byte bir_ust[8] = {
0b00100,
0b01100,
0b11100,
0b00100,
0b00100,
0b00100,
0b00100,
0b00100
};
byte bir_alt[8] = {
0b00100,
0b00100,
0b00100,
0b00100,
0b00100,
0b00100,
0b11111,
0b00000
};

byte iki_ust[8]={
0b01110,
0b10001,
0b10001,
0b00001,
0b00001,
0b00001,
0b00001,
0b00011,
};

byte iki_alt[8]={
0b00110,
0b01100,
0b11000,
0b10000,
0b10000,
0b10000,
0b11111,
0b00000
};

byte uc_ust[8]={
0b01110,
0b10001,
0b00001,
0b00001,
0b00001,
0b00001,
0b00010,
0b00100 
};

byte uc_alt[8]={
0b00010,
0b00001,
0b00001,
0b00001,
0b00001,
0b10001,
0b01110,
0b00000
};

byte smiley[8] = {
  0b00000,
  0b00000,
  0b01010,
  0b00000,
  0b00000,
  0b10001,
  0b01110,
  0b00000
};

byte frownie[8] = {
  0b00000,
  0b00000,
  0b01010,
  0b00000,
  0b00000,
  0b00000,
  0b01110,
  0b10001
};

byte armsDown[8] = {
  0b00100,
  0b01010,
  0b00100,
  0b00100,
  0b01110,
  0b10101,
  0b00100,
  0b01010
};

byte armsUp[8] = {
  0b00100,
  0b01010,
  0b00100,
  0b10101,
  0b01110,
  0b00100,
  0b00100,
  0b01010
};
void setup() {
   
  lcd.begin(15, 2); // Lcd sütun ve kolon sayısı. Örn. (16, 2)
  lcd.setContrast(36); // Lcd kontrast.
  


} 

void loop() {
lcd.setCursor(0,0);  
lcd.print("CPU timer");
  double mlm = millis();
  
  lcd.setCursor(0,1);
  //lcd.rightToLeft();
  lcd.print((double)mlm);
}


