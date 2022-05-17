#pragma once
#ifndef WARRIOR_H
#define WARRIOR_H
#include <string>
#include <iostream>
#include "CommonStatistics.h"
using namespace std;

class Warrior : public CommonStatistics
{
private:
    int healing1;
    int healing2;
public:
    Warrior(string n) : CommonStatistics(n)
    {
        healing1 = 2;
        healing2 = 5;
        attack1 = 1;
        attack2 = 6;
        strengthMod = 3;
        speedMod = 4;
        health = 20;
        armor = 5;
    }
    int getHealing1()
    {
        return healing1;
    }
    int getHealing2()
    {
        return healing2;
    }
    void printHealing()
    {
        cout << "Healing die: " << healing1 << " D" << healing2 << endl;
    }
};

#endif