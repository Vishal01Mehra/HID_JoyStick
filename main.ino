
#include "Joystick.h"

// Create Joystick
Joystick_ Joystick;

int X1 = A0;
int Y1 = A1;
int X2 = A2;
int Y2 = A3;

float JoystickX1;
float JoystickY1;

float JoystickX2;
float JoystickY2;

float Aux1;
float Aux2;

int Butt1 = 14;
int Butt2 = 15;
int Butt3 = 16;

void setup() {

  pinMode(X1, INPUT);
  pinMode(Y1, INPUT);
  pinMode(X2, INPUT);
  pinMode(Y2, INPUT);
  pinMode(A4, INPUT);
  pinMode(A5, INPUT);

  pinMode(Butt1, INPUT_PULLUP);
  pinMode(Butt2, INPUT_PULLUP);
  pinMode(Butt3, INPUT_PULLUP);

  Joystick.begin();


}

void loop() {
  JoystickX1 = analogRead(X1);
  JoystickY1 = analogRead(Y1);

  JoystickX2 = analogRead(X2);
  JoystickY2 = analogRead(Y2);

  Aux1 = analogRead(A10);
  Aux2 = analogRead(A9);

  int button1 = digitalRead(Butt1);
  int button2 = digitalRead(Butt2);
  int button3 = digitalRead(Butt3);

  Joystick.setRxAxis(JoystickX1);
  Joystick.setRyAxis(JoystickY1);

  Joystick.setThrottle(JoystickX2);
  Joystick.setRudder(JoystickY2);

  Joystick.setSteering(Aux1);
  Joystick.setZAxis(Aux2);

  Joystick.setButton(0, button1);
  Joystick.setButton(1, button2);
  Joystick.setButton(2, button3);

  Joystick.sendState();


}
