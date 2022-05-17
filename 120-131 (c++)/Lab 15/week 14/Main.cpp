//Nathan Kim CPSC 121 Lab 12

#include <iostream>
#include <string>
#include <memory>

#include "Creature.h"
#include "Player.h"
#include "Monster.h"
#include "WildPig.h"
#include "Dragon.h"
using namespace std;

int main()
{
	shared_ptr<Player> player = make_shared<Player>("Timmy");//shared pointer hard coded with the name
	player->DrawOnScreen();//virtual function called
	player->DoAction();//virtual function called

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