#include <iostream>
#include "PLAYER.h"
using namespace std;

string sCurrentAction;
bool bJapanIsNotNuked = true;

int main()
{
	string name;
	Player p1;
	cout << "Please enter your name\n:> ";
	cin >> name;
	p1.setName(name);
	cout << "There once was this guy named "; p1.displayName(); cout << "." << endl;
	while (bJapanIsNotNuked)
	{
		p1.displayName(); cout << " decided to go for a walk one nice August day at around 7:00 AM\nIn Hiroshima, Japan\n";
		cin >> sCurrentAction;
		if (sCurrentAction == "something")
		{
			cout << "do something here" << endl;
			// code goes here
			//use break; when ending the game
		}
	}
	return 0;
}
