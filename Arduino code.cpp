// C++ code
//
#include <Adafruit_LiquidCrystal.h>

int seconds = 0;
int temperature = A0;

Adafruit_LiquidCrystal lcd_1(0);

void setup()
{
  lcd_1.begin(16, 2);

  
}

void loop()
{
   int Temp = analogRead(temperature);  
  float volts = (Temp / 965.0) * 5;  
  float celcius = (volts - 0.5) * 100;  
  float fahrenheit = (celcius * 9 / 5 + 32);  
  Serial.println(fahrenheit);
  lcd_1.setCursor(0, 0);  
  lcd_1.print("F= "); 
  lcd_1.setCursor(5, 0);  
  lcd_1.print(fahrenheit); 
  lcd_1.setCursor(0, 1);
  lcd_1.print("C= "); 
  lcd_1.setCursor(5, 1);
  lcd_1.print(celcius); 
  delay(2000);  
}
