void setup() {
  pinMode(3, OUTPUT);
  pinMode(10, OUTPUT);
  
  digitalWrite(3, HIGH);
  digitalWrite(10, HIGH);
  delay(1000);
  
}

void loop() {
  digitalWrite(3, HIGH);
  delay(200);
  digitalWrite(3, LOW);
  
  digitalWrite(10, HIGH);
  delay(200);
  digitalWrite(10, LOW);
}
