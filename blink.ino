// C++ code
//
void setup()
{
  pinMode(9, OUTPUT);
  digitalWrite(9, LOW);
  Serial.begin(9600);
}

void loop()
{
  digitalWrite(9, HIGH);
  Serial.println("TURN ON");
  delay(1000); 
  digitalWrite(9, LOW);
  Serial.println("TURN OFF");
  delay(1000); 
}