#include <Wire.h>
#include <hd44780.h>
#include <hd44780ioClass/hd44780_I2Cexp.h>

// LCD
hd44780_I2Cexp lcd;

const int LCD_COLS = 20;
const int LCD_ROWS = 4;

void setup()
{
    lcd.begin(LCD_COLS, LCD_ROWS);
}

void loop()
{
    
}