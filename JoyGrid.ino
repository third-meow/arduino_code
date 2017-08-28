//pin variables
const int joyY = A0;
const int joyX = A1;

const int DR = 2;
const int DM = 3;
const int DL = 4;
const int MR = 5;
const int MM = 6;
const int ML = 7;
const int UR = 8;
const int UM = 9;
const int UL = 10;

//variable variables
int yPos;
int xPos;


void setup()
{
  Serial.begin(9600);

  pinMode(joyY, INPUT);
  pinMode(joyX, INPUT);

  pinMode(DR, OUTPUT);
  pinMode(DM, OUTPUT);
  pinMode(DL, OUTPUT);
  pinMode(MR, OUTPUT);
  pinMode(MM, OUTPUT);
  pinMode(ML, OUTPUT);
  pinMode(UR, OUTPUT);
  pinMode(UM, OUTPUT);
  pinMode(UL, OUTPUT);

  digitalWrite(UL, HIGH);
  delay(1000);
  digitalWrite(MM, HIGH);
  delay(1000);
  digitalWrite(DR, HIGH);
  delay(1000);
  digitalWrite(UL, LOW);
  digitalWrite(MM, LOW);
  digitalWrite(DR, LOW);
  delay(200);
  digitalWrite(UL, HIGH);
  digitalWrite(MM, HIGH);
  digitalWrite(DR, HIGH);
  delay(200);
  digitalWrite(UL, LOW);
  digitalWrite(MM, LOW);
  digitalWrite(DR, LOW);
  delay(200);
  digitalWrite(UL, HIGH);
  digitalWrite(MM, HIGH);
  digitalWrite(DR, HIGH);
  delay(200);
  digitalWrite(UL, LOW);
  digitalWrite(MM, LOW);
  digitalWrite(DR, LOW);
  delay(2000);
  



}

void loop()
{
  yPos = map(analogRead(joyY), 0, 1023, 20, 0);
  xPos = map(analogRead(joyX), 0, 1023, 0, 20);

  if (yPos > 15 && xPos < 5)
  {
    digitalWrite(UL, HIGH);
    Serial.println("UL");
  }
  else
  {
    digitalWrite(UL, LOW);
  }


  if (yPos > 15 && xPos > 5 && xPos < 15)
  {
    digitalWrite(UM, HIGH);
    Serial.println("UM");
  }
  else
  {
    digitalWrite(UM, LOW);
  }


  if (yPos > 15 && xPos > 15)
  {
    digitalWrite(UR, HIGH);
    Serial.println("UR");
  }
  else
  {
    digitalWrite(UR, LOW);
  }


  if (yPos > 5 && yPos < 15 && xPos < 5)
  {
    digitalWrite(ML, HIGH);
    Serial.println("ML");
  }
  else
  {
    digitalWrite(ML, LOW);
  }


  if (yPos < 15 && yPos > 5 && xPos < 15 && xPos > 5)
  {
    digitalWrite(MM, HIGH);
    Serial.println("MM");
  }
  else
  {
    digitalWrite(MM, LOW);
  }


  if (yPos < 15 && yPos > 5 && xPos > 15)
  {
    digitalWrite(MR, HIGH);
    Serial.println("MR");
  }
  else
  {
    digitalWrite(MR, LOW);
  }

  if (yPos < 5 && xPos < 5)
  {
    digitalWrite(DL, HIGH);
    Serial.println("DL");
  }
  else
  {
    digitalWrite(DL, LOW);
  }


  if (yPos < 5 && xPos < 15 && xPos > 5)
  {
    digitalWrite(DM, HIGH);
    Serial.println("DM");
  }
  else
  {
    digitalWrite(DM, LOW);
  }

  if (yPos < 5 && xPos > 15)
  {
    digitalWrite(DR, HIGH);\
    Serial.println("DR");
  }
  else
  {
    digitalWrite(DR, LOW);
  }
}
