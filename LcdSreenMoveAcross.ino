#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
int spaceNum = 0;
int lineNumCalc = 0;
int lineNum = 0;

void setup()
{

	lcd.begin(16, 2); //Initialize the 16x2 LCD
	
	lcd.clear();	//Clear any old data displayed on the LCD

  lcd.print("shall we...");
  lcd.setCursor(0, 1);
  delay(1000);
  lcd.print("PLAY DA BEATS");


}

void loop()
{

	if ( lineNumCalc == 17 )
  {
    spaceNum = 0;
    lineNum = lineNum + 1;
    	
  }
	
	lcd.setCursor(spaceNum, lineNum);

  lcd.print("test");

  delay(200);

  spaceNum = spaceNum + 1;
  lineNumCalc = lineNumCalc + 1;
  

  

}

