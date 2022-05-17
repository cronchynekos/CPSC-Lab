#pragma once
#ifndef DRAGON_H
#define DRAGON_H
#include <iostream>
#include <string>
using namespace std;
#include "Monster.h"

class Dragon : public Monster
{
public:
	Dragon(string n) :Monster(n) {}

	virtual void DoAction()
	{
		cout << " is breathing fire!" << endl;
	}
	virtual void DrawOnScreen()
	{
		cout << CreatureName;
	}
};

#endif