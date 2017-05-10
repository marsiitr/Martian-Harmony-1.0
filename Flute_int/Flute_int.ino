#include <Servo.h>
#include <Stepper.h>
#define OPEN 0
#define HALF 1
#define FULL 2
#define STEPSPR 150

//int f1=A0,f2=A1,f3=A2,f4=A3;
int f1=8,f2=9,f3=10,f4=11;
volatile boolean read2=LOW,read3=LOW,read4=LOW;
int intFlute=2;
int ackFlute=3;
Servo myservo1,myservo2,myservo3,myservo4,myservo5,myservo6,myservo7;  // create servo objects to control a servo. Twelve servo objects can be created on most boards

Stepper stepper(STEPSPR, 8,9,10,11);
int pos=0;
int posInit1=0,posInit2=0,posInit3=0,posInit4=0,posInit5=0,posInit6=0;   // variable to store the servo initial positions
int stepInit=8;
boolean offFlag = false;
int stepC=90,stepC_High=100,stepD=110,stepD_High=120,stepE=140,stepE_High=130,stepF=0,stepF_High=40,stepG=70,stepG_sharp=0,stepA=80,stepA_High=0,stepB=100;
int Open1=30,Open2=0,Open3=0,Open4=30,Open5=30,Open6=30;
int Half1=40,Half2=40,Half3=40,Half4=40,Half5=40,Half6=40;
int Full1=0,Full2=30,Full3=30,Full4=0,Full5=0,Full6=0;
int prevFlag1=1,prevFlag2=1,prevFlag3=1,prevFlag4=0,prevFlag5=0,prevFlag6=0; 
int currFlag1=0,currFlag2=0,currFlag3=0,currFlag4=0,currFlag5=0,currFlag6=0;
//flag = 0 for open
//flag = 1 for close

void setup() {
  pinMode(f1,INPUT);
  pinMode(f2,INPUT);
  pinMode(f3,INPUT);
  pinMode(f4,INPUT);
  pinMode(intFlute,INPUT);
  //attachInterrupt(digitalPinToInterrupt(intFlute), fluteCall, CHANGE);
  Serial.begin(9600);
  myservo1.attach(2);
  myservo2.attach(3);
  myservo3.attach(4);
  myservo4.attach(5);
  myservo5.attach(6);
  myservo6.attach(7);
  myservo7.attach(12);
  stepper.setSpeed(200);
  myservo1.write(0);
  myservo2.write(30);
  myservo3.write(30);
  myservo4.write(0);
  myservo5.write(0);
  myservo6.write(0);
  myservo7.write(10);
}

void loop() 
{
  //interrupts();
   //nothing :p
   //while(1);
//   Serial.print(digitalRead(f1));
//   Serial.print("    ");
   Serial.print(digitalRead(f1));
   Serial.print("    ");
   Serial.print(digitalRead(f2));
   Serial.print("    ");
   Serial.println(digitalRead(intFlute));
   delay(200);
}

void fluteCall(){
  //read1=digitalRead(f1);
  read2=digitalRead(f2);
  read3=digitalRead(f3);
  read4=digitalRead(f4);
  if (read2==LOW && read3==LOW && read4==HIGH){
    if(offFlag==true){
      for (pos =0 ; pos <=10; pos += 1) 
      { 
        myservo7.write(pos);
        delay(10);
      }
      offFlag = false;
    }
    A();
    Serial.print("A , ");
  }
  else if (read2==LOW && read3==HIGH && read4==LOW){
    if(offFlag==true){
      for (pos =0 ; pos <=10; pos += 1) 
      { 
        myservo7.write(pos);
        delay(10);
      }
      offFlag = false;
    }
    B();
    Serial.print("B , ");
  }
  else if (read2==LOW && read3==HIGH && read4==HIGH){
    if(offFlag==true){
      for (pos =0 ; pos <=10; pos += 1) 
      { 
        myservo7.write(pos);
        delay(10);
      }
      offFlag = false;
    }
    C();
    Serial.print("C , ");
  }
  else if (read2==HIGH && read3==LOW && read4==LOW){
    if(offFlag==true){
      for (pos =0 ; pos <=10; pos += 1) 
      { 
        myservo7.write(pos);
        delay(10);
      }
      offFlag = false;
    }
    D();
    Serial.print("D , ");
  }
  else if (read2==HIGH && read3==LOW && read4==HIGH){
    if(offFlag==true){
      for (pos =0 ; pos <=10; pos += 1) 
      { 
        myservo7.write(pos);
        delay(10);
      }
      offFlag = false;
    }
    E();
    Serial.print("E , ");
  }
  else if (read2==HIGH && read3==HIGH && read4==LOW){
    if(offFlag==true){
      for (pos =0 ; pos <=10; pos += 1) 
      { 
        myservo7.write(pos);
        delay(10);
      }
      offFlag = false;
    }
    F_note();
    Serial.print("F , ");
  }
  else if (read2==HIGH && read3==HIGH && read4==HIGH){
    if(offFlag==true){
      for (pos =0 ; pos <=10; pos += 1) 
      { 
        myservo7.write(pos);
        delay(10);
      }
      offFlag = false;
    }
    G();
    Serial.print("G , ");
  }
  else if (read2==LOW && read3==LOW && read4==LOW){
    if(offFlag==false){
      for (pos = 10; pos >=0 ; pos -= 1) 
      { 
        myservo7.write(pos);
        delay(10);
        offFlag = true;
      }
    }
    //Serial.print("off , ");
  }
}

