// demo algorithm to be entered in the given block

char* timeConversion(char* s) {
    
static char final[9]; //  creating a statically allocated  array so the data value can be used even after the variables go out of scope
    
    
 // assigning the value from the input to the default output removing the AM and PM
final[0] = s[0];
final[1] = s[1];
final[2] = ':';
final[5] = ':';
final[3] = s[3];
final[4] = s[4];
final[6] = s[6];
final[7] = s[7];
   
    if(s[8] == 'A') // condition for AM
    {
        if(s[0]=='1' && s[1]=='2') // condition for night 12 o'clock
        {
            final[0] = '0';
            final[1] = '0';
        }
        else{
            final[0] = s[0]; // for other conditions of AM
            final[1] = s[1];
        }
    }


    else if(s[8]== 'P') // condition for the PM
    {
       if(s[0] == '0' && s[1] < '8') // for the time from 1 PM to 7PM
       {
           final[0] = '1';
           char hr = (int)s[1];
           hr = hr+2;
           final[1]  = (char)hr;
       } 
       else if(s[0] == '0' && (s[1] == '8' || s[1] == '9'))  // for 8PM or 9PM
       {
           final[0] = '2';
          if(s[2] == '8') final[1] = '0';
          else final[1] = '1';
          
       }
       else if(s[0] != '0' && (s[1] == '0' || s[1] == '1')) // for 11PM and 12PM
       {   final[0] = '2';
           if(s[1] == '0') final[1] = '2';
           else if(s[1] == '1')  final[1] = '3';
       }
    
    }//end of PM if

    

return final; // returning the statically allocated array ... if you wish to allocate dynamically you can use the syntax below
    // char* <<array-name>>[array-size];
    // for the above method ..for assigning the values you should use the '&' to add the value to the its respective  addressess
}
