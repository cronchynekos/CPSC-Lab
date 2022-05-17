#pragma once
#ifndef NHL_H
#define NHL_H
#include <string>
#include <iostream>
#include "Athlete.h"
#include <iomanip>
using namespace std;

class NHL : public Athlete
{
public:
	NHL(string sport, double sal) : Athlete(sport, sal) {}

	virtual void pickLeaguePosition()
	{
		int pickPosition;
		cout << "What position does the athlete play?" << endl;
		cout << "(1-4)" << endl;
		cout << "1: center" << endl;
		cout << "2: winger" << endl;
		cout << "3: defenseman" << endl;
		cout << "4: goalie" << endl;
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
			position = "center";
		}
		else if (pickPosition == 2)
		{
			position = "winger";
		}
		else if (pickPosition == 3)
		{
			position = "defenseman";
		}
		else if (pickPosition == 4)
		{
			position = "goalie";
		}
		cout << "Athlete Data: " << league << " " << position << endl;
	}

	virtual void displayLeagueSalaryData()
	{
		cout << "This Athlete's salary of " << setprecision(2) << fixed << "$" << salary << " compares to " << (salary / 4580000) * 100 << "%" << " of the avearge NHL player's salary of $458000.00 " << endl;
	}
};
#endif