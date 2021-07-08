#include<Servo.h>

Servo servoA;
Servo servoB;
Servo servoC;
Servo servoD;
Servo servoE;

int pos=0;

void setup()
{
  
  pinMode(2,INPUT);
  pinMode(3,INPUT);
  pinMode(4,INPUT);
  pinMode(5,INPUT);
  pinMode(6,INPUT);
  
  servoA.attach(7);
  servoB.attach(8);
  servoC.attach(9);
  servoD.attach(10);
  servoE.attach(11);
   
}

void loop()
{
  if(digitalRead(2)==LOW){
    servoA.write(90);
  }
  else
     servoA.write(0);
  
  if(digitalRead(3)==LOW){
    servoB.write(90);
  }
  else
 servoB.write(0);
 
  if(digitalRead(4)==LOW){
    servoC.write(90);
  }
  else
 servoC.write(0);
 
  if(digitalRead(5)==LOW){
    servoD.write(90);
  }
  else
 servoD.write(0);
  if(digitalRead(6)==LOW){
    servoE.write(90);
  }
  else
 servoE.write(0);


  
}