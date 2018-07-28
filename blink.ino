//pin definitons
//red
#define R_PIN P5_0 //P2_4 - onboard led pin
//green
#define G_PIN P5_1 //P2_5
//blue
#define B_PIN P5_2 //P2_6

void setup() {
  //setup pin modes
  pinMode(R_PIN, OUTPUT);
  pinMode(G_PIN, OUTPUT);
  pinMode(B_PIN, OUTPUT);

  //allow battery usage
  pinMode(P2_2, OUTPUT);
  digitalWrite(P2_2, HIGH);
}

void loop() {
  //turn the red leds on
  digitalWrite(R_PIN, LOW);
  //wait 1 second
  delay(1000);
  //turn it off
  digitalWrite(R_PIN, HIGH);
  //wait one second
  delay(1000);
  
  //repeat with the green leds
  digitalWrite(G_PIN, LOW);
  delay(1000);
  digitalWrite(G_PIN, HIGH);
  delay(1000);
  
  //repeat with the blue leds
  digitalWrite(B_PIN, LOW);
  delay(1000);
  digitalWrite(B_PIN, HIGH);
  delay(1000);
}

