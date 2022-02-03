#include <Arduino.h>
#include <TimerOne.h>
#include <Wire.h>
#include <MultiFuncShield.h>
bool lock;
int counter;
void writeCounter() {
  MFS.write((int)counter);
}
void setup() {
  Timer1.initialize();
  MFS.initialize(&Timer1);
  counter = 0;
  lock = false;
  MFS.write("hi");
  delay(2000);
  MFS.write("hru?");
  delay(2000);
  MFS.write("----");
  delay(2000);
  writeCounter();
}
void loop() {
  byte btn = MFS.getButton();
  if (btn) {
    byte buttonNumber = btn & B00111111;
    byte buttonAction = btn & B11000000;
    bool ok = buttonAction == BUTTON_PRESSED_IND;
    if (!lock && buttonNumber == 1 && ok) {
      if (counter == 9999)
        counter = 0;
      else
        counter++;
      writeCounter();
    } else if (!lock && buttonNumber == 2 && ok) {
      counter = 0;
      writeCounter();
    } else if (buttonNumber == 3 && ok)
      lock = !lock;
  }
}
