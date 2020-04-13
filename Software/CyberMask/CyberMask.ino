//setup the pins
int buzzer = 1;
int buzzer1 = 1;
int sensorValue = 0;

// the setup function runs once when you reset or power the board
void setup() {
  // initialize buzzer as an output.
  pinMode(buzzer, OUTPUT);
  pinMode(2, INPUT);
  
}
// the loop function runs over and over again forever
void loop() {

sensorValue = analogRead(1); 
  if(sensorValue>100){
    
  
  // make 3 dots to make an S
  for (int a = 0; a < 3; a++) {
    dot();
  }
  // wait 100 miliseconds after the first S
  delay(100);
  // make 3 dashes to make an o
  for (int b = 0; b < 3; b++) {
    dash();
  }
  // wait 100 miliseconds after the o
  delay(100);
  // make 3 dots to make an S
  for (int c = 0; c < 3; c++) {
    dot();
  }
  //wait 5 seconds before playing again
  delay(5000);
}else{
  dot();
  delay(1000);
}
}
// make a dot noise
void dot()
{
  //turn on the buzzer
  digitalWrite(buzzer, HIGH);
  delay(100);
  // turn off the buzzer
  digitalWrite(buzzer, LOW);
  delay(100);  
}

// make a dash noise
void dash()
{
  // turn on the buzzer
  digitalWrite(buzzer, HIGH);
  delay(300);
  // turn off the buzzer
  digitalWrite(buzzer, LOW);
  delay(100);
}
void dash1()
{
  // turn on the buzzer
  digitalWrite(buzzer1, HIGH);
  delay(300);
  // turn off the buzzer
  digitalWrite(buzzer1, LOW);
  delay(100);
}

