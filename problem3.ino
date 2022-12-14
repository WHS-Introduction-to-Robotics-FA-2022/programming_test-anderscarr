int inPin = A0;
int val;
int x;
void setup()
{
    pinMode(inPin, INPUT);
    Serial.begin(9600);
    analogRead(inPin);
    
}

void loop()
{
    
    val = analogRead(inPin);
    Serial.println(analogRead(inPin));
    delay(250);
  
    
    

}
