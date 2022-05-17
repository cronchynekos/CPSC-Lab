#pragma once
#ifndef CREATURE_H
#define CREATURE_H
#include <iostream>
#include <string>

using namespace std;

class Creature //Base class
{
protected:
	string CreatureName;
public:
	Creature(string n);//default constructor
	virtual void DoAction() = 0;//prototype virtual function
	virtual void DrawOnScreen() = 0;//prototype virtual function

};
Creature::Creature(string n)//default constructor
{
	CreatureName = n;
}

#endif