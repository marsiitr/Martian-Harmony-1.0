/*timer = millis();
    
    if(i<99)
    {
        //Serial.println(data[i][0]);
        if(timer>data[i][0]) 
           {Serial.print("Timer increased  => Timer : ");Serial.print(timer);Serial.print(" data : ");Serial.println(data[i][0]);}
        //to check the error  --  time==(data[i][0]-100)
        
        if((i==0 && timer==data[i][0])|| (timer==(data[i][0])-7))
        {
            //Serial.println(timer);
            if(data[i][0]==data[i+1][0])
            {
                Serial.println(i);
                //Serial.println(data[i][1]);
                //Serial.println(data[i+1][1]);
                drum_1_2(); 
                i++;
            }
            else
            { 
                Serial.println(i);
                //Serial.println(data[i][1]);
                if(data[i][1]==35)
                    drum_2();      
                else
                    drum_1();
          
            }
            i++;
        }
        //Serial.println(timer);
    }
*/    
