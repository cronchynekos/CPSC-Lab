#pragma once
#ifndef MONSTER_H
#define MONSTER_H
#include <iostream>
#include <string>
using namespace std;
#include "Creature.h"

class Monster : public Creature
{
public:
	Monster(string n) :Creature(n) {}

	virtual void DoAction()
	{
		cout << " is doing monster stuff!" << endl;
	}
	virtual void DrawOnScreen()
	{
		cout << CreatureName;
	}
};

#endif