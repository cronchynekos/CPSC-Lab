#pragma once
#ifndef MLB_H
#define MLB_H
#include <string>
#include <iostream>
#include "Athlete.h"
#include <iomanip>
using namespace std;

class MLB : public Athlete
{
public:
	MLB(string sport, double sal) : Athlete(sport, sal) {}

	virtual void pickLeaguePosition()
	{
		int pickPosition;
		cout << "What position does the athlete play?" << endl;
		cout << "(1-5)" << endl;
		cout << "1: pitcher" << endl;
		cout << "2: catcher" << endl;
		cout << "3: baseman" << endl;
		cout << "4: shortstop" << endl;
		cout << "5: outfielder" << endl;
		try
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
			position = "pitcher";
		}
		else if (pickPosition == 2)
		{
			position = "catcher";
		}
		else if (pickPosition == 3)
		{
			position = "baseman";
		}
		else if (pickPosition == 4)
		{
			position = "power forward";
		}
		else if (pickPosition == 5)
		{
			position = "outfielder";
		}
		cout << "Athlete Data: " << league << " " << position << endl;
	}
	virtual void displayLeagueSalaryData()
	{
		cout << "This Athlete's salary of " << setprecision(2) << fixed << "$" << salary << " compares to " << (salary / 4580000) * 100 << "%" << " of the avearge MLB player's salary of $458000.00 " << endl;
	}
};
#endif