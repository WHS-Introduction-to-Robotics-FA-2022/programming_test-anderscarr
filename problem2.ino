
void setup() {
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop() {
  analogWrite(11, 128);
  analogWrite(10, 2);
  analogWrite(9, 16);
}
