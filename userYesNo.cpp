//this code is a borrowbreadcat project. 
//userYesNo v1.1 2018-06-05

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

//user types yes, y, Y, Yes, YES or no, n, N, No, NO. features error message and failsafe loop for invalid input
bool userYesNo()
{
	bool dummy{ true };
	string yesno{ "empty" };
	bool yesOrNo{ false };

	while (dummy == true) //allows program to ask again if user enters nonsense
	{
		cout << "Type yes or no... \n";
		cin >> yesno;
		cout << "\n";

		if (yesno == "yes" || yesno == "y" || yesno == "YES" || yesno == "Yes" || yesno == "Y")
		{
			yesOrNo = true;
			dummy = false;
		}
		else if (yesno == "no" || yesno == "n" || yesno == "NO" || yesno == "No" || yesno == "N")
		{
			yesOrNo = false;
			dummy = false;
			cout << "No?  Okay then... \n";
		}
		else //stupid answer gets snarky response
		{
			cout << "Invalid entry.  Try again. \n";
		}
	}
	return yesOrNo;
}
