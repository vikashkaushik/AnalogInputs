/*
 * Project AnalogInputs
 * Description: Using a potentiometer, The LED can blink faster or slower based on how much you turn it.
 * Author: Vikash Kaushik
 * Date: 6/29/21
 */
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