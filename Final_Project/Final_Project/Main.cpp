//Matt Demaio - Mike Goldberg - Vincent Grippa
//Final project Final Version

#include "menu.h"
#include "splash.h"
#include <string>
#include <iostream>

using namespace std;

int main()
{
	system("mode 650");
	system("Color 1A");
	system("cls");

	//http://www.kammerl.de/ascii/AsciiSignature.php
	string art = "";

	art += "ллллллллл                                              лллллллл \n";
	art += "лллАААААллл                                            лллААААллл\n";
	art += "ллл     ААА  лллллллл   лллллл  ллллл лллл лллллллл    Аллл   ААА\n";
	art += "Аллл         ААлллААллл лллААлллААллл Аллл ААлллААллл   Аллллллллл\n";
	art += "Аллл    ллллл Аллл ААА Аллл Аллл Аллл Аллл  Аллл Аллл   АлллААААллл\n";
	art += "ААллл  ААллл  Аллл     Аллл Аллл Аллл Аллл  Аллл Аллл   Аллл   Аллл\n";
	art += "ААллллллллл  ллллл    ААлллллл  ААлллллллл Аллллллл    ААлллллллл\n";
	art += "ААААААААА  ААААА      АААААА    АААААААА  АлллААА      АААААААА\n";
	art += "                                          Аллл\n";
	art += "                                          ллллл\n";
	art += "                                          ААААА\n";

	cout << art;
	cin.get();
	splashScreen();
	mainMenu();
	return 0;
}
