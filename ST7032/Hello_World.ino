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
 * 10K resistor:
 * ends to +5V and ground
 * wiper to LCD VO pin (pin 3)

 */

//#include <LiquidCrystal.h>
#include <Wire.h>
#include <ST7032.h>

//LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
ST7032 lcd;

void setup() {
  // columns and rows: 
  lcd.begin(15, 2);
  lcd.setContrast(36);
  // Print a message to the LCD.
  lcd.print("DENEME");
  lcd.setCursor(0, 1);
  lcd.print("TEXT");
  lcd.setCursor(12, 1);
  lcd.print("FRT");
}

void loop() {

  lcd.setCursor(5, 1);
  lcd.print(millis()/1000);
}

