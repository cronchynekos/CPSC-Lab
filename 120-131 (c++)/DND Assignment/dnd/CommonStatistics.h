#pragma once
#ifndef COMMMONSTATISTICS_H
#define COMMMONSTATISTICS_H
#include <string>
#include <iostream>
using namespace std;

class CommonStatistics
{
protected:
    int health;
    int armor;
    int attack1;
    int attack2;
    int strengthMod;
    int speedMod;
    string name;
public:
    CommonStatistics(string n);
    int getHealth()
    {
        return health;
    }
    int getArmor()
    {
        return armor;
    }
    int getAttack1()
    {
        return attack1;
    }
    int getAttack2()
    {
        return attack2;
    }
    int getStrength()
    {
        return strengthMod;
    }
    int getSpeed()
    {
        return speedMod;
    }
    string getName()
    {
        return name;
    }
    void setHealth(int h)
    {
        health = h;
    }
    void printBasicStats()
    {
        cout << name << "'s current stats:" << endl;
        cout << "Health: " << health << endl;
        cout << "Armor: " << armor << endl;
        cout << "Base attack die: " << attack1 << " D" << attack2 << endl;
        cout << "Attack Modifier: " << strengthMod << endl;
        cout << "Speed Modifier: " << speedMod << endl;
    }
};
CommonStatistics::CommonStatistics(string n)
{
    name = n;
}

#endif