#include <iostream>
#include <string>
#include "PLAYER.h"
using namespace std;

string sCurrentAction;
bool bJapanIsNotNuked = true;

int main()
{
	cout << "Initial text/story here" << endl;
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
