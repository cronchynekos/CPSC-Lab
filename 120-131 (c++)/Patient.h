//#pragma once
#ifndef PATIENT_H
#define PATIENT_H
//#include <iostream>
//#include <string>
#include "BloodData.h"

class Patient
{
private:
	int ID_number;
	int age;
	BloodData blood;

public:
	Patient();
	Patient(int a, int b, string c, char d);
	int getAge()
	{
		return age;
	}
	int getID()
	{
		return ID_number;
	}
	void displayBlood()
	{
		cout << blood.getBloodType() << blood.getRhFactor() << endl;
	}
};
Patient::Patient(int id, int a, char d, string c)
{
	age = a;
	ID_number = id;
	blood.setBloodType(string c);
	blood.setRhFactor(char d);
} 

Patient::Patient()
{
	ID_number = 0;
	age = 0;
}

#endif