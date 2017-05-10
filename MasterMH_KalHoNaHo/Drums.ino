void drumsCall(){
  if (timeDrums[iDrums]==timeDrums[iDrums+1]){
    digitalWrite(f1,HIGH);
    digitalWrite(f2,HIGH);
    digitalWrite(intDrums,!drums);
    Serial.print("Timer : ");
    Serial.print(t2-t1);
    Serial.print(" Drums : ");
    Serial.print(timeDrums[iDrums]);
    Serial.print("   "); Serial.print(noteDrums[iDrums]);
    Serial.print("   "); Serial.println(noteDrums[iDrums+1]);
    iDrums++;
  }
  else if (noteDrums[iDrums]==35){
    digitalWrite(f1,LOW);
    digitalWrite(f2,HIGH);
    digitalWrite(intDrums,!drums);
    Serial.print("Timer : ");
    Serial.print(t2-t1);
    Serial.print(" Drums : ");
    Serial.print(timeDrums[iDrums]);
    Serial.print("   "); Serial.println(noteDrums[iDrums]);
  }
  else if (noteDrums[iDrums]==54){
    digitalWrite(f1,HIGH);
    digitalWrite(f2,LOW);
    digitalWrite(intDrums,!drums);
    Serial.print("Timer : ");
    Serial.print(t2-t1);
    Serial.print(" Drums : ");
    Serial.print(timeDrums[iDrums]);
    Serial.print("   "); Serial.println(noteDrums[iDrums]);
  }
  else{
    digitalWrite(f1,LOW);
    digitalWrite(f2,LOW);
  }
  iDrums++;
  return;
}
