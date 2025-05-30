// Include the library code:
#include <LiquidCrystal.h>

// Initialize the library with the numbers of the interface pins
LiquidCrystal lcd(7, 8, 9, 10, 11, 12);  // RS, E, D4, D5, D6, D7

// Interface pin for button
const int buttonPin = 2; 
int buttonState = HIGH;
bool flag = false; // to toggle between which message to show

void setup() {
  //button logic
  pinMode(buttonPin, INPUT_PULLUP);  // Use buttonPin as the internal pull-up resistor.
  //  Serial.begin(9600); // to print messages in the tools->serial monitor
  
  // Initialize LCD
  lcd.begin(16, 2);
  
  // Starting message on LCD
  lcd.setCursor(0, 0);
  lcd.print("Hi Hannah!");
  lcd.setCursor(0, 1);
  lcd.print("Hi Keith!");
}

void loop() {
    //read and assign current button state
    buttonState = digitalRead(buttonPin);

    // Detect transition: HIGH → LOW (button just pressed)
    if (buttonState == LOW) {
  
      // Clear both rows
      lcd.setCursor(0, 0);
      lcd.print("                ");
      lcd.setCursor(0, 1);
      lcd.print("                ");

      // print message depending on flag
      if (flag) {
        lcd.setCursor(0, 0);
        lcd.print("Good to see you!");
        lcd.setCursor(0, 1);
        lcd.print("       :)");
        flag = false;
      } else {
        lcd.setCursor(0, 0);
        lcd.print("Hi Hannah!");
        lcd.setCursor(0, 1);
        lcd.print("Hi Keith!");
        flag = true;
      }
  
      delay(200);
    }
  
    buttonState = HIGH;  // Update last state
  
}
