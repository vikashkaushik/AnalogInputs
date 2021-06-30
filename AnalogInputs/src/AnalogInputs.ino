/*
 * Project AnalogInputs
 * Description: Using a potentiometer, The LED can blink faster or slower based on how much you turn it.
 * Author: Vikash Kaushik
 * Date: 6/29/21
 */
SYSTEM_MODE(MANUAL);
SYSTEM_THREAD(ENABLED);

void setup() {
  // initializes the LED at D5 once as a output in the start
  pinMode(A5,INPUT);
  // initializes the potentiometer at D5 once as a output in the start
  pinMode(D5,OUTPUT);
    
}

void loop() {
  // made a variable for value which will be the integer value that the potentiometer is set to 0 to 4095.
  uint16_t value; 
  Serial.begin(9600); 
  // it will read the value and print it in the console
  value = analogRead(A5);  
  Serial.println(value);  
  digitalWrite(D5,HIGH); // turns it on 
  delay(value); // delay of value second
  digitalWrite(D5,LOW); // turns the led off
  delay(value); // delay of value second
 
    
}
