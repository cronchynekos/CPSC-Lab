//#pragma once
#ifndef BLOODDATA_H
#define BLOODDATA_H
#include <iostream>
#include <string>
using namespace std;

class BloodData
{
private:
	string blood_type;
	char RhFactor;
public:
	BloodData();
	string getBloodType()
	{
		return blood_type;
	}
	char getRhFactor()
	{
		return RhFactor;
	}
	void setBloodType(string input)
	{
		blood_type = input;
	}
	void setRhFactor(char input)
	{
		RhFactor = input;
	}
};
 
BloodData::BloodData()
{
	blood_type = "O";
	RhFactor = '+';
}

#endif