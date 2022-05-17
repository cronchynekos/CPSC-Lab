#pragma once
#ifndef WILDPIG_H
#define WILDPIG_H
#include <iostream>
#include <string>
using namespace std;
#include "Monster.h"

class WildPig : public Monster
{
public:
	WildPig(string n) :Monster(n) {}

	virtual void DoAction()
	{
		cout << " is Running!" << endl;
	}
	virtual void DrawOnScreen()
	{
		cout << CreatureName;
	}
};

#endif