#include <Arduino.h>

int pinOne = 2;
int pinTwo = 3;
int pinThree = 4;
int pinFour = 5;
int pinFive = 6;

void setup() {
  pinMode(pinOne, OUTPUT);
  pinMode(pinTwo, OUTPUT);
  pinMode(pinThree, OUTPUT);
  pinMode(pinFour, OUTPUT);
  pinMode(pinFive, OUTPUT);
}

void loop() {
  int valorLido = analogRead(A0);

  if(valorLido < 180) {
    digitalWrite(pinOne, HIGH);
    delay(1000);
    digitalWrite(pinThree, HIGH);
    delay(1000);
    digitalWrite(pinFive, HIGH);
    delay(1000);
    digitalWrite(pinFour, HIGH);
    delay(1000);
    digitalWrite(pinTwo, HIGH);
    delay(1000);
  } else {
    digitalWrite(pinOne, LOW);
    digitalWrite(pinTwo, LOW);
    digitalWrite(pinThree, LOW);
    digitalWrite(pinFour, LOW);
    digitalWrite(pinFive, LOW);
  }
}