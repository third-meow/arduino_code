const int EchoA = 3;
const int TrigA = 4;
const int EchoB = 5;
const int TrigB = 6;




void setup() 
{
  Serial.begin(9600);

  pinMode(TrigA, OUTPUT);
  pinMode(TrigB, OUTPUT);
  pinMode(EchoA, INPUT);
  pinMode(EchoB, INPUT);

}

void loop() 
{
  

}



float detectDistance(int pin)
{
  float duration, distance;
  
  digitalWrite(pin, LOW);
  delayMicroseconds(2);
  digitalWrite(pin, HIGH);
  delayMicroseconds(10);
  digitalWrite(pin, LOW);
  duration = pulseIn(pin, HIGH);
  distance = (duration / 2) * 0.0344;
  
  if (distance > 400)
  {
    distance = 400;
  }
  if (distance < 3)
  {
    distance = 3;
  }
  return distance;
  delay(500);
}
