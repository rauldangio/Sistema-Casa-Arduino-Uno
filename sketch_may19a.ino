#include <Servo.h>

int buttomservo = 2;
int buttomservo2 = 3;
int buttonled = 10;
int buttonled2 = 11;
int buttonled3 = 12;
int buttonled4 = 9;
int led = 4;
int led2 = 5;
int led3 = 6; 
bool estadoled = 0;
bool estadoled2 = 0;
bool estadoled3 = 0;



Servo servo;

void setup() {
  servo.attach(13);
  pinMode(buttomservo,INPUT_PULLUP);
  pinMode(buttomservo2,INPUT_PULLUP);
  pinMode(buttonled,INPUT_PULLUP);
  pinMode(buttonled2,INPUT_PULLUP);
  pinMode(buttonled3,INPUT_PULLUP);
  pinMode(buttonled4,INPUT_PULLUP);
  pinMode(led,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  

}

void loop() {
  if (digitalRead(buttomservo) == LOW){
    servo.write(180);
    }
   if (digitalRead(buttomservo2) == LOW){
    servo.write(-180);
   }
   if (digitalRead(buttonled) == LOW){
   estadoled = !estadoled;
   digitalWrite(led,estadoled);
   while(digitalRead(buttonled) == LOW)
   delay(100);
   }
 if (digitalRead(buttonled2) == LOW){
   estadoled2 = !estadoled2;
   digitalWrite(led2,estadoled2);
   while(digitalRead(buttonled2) == LOW)
   delay(100);
   
   }
   if (digitalRead(buttonled3) == LOW){
   estadoled3 = !estadoled3;
   digitalWrite(led3,estadoled3);
   while(digitalRead(buttonled3) == LOW)
   delay(100);
   }
    if (digitalRead(buttonled4) == LOW){
   estadoled = !estadoled;
   estadoled2 = !estadoled2;   
   estadoled3 = !estadoled3;
   digitalWrite(led,estadoled);
   digitalWrite(led2,estadoled2);
   digitalWrite(led3,estadoled3);
   while(digitalRead(buttonled4) == LOW)
   delay(100);
   }
  }

  
