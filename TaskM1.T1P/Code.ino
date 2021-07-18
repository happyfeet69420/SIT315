int sensorPin = 0;
int ledPin = 13;

void setup()
{
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int reading = analogRead(sensorPin); 
  
  float volt = reading * 5.0;
  volt /= 1024.0;
  
  float tempature = (volt - 0.5) * 100; 
  Serial.print(tempature);
  Serial.println(" degrees ");
  
  if (tempature > 30)
  {
    digitalWrite(ledPin, HIGH);
    Serial.println("LED is on");
  }
  else
  {
    digitalWrite(ledPin, LOW);
    Serial.println("LED is off");
  }
}
