//Nathan Kim Lab 13

#include <iostream>
#include <string>
using namespace std;
#include <memory>
#include "Athlete.h"//all the header files
#include "MLB.h"
#include "Nba.h"
#include "NHL.h"

using namespace std;
int main()
{
    shared_ptr<Athlete> unknown = nullptr;//creates shared ptr
    cout << "Which Sport does the athlete play?" << endl;
    cout << "(1-3)" << endl;
    cout << "1: NBA" << endl;
    cout << "2: MLB" << endl;
    cout << "3: NHL" << endl;
    int choice;
    double salary;
    try//exception for the input
    {
        cin >> choice;
        if (choice < 1 || choice > 3)
        {
            throw string("error");
        }
    }
    catch (string exceptionString)
    {
        cout << exceptionString << endl;
        cout << "Invalid input, set sport to NBA" << endl;
        choice = 1;
    }

    cout << "What is the Athlete's Salary" << endl;

    try//exception for the input
    {
        cin >> salary;
        if (cin.fail())
        {
            throw string("error");
        }
    }
    catch (string exceptionString)
    {
        cout << exceptionString << endl;
        cout << "Invalid input, set salary to $1" << endl;
        salary = 1;
    }

    if (choice == 1)
    {
        unknown = make_shared<NBA>("NBA", salary);
    }
    else if (choice == 2)
    {
        unknown = make_shared<NBA>("MLB", salary);
    }
    else if (choice == 3)
    {
        unknown = make_shared<NBA>("NHL", salary);
    }

    unknown->pickLeaguePosition();
    unknown->displayLeagueSalaryData();

    exit(0);
}

