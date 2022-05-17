#ifndef ITEMCLASS_H
#define ITEMCLASS_H

#include <string>
#include <iomanip>
#include <iostream>
using namespace std;

class Item//item class
{
private:
	string name;
	int id;
	double value;
	int quantity;

public:
	void setName();//sets the name
	void setId();//sets the id
	void setValue();//sets the value
	void setQuant();//sets the quantity
	void displayItems();//displays the item
	void buyItem();//allows the purchase of the item
	void addDisc(double disc);//adds a discount to the item
	void discDisplay();	//displays the discounted item price
};

void Item::setName()//asks the user for the name
{
	cout << "Please enter product name." << endl;
	cin >> name;
}
void Item::setId()//asks the user for the id
{
	cout << "Enter product id." << endl;
	cin >> id;
}
void Item::setValue()//asks the user for the value
{
	cout << "Enter retail value." << endl;
	cin >> value;
}
void Item::setQuant()//asks the user for the quantity
{
	cout << "Enter quantity avaliable." << endl;
	cin >> quantity;
}
void Item::displayItems()//displays the item with all its values
{
	cout << quantity << " " << name << " left in stock at $" << value << " item id " << id << endl;
}
void Item::buyItem()//asks the user how many he would like to buy then subtracts that from  quantity
{
	int numOfItem;
	cout << "How many would you like to buy?" << endl;
	cin >> numOfItem;
	while (numOfItem > quantity)
	{
		cout << "Not enough " << name << " in stock." << endl;
		cout << "Enter new amount." << endl;
		cin >> numOfItem;
	}
	cout << "SOLD " << numOfItem << " " << name << " for  $" << fixed << setprecision(2) << value * numOfItem;
	quantity -= numOfItem;
}
void Item::addDisc(double disc)//adds a discount to the price that the user inputs
{
	value = value * (1 - disc);
}
void Item::discDisplay()//displays item with discounted price with different appearance
{
	cout << "Price for " << name << " on sale for $" << fixed << setprecision(2) << value << endl;
}
#endif#pragma once
