//Nathan Kim CPSC 121 Lab 12

#include <iostream>
#include <string>
#include <memory>
using namespace std;

class Creature
{
protected:
	string CreatureName;
public:
	Creature(string n);
	virtual void DoAction() = 0;
	virtual void DrawOnScreen() = 0;

};
Creature::Creature(string n)
{
	CreatureName = n;
}


class Player : public Creature
{
public:
	Player(string n) :Creature(n) {}

	virtual void DoAction()
	{
		cout << " is attacking!" << endl;
	}
	virtual void DrawOnScreen()
	{
		cout << CreatureName;
	}
};


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


int main()
{
	shared_ptr<Player> player = make_shared<Player>("Timmy");
	player->DrawOnScreen();
	player->DoAction();

	shared_ptr<Monster> monster = make_shared<Monster>("UFO");
	monster->DrawOnScreen();
	monster->DoAction();

	shared_ptr<WildPig> pig = make_shared<WildPig>("Piglet");
	pig->DrawOnScreen();
	pig->DoAction();

	shared_ptr<Dragon> dragon = make_shared<Dragon>("Viserion");
	dragon->DrawOnScreen();
	dragon->DoAction();

	cin.get();

	return 0;
}