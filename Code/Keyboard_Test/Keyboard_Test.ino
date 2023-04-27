//MIT License
//
//Copyright (c) 2023/04/27 CHJOO
//CodeName Keyboard Test
//CodeDetails Test
//
//Permission is hereby granted, free of charge, to any person obtaining a copy
//of this software and associated documentation files (the "Software"), to deal
//in the Software without restriction, including without limitation the rights
//to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
//copies of the Software, and to permit persons to whom the Software is
//furnished to do so, subject to the following conditions:
//
//The above copyright notice and this permission notice shall be included in all
//copies or substantial portions of the Software.
//
//THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
//SOFTWARE.
#include <Keyboard.h>

const int switchPin = 7;
const int switchPin1=3;
const int switchPin2=4;
const int switchPin3=5;
const int switchPin4 = 6;
const int switchPin5=8;
const int switchPin6=2;
const int switchPin7=9;
int switchState = 0;
int switchState1 = 0;
int switchState2 = 0;
int switchState3 = 0;
int switchState4= 0;
int switchState5 = 0;
int switchState6 = 0;
int switchState7 = 0;

void setup() {
  pinMode(switchPin, INPUT);
  pinMode(switchPin1, INPUT);
  pinMode(switchPin2, INPUT);
  pinMode(switchPin3, INPUT);
  pinMode(switchPin4, INPUT);
  pinMode(switchPin5, INPUT);
  pinMode(switchPin6, INPUT);
  pinMode(switchPin7, INPUT);
  Keyboard.begin();
}
void loop() {
  switchState = digitalRead(switchPin);
  switchState1 = digitalRead(switchPin1);
  switchState2 = digitalRead(switchPin2);
  switchState3 = digitalRead(switchPin3);
  switchState4 = digitalRead(switchPin4);
  switchState5 = digitalRead(switchPin5);
  switchState6 = digitalRead(switchPin6);
  switchState7 = digitalRead(switchPin7);
  if (switchState == HIGH) {
    Keyboard.press('0');
    delay(5);
  }
  else{
    Keyboard.release('0');
    delay(5);
  }
  if (switchState1 == HIGH) {
    Keyboard.press('1');
    delay(5);
  }
  else{ 
    Keyboard.release('1');
    delay(5);
  }
  if (switchState2 == HIGH) {
    Keyboard.press('2');
    delay(5);
  }
  else{
    Keyboard.release('2');
    delay(5);
  }
  if (switchState3 == HIGH) {
    Keyboard.press('3');
    delay(5);
  }
  else{
    Keyboard.release('3');
    delay(5);
  }

  if (switchState4 == HIGH) {
    Keyboard.press('4');
    delay(5);
  }
  else{
    Keyboard.release('4');
    delay(5);
  }
  if (switchState5 == HIGH) {
    Keyboard.press('5');
    delay(5);
  }
  else{
    Keyboard.release('5');
    delay(5);
  }
  if (switchState6 == HIGH) {
    Keyboard.press('6');
    delay(5);
  }
  else{
    Keyboard.release('6');
    delay(5);
  }
  if (switchState7 == HIGH) {
    Keyboard.press('7');
    delay(5);
  }
  else{
    Keyboard.release('7');
    delay(5);
  }
}
