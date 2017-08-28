#include <Servo.h>

Servo pan;
Servo tilt;

int panPos;
int tiltPos;

void setup()
{
  Serial.begin(9600);
  
  pan.attach(3);
  tilt.attach(5);
}

void loop()
{


}

void swing(char pl, int to, int inc = 1)
{
  switch (pl)
  {
    case 'p':
      int from = pen.read();
      if (to < from)
      {
        for(from; from > to; from--)
        {
          pan.write(from);
          delay(15);
        }
      }
      if (to > from)
      {
        for(
      }
      break;
    case 't':
      //tiltswing
      break;
    default:
      Serial.print("ERROR: SERVO PL NOT FOUND");
      break;
  }
}

