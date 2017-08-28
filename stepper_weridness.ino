#include <Stepper.h>

const int pentPin = A0;

int pentVal;
int pentValRaw;

Stepper myStepper(48, 8, 9, 10, 11);

void setup() 
{
  Serial.begin(9600);
  myStepper.setSpeed(60);
}

void loop() 
{
  pentValRaw = analogRead(pentPin);
  pentVal = map(pentValRaw,0,920,20,60);
  Serial.print(pentValRaw); Serial.print(" -- "); Serial.println(pentVal);  
  
  myStepper.setSpeed(pentVal);
  myStepper.step(10);
  delay(100);
}

