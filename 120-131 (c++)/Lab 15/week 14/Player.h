#pragma once
#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include <string>
using namespace std;
#include "Creature.h"
class Player : public Creature//subclass based on creature class
{
public:
	Player(string n) :Creature(n) {}//passes string n to creature

	virtual void DoAction()//virtual function
	{
		cout << " is attacking!" << endl;
	}
	virtual void DrawOnScreen()//virtual function
	{
		cout << CreatureName;
	}
};

#endif