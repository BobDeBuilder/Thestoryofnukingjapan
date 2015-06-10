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
	cout << "There once was this guy named "; p1.displayName(); cout << endl;
	while (bJapanIsNotNuked)
	{
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
