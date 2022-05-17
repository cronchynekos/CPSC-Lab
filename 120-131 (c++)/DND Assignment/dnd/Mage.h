#pragma once
#ifndef MAGE_H
#define MAGE_H
#include <string>
#include <iostream>
#include "CommonStatistics.h"
using namespace std;

class Mage : public CommonStatistics
{
private:
    //nothing special
public:
    Mage(string n) : CommonStatistics(n)
    {
        attack1 = 1;
        attack2 = 4;
        strengthMod = 7;
        armor = 2;
        health = 15;
        speedMod = 0;
    }
};

#endif