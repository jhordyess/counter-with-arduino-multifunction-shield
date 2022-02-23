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
  randomSeed(analogRead(A0));
  pinMode(13, OUTPUT);
  counter = 0;
  lock = false;
  digitalWrite(13, !false);
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
    bool _short = buttonAction == BUTTON_SHORT_RELEASE_IND;
    if (!lock && buttonNumber == 1 && _short) {
      if (counter == 9999)
        counter = 0;
      else
        counter++;
      writeCounter();
    } else if (!lock && buttonNumber == 2 && _short) {
      counter = 0;
      writeCounter();
    } else if (buttonNumber == 3 && _short) {
      lock = !lock;
      digitalWrite(13, !lock);
    } else if (buttonNumber == 1 && !_short && !lock && buttonAction == BUTTON_LONG_RELEASE_IND) {
      counter = random(0, 9999);
      writeCounter();
    }
  }
}
