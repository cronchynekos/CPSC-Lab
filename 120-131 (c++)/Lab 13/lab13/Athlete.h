#pragma once//default base class
#ifndef ATHLETE_H
#define ATHLETE_H
#include <string>
#include <iostream>
#include "Athlete.h"
#include <iomanip>
using namespace std;
class Athlete
{
protected:
    double salary;
    string position;
    string league;
public:
    Athlete(string sport, double sal)
    {
        league = sport;
        salary = sal;
    }
    virtual void pickLeaguePosition() = 0;//virtual functions
    virtual void displayLeagueSalaryData() = 0;
    string getAthletePosition() { return position; }
    string getAthleteSport() { return league; }
};
#endif