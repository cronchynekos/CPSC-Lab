#pragma once
#ifndef NBA_H
#define NBA_H
#include <string>
#include <iostream>
#include "Athlete.h"
#include <iomanip>
using namespace std;

class NBA : public Athlete
{
public:
	NBA(string sport, double sal) : Athlete(sport, sal) {}//overloaded constructor
	virtual void pickLeaguePosition()
	{
		int pickPosition;
		cout << "What position does the athlete play?" << endl;
		cout << "(1-5)" << endl;
		cout << "1: point guard" << endl;
		cout << "2: shooting guard" << endl;
		cout << "3: small forward" << endl;
		cout << "4: power forward" << endl;
		cout << "5: center" << endl;
		try//exception for the input
		{
			cin >> pickPosition;
			if (cin.fail())
			{
				throw string("error");
			}
		}
			catch (string exceptionString)
			{
				cout << exceptionString << endl;
				pickPosition = 1;
			}
			if (pickPosition == 1)
			{
				position = "Point guard";
			}
			else if (pickPosition == 2)
			{
				position = "shooting guard";
			}
			else if (pickPosition == 3)
			{
				position = "small forward";
			}
			else if (pickPosition == 4)
			{
				position = "power forward";
			}
			else if (pickPosition == 5)
			{
				position = "center";
			}
			cout << "Athlete Data: " << league << " " << position << endl;
	}
	virtual void displayLeagueSalaryData()//print function
	{
		cout << "This Athlete's salary of " << setprecision(2) << fixed << "$" << salary << " compares to " << (salary / 4580000) * 100 << "%" << " of the avearge NBA player's salary of $458000.00 " << endl;
	}
};
#endif