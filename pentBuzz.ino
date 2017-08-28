const int pent = A0;
const int buzz = 9;


int pentRaw = 0;
int pentMaped = 0;

int pentRawMax = 0;
int pentRawMin = 1023;

void setup()
{
  Serial.begin(9600);
  
  tone(buzz, 500, 3000);
  
  while (millis() < 5000)
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
  noTone(buzz);
}



void loop()
{
  pentRaw = analogRead(pent);

  pentMaped = map(pentRaw, pentRawMin, pentRawMax, 20, 10000);

  tone(buzz, pentMaped, 40);
  delay(60);
  
  Serial.print(pentRaw);
  Serial.print(" - ");
  Serial.print(pentMaped);
  Serial.print(" - ");
  Serial.print(pentRawMin);
  Serial.print(" - ");
  Serial.println(pentRawMax);
}
