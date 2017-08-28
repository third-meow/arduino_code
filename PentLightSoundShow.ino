const int pentPin = A0;
const int buzzPin = 6;
int ledPin[] = {0, 1, 2, 3, 4};

int pentValue = 0;


void setup()
{
  pinMode(buzzPin, OUTPUT);
  pinMode(pentPin, INPUT);
  pinMode(ledPin[0], OUTPUT);
  pinMode(ledPin[1], OUTPUT);
  pinMode(ledPin[2], OUTPUT);
  pinMode(ledPin[3], OUTPUT);
  pinMode(ledPin[4], OUTPUT);

  digitalWrite(ledPin[0], HIGH);
  delay(400);
  digitalWrite(ledPin[0], LOW);
  digitalWrite(ledPin[1], HIGH);
  delay(400);
  digitalWrite(ledPin[1], LOW);
  digitalWrite(ledPin[2], HIGH);
  delay(400);
  digitalWrite(ledPin[2], LOW);
  digitalWrite(ledPin[3], HIGH);
  delay(400);
  digitalWrite(ledPin[3], LOW);
  digitalWrite(ledPin[4], HIGH);
  delay(400);
  digitalWrite(ledPin[4], LOW);
}

void loop()
{


}
