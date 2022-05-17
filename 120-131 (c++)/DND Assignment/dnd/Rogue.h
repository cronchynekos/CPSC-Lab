#pragma once
#ifndef ROGUE_H
#define ROGUE_H
#include <string>
#include <iostream>
#include "CommonStatistics.h"
using namespace std;

class Rogue : public CommonStatistics
{
private:
    int dodge;
public:
    Rogue(string n) : CommonStatistics(n)
    {
        attack1 = 2;
        attack2 = 4;
        strengthMod = 7;
        armor = 3;
        speedMod = 5;
        dodge = 50;
        health = 10;
    }
    int getDodge()
    {
        return dodge;
    }
    void printDodge()
    {
        cout << "Dodge chance: " << dodge << "%" << endl;
    }
};

#endif