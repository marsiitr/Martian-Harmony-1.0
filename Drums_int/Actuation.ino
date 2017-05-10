void drumSnare()       //Snare Drum
{
  analogWrite(dirDrum1,1023);
  
  digitalWrite(drum1,HIGH);
  delay(40);
  
  digitalWrite(drum1,LOW);
  delay(40);
  analogWrite(dirDrum1,0);
  delay(20);
}
  
void drumBass()       // Bass Drum
{
  analogWrite(dirDrum2,1023);
  
  digitalWrite(drum2,HIGH);
  delay(40);
  
  digitalWrite(drum2,LOW);
  delay(40);
  analogWrite(dirDrum2,0);
  delay(20);
}
  
void drumBoth()       //Both drums at once
{
  analogWrite(dirDrum1,1023);
  analogWrite(dirDrum2,1023);
  
  digitalWrite(drum1,HIGH);
  digitalWrite(drum2,HIGH);
  delay(40);
  
  digitalWrite(drum1,LOW);
  digitalWrite(drum2,LOW);
  delay(40);
  analogWrite(dirDrum1,0);
  analogWrite(dirDrum2,0);
  delay(20);
}
