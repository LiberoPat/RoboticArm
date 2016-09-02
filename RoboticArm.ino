#include <Servo.h>  // servo library

Servo servo1;  // servo control object
Servo servo2;
Servo servo3;
const int button1Pin = 3;  
const int button2Pin = 4;
const int button3Pin = 5;  
const int button4Pin = 6;
const int button5Pin = 7;  
const int button6Pin = 8;
int positionx = 90;
int positiony = 90;
int positionz = 90;


void setup() {
  servo1.attach(9);
  servo2.attach(10);
  servo3.attach(11);
  pinMode(button1Pin, INPUT);
  pinMode(button2Pin, INPUT);
  pinMode(button3Pin, INPUT);
  pinMode(button4Pin, INPUT);
  pinMode(button5Pin, INPUT);
  pinMode(button6Pin, INPUT);
  Serial.begin(9800);
  servo1.write(90);
  servo2.write(90);
  servo3.write(90);
}

void loop() {

  int button1State = digitalRead(button1Pin);
  int button2State = digitalRead(button2Pin);
  int button3State = digitalRead(button3Pin);
  int button4State = digitalRead(button4Pin);
  int button5State = digitalRead(button5Pin);
  int button6State = digitalRead(button6Pin);
  
  if (button1State == LOW && positionx != 0)
  {
       positionx--;
       servo1.write(positionx);
       delay(20);
  }
  if (button2State == LOW && positionx != 180)
  {
       positionx++;
       servo1.write(positionx);
       delay(20);
  }
  if (button3State == LOW && positionx != 0)
  {
       positiony--;
       servo2.write(positiony);
       delay(20);
  }
  if (button4State == LOW && positionx != 180)
  {
       positiony++;
       servo2.write(positiony);
       delay(20);
  }
  if (button5State == LOW && positionx != 0)
  {
       positionz--;
       Serial.println("left");
       servo3.write(positionz);
       delay(20);
  }
  if (button6State == LOW && positionx != 180)
  {
       positionz++;
       Serial.println("right");
       servo3.write(positionz);
       delay(20);
  }
}
