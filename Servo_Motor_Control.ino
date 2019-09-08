//Code Written by RAJDEEP BARUAH 

#include<Servo.h>

Servo servo1;
int pos;

void setup() {
  servo1.attach(9);

}

void loop() 
{ 
  
    servo1.write(180);
    delay(100);

    
}
