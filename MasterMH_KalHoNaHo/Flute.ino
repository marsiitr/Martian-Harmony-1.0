void fluteCall(){
  Serial.print("Timer : ");
  Serial.print(t2-t1);
  Serial.print(" Flute : ");
  Serial.print(timeFlute[iFlute]);
  Serial.print("  "); //Serial.println(noteFlute[iFlute]);
  //Serial.print(flute);
  //Serial.print("  ");  
  if(onOffFlute[iFlute]==0) {
    digitalWrite(f1,LOW);    // MSB -> LSB ==  8 -> 11
    digitalWrite(f2,LOW);    
    digitalWrite(f3,LOW);
    digitalWrite(f4,LOW);
    flute=!flute;
    flute == HIGH ?  digitalWrite(intFlute,HIGH):digitalWrite(intFlute,LOW); 
    iFlute++;
  }
  else if(onOffFlute[iFlute]==1){
      switch(noteFlute[iFlute]){
      case 'A':
        digitalWrite(f1,LOW);    // MSB -> LSB ==  8 -> 11
        digitalWrite(f2,LOW);    
        digitalWrite(f3,LOW);
        digitalWrite(f4,HIGH);
        flute=!flute;
        flute == HIGH ?  digitalWrite(intFlute,HIGH):digitalWrite(intFlute,LOW); 
        Serial.println(noteFlute[iFlute]);
        break;
      case 'B':
        digitalWrite(f1,LOW);
        digitalWrite(f2,LOW);
        digitalWrite(f3,HIGH);
        digitalWrite(f4,LOW);
        flute=!flute;
        flute == HIGH ?  digitalWrite(intFlute,HIGH):digitalWrite(intFlute,LOW); 
        Serial.println(noteFlute[iFlute]);
        break;
      case 'C':
        digitalWrite(f1,LOW);
        digitalWrite(f2,LOW);
        digitalWrite(f3,HIGH);
        digitalWrite(f4,HIGH);
        flute=!flute;
        flute == HIGH ?  digitalWrite(intFlute,HIGH):digitalWrite(intFlute,LOW); 
        Serial.println(noteFlute[iFlute]);
        break;
     case 'D':
        digitalWrite(f1,LOW);
        digitalWrite(f2,HIGH);
        digitalWrite(f3,LOW);
        digitalWrite(f4,LOW);
        flute=!flute;
        flute == HIGH ?  digitalWrite(intFlute,HIGH):digitalWrite(intFlute,LOW); 
        Serial.println(noteFlute[iFlute]);
        break;
     case 'E':
        digitalWrite(f1,LOW);
        digitalWrite(f2,HIGH);
        digitalWrite(f3,LOW);
        digitalWrite(f4,HIGH);
        flute=!flute;
        flute == HIGH ?  digitalWrite(intFlute,HIGH):digitalWrite(intFlute,LOW); 
        Serial.println(noteFlute[iFlute]);
        break;
     case 'F':
        digitalWrite(f1,LOW);
        digitalWrite(f2,HIGH);
        digitalWrite(f3,HIGH);
        digitalWrite(f4,LOW);
        flute=!flute;
        flute == HIGH ?  digitalWrite(intFlute,HIGH):digitalWrite(intFlute,LOW); 
        Serial.println(noteFlute[iFlute]);
        break;
     case 'G':
        digitalWrite(f1,LOW);
        digitalWrite(f2,HIGH);
        digitalWrite(f3,HIGH);
        digitalWrite(f4,HIGH);
        flute=!flute;
        flute == HIGH ?  digitalWrite(intFlute,HIGH):digitalWrite(intFlute,LOW); 
        Serial.println(noteFlute[iFlute]);
        break;
      default:
        digitalWrite(f1,LOW);    // MSB -> LSB ==  8 -> 11
        digitalWrite(f2,LOW);    
        digitalWrite(f3,LOW);
        digitalWrite(f4,LOW);
    }
    iFlute++;
  }
  return;
}
