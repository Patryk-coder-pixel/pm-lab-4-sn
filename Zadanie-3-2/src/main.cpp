#include <Arduino.h>
#include <LiquidCrysta.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
    lcd.begin(16, 2);
    lcd.print("Lelakowski");
}

void loop() {
    lcd.setCursor(0, 1);
    lcd.print(millis() / 1000);
    delay(500);
}