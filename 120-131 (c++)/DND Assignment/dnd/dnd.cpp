//Nathanael Kim Assignment 3 week 12
#include <iostream>
#include <string>
#include <ctime>
#include <conio.h>
#include "CommonStatistics.h"
#include "Warrior.h"
#include "Mage.h"
#include "Rogue.h"
using namespace std;
int main()
{
    shared_ptr<Warrior> timmy = make_shared<Warrior>("Timmy");
    cout << "You are now knight " << timmy->getName() << ", a ferocious Warrior" << endl;
    shared_ptr<Mage> gandolfo = make_shared<Mage>("Gandolfo");
    cout << "A Mage named Wizard " << gandolfo->getName() << ", appears and is ready to battle!" << endl << endl;

    timmy->printBasicStats();
    timmy->printHealing();
    cout << endl;
    gandolfo->printBasicStats();
    cout << endl;

    while (timmy->getHealth() && gandolfo->getHealth() > 0)
    {
        srand((unsigned)time(NULL));
        int speedScore1 = rand() % 20 + 1;
        int speedScore2 = rand() % 20 + 1;
        cout << "You rolled one dice(1-20): Initiative score of " << speedScore1 << " + a speed modifier of " << timmy->getSpeed()
            << " for a total of " << speedScore1 + timmy->getSpeed() << endl;
        cout << "The Mage rolled one dice(1-20): Initiative score of " << speedScore2 << " + a speed modifier of " << gandolfo->getSpeed()
            << " for a total of " << speedScore2 + gandolfo->getSpeed() << endl;

        if (speedScore1 + timmy->getSpeed() >= speedScore2 + gandolfo->getSpeed())
        {
            cout << "Your move: " << endl;
            cout << "What will you do?" << endl;
            cout << "1. Attack" << endl;
            cout << "2. Heal" << endl;
            int input;

            cin >> input;
            if (input == 1)
            {
                int timmyAttackScore = rand() % timmy->getAttack2() + 1;
                cout << "You rolled one dice(1-" << timmy->getAttack2() << "): Damage score of " << timmyAttackScore <<
                    " + a strength modifier of " << timmy->getStrength() << " for a total of " << timmyAttackScore + timmy->getStrength() << endl;
                cout << gandolfo->getName() << " has taken " << timmyAttackScore + timmy->getStrength() - gandolfo->getArmor() << " damage and is now at "
                    << gandolfo->getHealth() - (timmyAttackScore + timmy->getStrength() - gandolfo->getArmor()) << " HP" << endl;
                gandolfo->setHealth(gandolfo->getHealth() - (timmyAttackScore + timmy->getStrength() - gandolfo->getArmor()));
            }
            else if (input == 2)
            {
                int timmyHealScore1 = rand() % timmy->getHealing2() + 1;
                int timmyHealScore2 = rand() % timmy->getHealing2() + 1;
                cout << "You heal yourself for " << timmyHealScore1 + timmyHealScore2 << " hit points!" << endl;
                timmy->setHealth(timmyHealScore1 + timmyHealScore2 + timmy->getHealth());
                cout << "Total HP now at: " << timmy->getHealth() << endl;
            }
            else
            {
                cout << "invalid input. Input set to 2" << endl;
                int timmyHealScore1 = rand() % timmy->getHealing2() + 1;
                int timmyHealScore2 = rand() % timmy->getHealing2() + 1;
                cout << "You heal yourself for " << timmyHealScore1 + timmyHealScore2 << " hit points!" << endl;
                timmy->setHealth(timmyHealScore1 + timmyHealScore2 + timmy->getHealth());
                cout << "Total HP now at: " << timmy->getHealth() << endl;
            }
            cout << endl;
            int gandolfoAttackScore = rand() % gandolfo->getAttack2() + 1;
            cout << "Ganfolfo rolled one dice(1-" << gandolfo->getAttack2() << "): Damage score of " << gandolfoAttackScore <<
                " + a strength modifier of " << gandolfo->getStrength() << " for a total of " << gandolfoAttackScore + gandolfo->getStrength() << endl;
            cout << timmy->getName() << " has taken " << gandolfoAttackScore + gandolfo->getStrength() - timmy->getArmor() << " damage and is now at "
                << timmy->getHealth() - (gandolfoAttackScore + gandolfo->getStrength() - timmy->getArmor()) << " HP" << endl << endl;
        }
        else {
            int gandolfoAttackScore = rand() % gandolfo->getAttack2() + 1;
            cout << "Ganfolfo rolled one dice(1-" << gandolfo->getAttack2() << "): Damage score of " << gandolfoAttackScore <<
                " + a strength modifier of " << gandolfo->getStrength() << " for a total of " << gandolfoAttackScore + gandolfo->getStrength() << endl;
            cout << timmy->getName() << " has taken " << gandolfoAttackScore + gandolfo->getStrength() - timmy->getArmor() << " damage and is now at "
                << timmy->getHealth() - (gandolfoAttackScore + gandolfo->getStrength() - timmy->getArmor()) << " HP" << endl << endl;

            cout << "Your move: " << endl;
            cout << "What will you do?" << endl;
            cout << "1. Attack" << endl;
            cout << "2. Heal" << endl;
            int input;


            cin >> input;
            if (input == 1)
            {
                int timmyAttackScore = rand() % timmy->getAttack2() + 1;
                cout << "You rolled one dice(1-" << timmy->getAttack2() << "): Damage score of " << timmyAttackScore <<
                    " + a strength modifier of " << timmy->getStrength() << " for a total of " << timmyAttackScore + timmy->getStrength() << endl;
                cout << gandolfo->getName() << " has taken " << timmyAttackScore + timmy->getStrength() - gandolfo->getArmor() << " damage and is now at "
                    << gandolfo->getHealth() - (timmyAttackScore + timmy->getStrength() - gandolfo->getArmor()) << " HP" << endl;
                gandolfo->setHealth(gandolfo->getHealth() - (timmyAttackScore + timmy->getStrength() - gandolfo->getArmor()));
            }
            else if (input == 2)
            {
                int timmyHealScore1 = rand() % timmy->getHealing2() + 1;
                int timmyHealScore2 = rand() % timmy->getHealing2() + 1;
                cout << "You heal yourself for " << timmyHealScore1 + timmyHealScore2 << " hit points!" << endl;
                timmy->setHealth(timmyHealScore1 + timmyHealScore2 + timmy->getHealth());
                cout << "Total HP now at: " << timmy->getHealth() << endl;
            }
            else
            {
                cout << "invalid input. Input set to 2" << endl;
                int timmyHealScore1 = rand() % timmy->getHealing2() + 1;
                int timmyHealScore2 = rand() % timmy->getHealing2() + 1;
                cout << "You heal yourself for " << timmyHealScore1 + timmyHealScore2 << " hit points!" << endl;
                timmy->setHealth(timmyHealScore1 + timmyHealScore2 + timmy->getHealth());
                cout << "Total HP now at: " << timmy->getHealth() << endl;
            }
            cout << endl;
        }
    }//end of the while loop
    //start of fight against rogue
    if (timmy->getHealth() <= 0)
    {
        cout << "You lose!" << endl;
        return 0;
    }
    else {
        cout << "Your health has been reset back to 20!" << endl << endl;
        timmy->setHealth(20);
    }

    shared_ptr<Rogue> jim = make_shared<Rogue>("Jim");
    cout << "A Rogue named " << jim->getName() << ", appears and is ready to battle!" << endl << endl;

    timmy->printBasicStats();
    timmy->printHealing();
    cout << endl;
    jim->printBasicStats();
    jim->printDodge();
    cout << endl;


    while (timmy->getHealth() && jim->getHealth() > 0)
    {
        srand((unsigned)time(NULL));
        int speedScore1 = rand() % 20 + 1;
        int speedScore2 = rand() % 20 + 1;
        cout << "You rolled one dice(1-20): Initiative score of " << speedScore1 << " + a speed modifier of " << timmy->getSpeed()
            << " for a total of " << speedScore1 + timmy->getSpeed() << endl;
        cout << "The Mage rolled one dice(1-20): Initiative score of " << speedScore2 << " + a speed modifier of " << jim->getSpeed()
            << " for a total of " << speedScore2 + jim->getSpeed() << endl;

        if (speedScore1 + timmy->getSpeed() >= speedScore2 + jim->getSpeed())
        {
            cout << "Your move: " << endl;
            cout << "What will you do?" << endl;
            cout << "1. Attack" << endl;
            cout << "2. Heal" << endl;
            int input;

            cin >> input;
            if (input == 1)
            {
                if (jim->getDodge() * (rand() % 100 + 1) > 50)
                {
                    int timmyAttackScore = rand() % timmy->getAttack2() + 1;
                    cout << "You rolled one dice(1-" << timmy->getAttack2() << "): Damage score of " << timmyAttackScore <<
                        " + a strength modifier of " << timmy->getStrength() << " for a total of " << timmyAttackScore + timmy->getStrength() << endl;
                    cout << jim->getName() << " has taken " << timmyAttackScore + timmy->getStrength() - jim->getArmor() << " damage and is now at "
                        << jim->getHealth() - (timmyAttackScore + timmy->getStrength() - jim->getArmor()) << " HP" << endl;
                    jim->setHealth(jim->getHealth() - (timmyAttackScore + timmy->getStrength() - jim->getArmor()));
                }
                else {
                    cout << "You missed!" << endl;
                }

            }
            else if (input == 2)
            {
                int timmyHealScore1 = rand() % timmy->getHealing2() + 1;
                int timmyHealScore2 = rand() % timmy->getHealing2() + 1;
                cout << "You heal yourself for " << timmyHealScore1 + timmyHealScore2 << " hit points!" << endl;
                timmy->setHealth(timmyHealScore1 + timmyHealScore2 + timmy->getHealth());
                cout << "Total HP now at: " << timmy->getHealth() << endl;
            }
            else
            {
                cout << "invalid input. Input set to 2" << endl;
                int timmyHealScore1 = rand() % timmy->getHealing2() + 1;
                int timmyHealScore2 = rand() % timmy->getHealing2() + 1;
                cout << "You heal yourself for " << timmyHealScore1 + timmyHealScore2 << " hit points!" << endl;
                timmy->setHealth(timmyHealScore1 + timmyHealScore2 + timmy->getHealth());
                cout << "Total HP now at: " << timmy->getHealth() << endl;
            }
            cout << endl;
            int jimAttackScore = rand() % jim->getAttack2() + 1;
            cout << "Jim rolled one dice(1-" << jim->getAttack2() << "): Damage score of " << jimAttackScore <<
                " + a strength modifier of " << jim->getStrength() << " for a total of " << jimAttackScore + jim->getStrength() << endl;
            cout << timmy->getName() << " has taken " << jimAttackScore + jim->getStrength() - timmy->getArmor() << " damage and is now at "
                << timmy->getHealth() - (jimAttackScore + jim->getStrength() - timmy->getArmor()) << " HP" << endl << endl;
        }
        else {
            cout << endl;
            int jimAttackScore = rand() % jim->getAttack2() + 1;
            cout << "Jim rolled one dice(1-" << jim->getAttack2() << "): Damage score of " << jimAttackScore <<
                " + a strength modifier of " << jim->getStrength() << " for a total of " << jimAttackScore + jim->getStrength() << endl;
            cout << timmy->getName() << " has taken " << jimAttackScore + jim->getStrength() - timmy->getArmor() << " damage and is now at "
                << timmy->getHealth() - (jimAttackScore + jim->getStrength() - timmy->getArmor()) << " HP" << endl << endl;

            cout << "Your move: " << endl;
            cout << "What will you do?" << endl;
            cout << "1. Attack" << endl;
            cout << "2. Heal" << endl;
            int input;

            cin >> input;
            if (input == 1)
            {
                if (jim->getDodge() * (rand() % 2 + 1) >= 50)
                {
                    int timmyAttackScore = rand() % timmy->getAttack2() + 1;
                    cout << "You rolled one dice(1-" << timmy->getAttack2() << "): Damage score of " << timmyAttackScore <<
                        " + a strength modifier of " << timmy->getStrength() << " for a total of " << timmyAttackScore + timmy->getStrength() << endl;
                    cout << jim->getName() << " has taken " << timmyAttackScore + timmy->getStrength() - jim->getArmor() << " damage and is now at "
                        << jim->getHealth() - (timmyAttackScore + timmy->getStrength() - jim->getArmor()) << " HP" << endl;
                    jim->setHealth(jim->getHealth() - (timmyAttackScore + timmy->getStrength() - jim->getArmor()));
                }
                else {
                    cout << "You missed!" << endl;
                }

            }
            else if (input == 2)
            {
                int timmyHealScore1 = rand() % timmy->getHealing2() + 1;
                int timmyHealScore2 = rand() % timmy->getHealing2() + 1;
                cout << "You heal yourself for " << timmyHealScore1 + timmyHealScore2 << " hit points!" << endl;
                timmy->setHealth(timmyHealScore1 + timmyHealScore2 + timmy->getHealth());
                cout << "Total HP now at: " << timmy->getHealth() << endl;
            }
            else
            {
                cout << "invalid input. Input set to 2" << endl;
                int timmyHealScore1 = rand() % timmy->getHealing2() + 1;
                int timmyHealScore2 = rand() % timmy->getHealing2() + 1;
                cout << "You heal yourself for " << timmyHealScore1 + timmyHealScore2 << " hit points!" << endl;
                timmy->setHealth(timmyHealScore1 + timmyHealScore2 + timmy->getHealth());
                cout << "Total HP now at: " << timmy->getHealth() << endl;
            }

            cout << endl;
        }


    }
    if (timmy->getHealth() <= 0)
    {
        cout << "You lose!" << endl;
    }
    else {
        cout << "You Win!" << endl;
    }

    return 0;
}//end of main