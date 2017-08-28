const int pent = A0;
int led[] = {7, 8, 9 ,10, 11, 12, 13};

int pentRaw = 0;
int pentMaped = 0;

int pentRawMax = 0;
int pentRawMin = 1023;

void setup() 
{
  Serial.begin(9600);

  pinMode(led[0], OUTPUT);
  pinMode(led[6], OUTPUT);  
  
  
  digitalWrite(led[0], HIGH);
  digitalWrite(led[1], HIGH);
  digitalWrite(led[2], HIGH);
  digitalWrite(led[3], HIGH);
  digitalWrite(led[4], HIGH);
  digitalWrite(led[5], HIGH);
  digitalWrite(led[6], HIGH); 
  
  
  while (millis() < 10000)
  {
    pentRaw = analogRead(pent);
    if (pentRaw > pentRawMax)
    {
      pentRawMax = pentRaw;
    }
    if (pentRaw < pentRawMin)
    {
      pentRawMin = pentRaw;
    }
  }

  digitalWrite(led[0], LOW);
  digitalWrite(led[6], LOW);

}

void loop() 
{
  pentRaw = analogRead(pent);
  pentMaped = map(pentRaw, pentRawMin, pentRawMax, 0, 7);

  digitalWrite(led[0], LOW);
  digitalWrite(led[1], LOW);
  digitalWrite(led[2], LOW);
  digitalWrite(led[3], LOW);
  digitalWrite(led[4], LOW);
  digitalWrite(led[5], LOW);
  digitalWrite(led[6], LOW);
  digitalWrite(led[pentMaped], HIGH);
  delay(100);

  Serial.print(pentRaw);
  Serial.print("    ");
  Serial.println(pentMaped);
}
