/*C();
   delay(1000);
   D();
   delay(1000);
   E();
   delay(1000);
   F_note();
   delay(1000);
   F_note();
   delay(1000);
   A();
   delay(1000);
  B();
  delay(1000);
  C_High;
  delay(1000);*/
/*  
  for(int i=0; i<180; i++)
  {
    
    //Serial.println(c[i]);
    //Serial.println(a[i]);
    //Serial.println(b[i+1]-b[i]);
    if(a[i]=='A')// && c[i]==1) 
    {
      
      A();
      
      delay(b[i+1]-b[i]);
      if(a[i+1]=='A')
      {
      //if(c[i+1]==0)
      //{
        i++;
        for (pos = 10; pos >=0 ; pos -= 1) 
        { 
          myservo7.write(pos);
          delay(10);
        }
        
        delay(b[i+1]-b[i]);
        
        for (pos =0 ; pos <=10; pos += 1) 
        { 
          myservo7.write(pos);
          delay(10);
        }
      //}
      }
      
    }
    else if(a[i]=='B')// && c[i]==1) 
    {
      B();
      
      delay(b[i+1]-b[i]);
      if(a[i+1]=='B')
      {
      //if(c[i+1]==0)
      //{
        i++;
        for (pos = 10; pos >=0 ; pos -= 1) 
        { 
          myservo7.write(pos);
          delay(10);
        }
        
        delay(b[i+1]-b[i]);
        
        for (pos =0 ; pos <=10; pos += 1) 
        { 
          myservo7.write(pos);
          delay(10);
        }
      //}
      }
    }
    else if(a[i]=='C')// && c[i]==1) 
    {
      C();
      
      delay(b[i+1]-b[i]);
      if(a[i+1]=='C')
      {
      //if(c[i+1]==0)
      //{
        i++;
        for (pos = 10; pos >=0 ; pos -= 1) 
        { 
          myservo7.write(pos);
          delay(10);
        }
        
        delay(b[i+1]-b[i]);
        
        for (pos =0 ; pos <=10; pos += 1) 
        { 
          myservo7.write(pos);
          delay(10);
        }
      //}
      }
    }
    else if(a[i]=='D')// && c[i]==1) 
    {
      D();
      
      delay(b[i+1]-b[i]);
      if(a[i+1]=='D')
      {
      //if(c[i+1]==0)
      //{
        i++;
        for (pos = 10; pos >=0 ; pos -= 1) 
        { 
          myservo7.write(pos);
          delay(10);
        }
        
        delay(b[i+1]-b[i]);
        
        for (pos =0 ; pos <=10; pos += 1) 
        { 
          myservo7.write(pos);
          delay(10);
        }
      //}
      }
    }
    else if(a[i]=='E')// && c[i]==1) 
    {
      E();
      
      delay(b[i+1]-b[i]);
      if(a[i+1]=='E')
      {
      //if(c[i+1]==0)
      //{
        i++;
        for (pos = 10; pos >=0 ; pos -= 1) 
        { 
          myservo7.write(pos);
          delay(10);
        }
        
        delay(b[i+1]-b[i]);
        
        for (pos =0 ; pos <=10; pos += 1) 
        { 
          myservo7.write(pos);
          delay(10);
        }
      }
      //}
    }
    else if(a[i]=='F' )//&& c[i]==1) 
    {
      F_note();
      
      delay(b[i+1]-b[i]);
      if(a[i+1]=='F')
      //{
      //if(c[i+1]==0)
      {
        i++;
        for (pos = 10; pos >=0 ; pos -= 1) 
        { 
          myservo7.write(pos);
          delay(10);
        }
        
        delay(b[i+1]-b[i]);
        
        for (pos =0 ; pos <=10; pos += 1) 
        { 
          myservo7.write(pos);
          delay(10);
        }
     // }
      }
    }
    else if(a[i]=='G' )//&& c[i]==1) 
    {
      G();
      
      delay(b[i+1]-b[i]);
      if(a[i+1]=='G')
      {
     // if(c[i+1]==0)
      //{
        i++;
        for (pos = 10; pos >=0 ; pos -= 1) 
        { 
          myservo7.write(pos);
          delay(10);
        }
        
        delay(b[i+1]-b[i]);
        
        for (pos =0 ; pos <=10; pos += 1) 
        { 
          myservo7.write(pos);
          delay(10);
        }
      //}
      }
    }
   /* else
      {
        for(int i=5; i>=0; i--)
        {
          myservo7.write(i);
         } 
        delay(b[i+1]-b[i]);
        for(int i=0; i<=5; i++)
        {
          myservo7.write(i);
         }
      }*/
      
  //}

