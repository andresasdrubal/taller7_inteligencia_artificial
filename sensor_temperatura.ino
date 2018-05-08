
#include <LiquidCrystal.h> 
LiquidCrystal lcd(7, 8, 9, 10, 11 , 12);

const int sensorPin= A5;

void setup() {

Serial.begin(9600);

lcd.begin(16,2);

lcd.setCursor(0,0);

lcd.print("TEMPERATURA");

}

void loop() {

int value = analogRead(sensorPin);

float millivolts = (value / 1023.0) * 300;

float celsius = millivolts / 10;

lcd.setCursor(0,1);

Serial.print(celsius);

Serial.println(" C");

lcd.print(celsius);

lcd.print(" C");

delay(300);

}


