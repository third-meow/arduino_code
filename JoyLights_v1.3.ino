//pin variables
const int joyY = A0;
const int joyX = A1;
const int ledLeft = 12;
const int ledRight = 11;
const int ledUp = 10;
const int ledDown = 9;
//variable variables
int yPos;
int xPos;

void setup()
{
  Serial.begin(9600);

  pinMode(ledLeft, OUTPUT);
  pinMode(ledRight, OUTPUT);
  pinMode(ledUp, OUTPUT);
  pinMode(ledDown, OUTPUT);
}

void loop()
{
  yPos = map(analogRead(joyY), 0, 1023, 0, 20);
  xPos = map(analogRead(joyX), 0, 1023, 20, 0);

  if (yPos > 17)
  {
    digitalWrite(ledUp, HIGH);
  }
  else
  {
    digitalWrite(ledUp, LOW);

    if (yPos < 3)
    {
      digitalWrite(ledDown, HIGH);
    }
    else
    {
      digitalWrite(ledDown, LOW);
    }
  }


if (xPos > 17)
  {
    digitalWrite(ledRight, HIGH);
  }
  else
  {
    digitalWrite(ledRight, LOW);

    if (xPos < 3)
    {
      digitalWrite(ledLeft, HIGH);
    }
    else
    {
      digitalWrite(ledLeft, LOW);
    }
  }


















}
