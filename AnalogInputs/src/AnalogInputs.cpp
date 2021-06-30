/******************************************************/
//       THIS IS A GENERATED FILE - DO NOT EDIT       //
/******************************************************/

#include "Particle.h"
#line 1 "c:/Users/Vikash/Downloads/HelloWorld/src/AnalogInputs/src/AnalogInputs.ino"
/*
 * Project AnalogInputs
 * Description:
 * Author:
 * Date:
 */
void setup();
void loop();
#line 7 "c:/Users/Vikash/Downloads/HelloWorld/src/AnalogInputs/src/AnalogInputs.ino"
SYSTEM_MODE(MANUAL);
SYSTEM_THREAD(ENABLED);

void setup() {
  pinMode(A5,INPUT);
  pinMode(D5,OUTPUT);
    
}


void loop() {
  
  uint16_t value; 
  Serial.begin(9600); 
  value = analogRead(A5);  
  Serial.println(value);  
  digitalWrite(D5,HIGH); // turns it on 
  delay(value); // delay of value second
  digitalWrite(D5,LOW); // turns the led off
  delay(value); // delay of value second
 
    
}