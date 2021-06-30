#include <Servo.h>
Servo myservo1;
Servo myservo2;
Servo myservo3;
Servo myservo4;
Servo myservo5;
Servo myservo6;
int i ;

void setup() {
  // put your setup code here, to run once:
myservo1.attach(3);
myservo2.attach(5);
myservo3.attach(6);
myservo4.attach(9);
myservo5.attach(10);
myservo6.attach(11);  
}

void loop() {
  // put your main code here, to run repeatedly:
  // initial position
  myservo1.write(90);
  myservo2.write(90);
  myservo3.write(180);
  myservo4.write(90);
  myservo5.write(90);
  myservo6.write(180);
  
  delay(5000);
  
  // first move 
  // come to me move
   myservo1.write(0);
  myservo2.write(0);
  myservo3.write(0);
  myservo4.write(0);
  myservo5.write(0);
  myservo6.write(0);
  
  delay(1500);
  
  myservo1.write(45);
  myservo2.write(45);
  myservo4.write(45);
  myservo5.write(45);
  delay(1300);
  
  for( i=0 ; i<= 2; i++) {
  myservo3.write(90);
  myservo6.write(90);
    delay (1000);
  myservo3.write(0);
  myservo6.write(0); 
  delay(1000);  
  }
  delay(3000);
  
  // seccond move
  // hug move
  myservo1.write(0);
  myservo2.write(0);
  myservo3.write(0);
  myservo4.write(0);
  myservo5.write(0);
  myservo6.write(0);
  
  delay(1500);
  
  myservo1.write(135);
  myservo2.write(90);
  myservo3.write(0);
  myservo4.write(135);
  myservo5.write(90);
  myservo6.write(0);
  
  delay(5000);
  
  
  
  // third move 
  // slide slape hands
   myservo1.write(0);
  myservo2.write(0);
  myservo3.write(0);
  myservo4.write(0);
  myservo5.write(0);
  myservo6.write(0);
  
  delay(1500);
  
  myservo1.write(90);
  myservo2.write(90);
  myservo3.write(180);
  myservo4.write(90);
  myservo5.write(0);
  myservo6.write(0);
  
  delay(5000);
  
  
  
}
