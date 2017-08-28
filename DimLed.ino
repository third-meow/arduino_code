
const int led = 11;

void setup()
{
  pinMode(led, OUTPUT);

}

void loop() 
{
  for(int k = 0; k <= 255; k++)
  {
    analogWrite(led, k);
    delay(10);
  }
  for(int kb = 255; kb >= 0; kb--)
  {
    analogWrite(led, kb);
    delay(10);
  }

}
