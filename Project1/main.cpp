#include <iostream>
#include "PLAYER.h"
#include "NCLOCK.h"
using namespace std;

string sCurrentAction;
bool bJapanIsNotNuked = true;

int main()
{
	string name;
	
	Clock nuke(7.00);	//clock starts at 7.00 by default, this can be changed using .setTime(float)
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
		if (nuke.getTime() >= 8.16){
			cout << "GAME OVER! YOU GOT NUKED!\n"; //This text is just an idea.
			bJapanIsNotNuked = false;
		}
	}
	return 0;
}
