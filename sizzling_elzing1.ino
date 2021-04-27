#include <Servo.h>
int Red=2;
int Blue=3;
int Green=4;

Servo myservo;
int potpin =0;
int val;


 
void setup() 
{
  myservo.attach(8);
  pinMode(Red,OUTPUT);
  pinMode(Blue,OUTPUT);
  pinMode(Green,OUTPUT);
}
 
void loop() {
  val=analogRead(potpin);
  val=map(val,0,1023,0,180);
  myservo.write(val);

    digitalWrite(Red,HIGH);
    delay(1000);
    digitalWrite(Red,LOW);
    delay(1000);
   
   digitalWrite(Blue,HIGH);
   delay(1000);
   digitalWrite(Blue,LOW);
   delay(1000);
  
  
   digitalWrite(Green,HIGH);
   delay(1000);
   digitalWrite(Green,LOW);
   delay(1000);
  
 for(val=0;val<=60;val+=1)
   { myservo.write(val);
    delay(15);
   }
for(val=0;val<=180;val+=1)
{  myservo.write(val);
   delay(15);
   } 
for(val=0;val<=180;val+=1)
{myservo.write(val);
   delay(15);
   } 
}
