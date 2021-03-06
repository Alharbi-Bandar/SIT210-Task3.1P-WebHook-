 

int led1 = D7;  // The on-board LED

int led2 = A5;

int light_photoresitor = A0;  // photoresitor


void setup() {
    
  pinMode(led1, OUTPUT);
  
  pinMode(led2, OUTPUT);
  
  pinMode(light_photoresitor, INPUT);
  
}

void loop() {
    
  digitalWrite(led1, HIGH);   // Turn ON the on-Argon-board LED 
  
  digitalWrite(led2, HIGH);   // Turn ON the LED 
  
  String p_resitor = String(analogRead(light_photoresitor));
  
  Particle.publish("p_resitor", p_resitor, PRIVATE);
  
  delay(3000);               // Wait for 30 seconds

  digitalWrite(led1, LOW);    // Turn OFF the on-Argon-board LED
  
  digitalWrite(led2, LOW);    // Turn OFF the LED
  
  delay(3000);               // Wait for 30 seconds
}
 
 
 
 