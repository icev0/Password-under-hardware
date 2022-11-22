#include <Keyboard.h>

void setup() {
  Keyboard.begin();
  delay(2000);
  // Enter the password
  Keyboard.print("Your password");
  delay(300);
  // End
  Keyboard.end();
}

void loop() {
  // put your main code here, to run repeatedly:
}
