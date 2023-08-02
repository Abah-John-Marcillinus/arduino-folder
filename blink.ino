int led =13;
char input;

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  Serial.print("press Y to turn on the LED\n press N to turn off the LED");
 
}

// the loop function runs over and over again forever
void loop() {
  input = Serial.read();
  if (input == 'Y'){
  digitalWrite(led, HIGH);
}
  
  if(input== 'N') {
  digitalWrite(led, LOW);
  }
    
  
}
