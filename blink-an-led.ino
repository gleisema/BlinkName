

int led = D7; 

void longblink() {
  
  digitalWrite(led, HIGH);
  delay(1000);
  digitalWrite(led, LOW);
  delay(500);
  
}

void shortblink() {
  
  digitalWrite(led, HIGH);
  delay(300);
  digitalWrite(led, LOW);
  delay(500);
  
}
    

void setup() {

  pinMode(led, OUTPUT);

}

void loop() {

  //G
  longblink();
  longblink();
  shortblink();
  
  //E
  shortblink();
  
  //O
  longblink();
  longblink();
  longblink();
  
  //R
  shortblink();
  longblink();
  shortblink();
  
  //G
  longblink();
  longblink();
  shortblink();
  
  //A
  shortblink();
  longblink();
}

