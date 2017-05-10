//long timer;
int i=0;
int d1=4,d2=5;
int intDrums=2;
int ackDrums=3;
int drum1=6,drum2=7;
boolean read1=LOW,read2=LOW;
int dirDrum1=A5,dirDrum2=A3;
//int arrsize;    // {3883.353,35},{3883.353,54},
//int data[100][2] = {{0.0,35},{0.0,54},{107.14286,35},{428.57144,54},{1285.7142,35},{1285.7142,54},{1714.2858,35},{1714.2858,54},{3000.0,35},{3000.0,54},{3428.5715,35},{3428.5715,54},{3857.1428,54},{4714.2856,35},{4714.2856,54},{5142.857,54},{6428.5713,54},{6535.7144,35},{6857.143,35},{6857.143,54},{7285.7144,54},{8142.857,35},{8142.857,54},{8571.429,35},{8571.429,54},{9857.143,35},{9857.143,54},{10285.714,35},{10285.714,54},{10714.286,54},{11571.429,35},{11571.429,54},{12000.0,35},{12000.0,54},{13285.714,54},{13714.286,54},{15214.286,35},{15642.857,35},{16071.429,54},{16928.572,35},{16928.572,54},{17357.143,35},{17785.715,54},{18642.857,54},{19500.0,54},{20250.0,54},{21214.285,54},{22071.428,35},{22071.428,54},{22928.572,54},{23785.715,35},{23785.715,54},{24642.857,54},{25500.0,54},{26357.143,54},{27214.285,54},{27642.857,35}};
//int *array[][2];

  
void setup() 
{
  pinMode(d1,INPUT);
  pinMode(d2,INPUT);
  attachInterrupt(digitalPinToInterrupt(intDrums), drumsCall, CHANGE);
  pinMode(drum1,OUTPUT);
  pinMode(drum2,OUTPUT);
  pinMode(dirDrum1,OUTPUT);
  pinMode(dirDrum2,OUTPUT);
  pinMode()

  // Turn the Serial Protocol ON
  Serial.begin(9600);
}
  
void loop() 
{
  //nothing :P
  while(1);
}

void drumsCall(){
  read1=digitalRead(d1);
  read2=digitalRead(d2);
  if(read1==LOW && read2 == HIGH){
    drumSnare();
  }
  else if(read1==HIGH && read2 == LOW){
    drumBass();
  }
  else if(read1==HIGH && read2 == HIGH){
    drumBoth();
  }
}
