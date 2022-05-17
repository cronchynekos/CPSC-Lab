//Nathanael Kim Assigment 2 4/5/2020 section 17
#include <iostream>
#include "ItemClass.h"

int main()
{
	cout << "Welcome to the inventory helper." << endl;
	cout << "Please update your inventory..." << endl;
	Item Inventory[4];

	for (int i = 0; i < 4; i++)//input the information of 4 items
	{
		cout << "Enter item " << i + 1 << " to add to inventory." << endl;
		Inventory[i].setName();
		Inventory[i].setId();
		Inventory[i].setValue();
		Inventory[i].setQuant();
	}

	for (int i = 0; i < 4; i++)//prints inventory
	{
		Inventory[i].displayItems();
	}
	cout << "Business hours are now open." << endl;

	char choice;
	int transCount = 0;

	cout << "Would you like to preform a transaction?(y/n)" << endl;

	cin >> choice;

	while (choice == 'y')//loops asking the user to purchase an item until they answer with 'n'
	{
		int itemNum;
		transCount += 1;//keeps count of transactions 
		cout << "Menu" << endl;
		for (int i = 0; i < 4; i++)
		{
			Inventory[i].displayItems();
		}
		cout << "Enter which item would you like to buy?" << endl;
		cin >> itemNum;
		Inventory[itemNum - 1].buyItem();
		cout << endl;
		cout << "Would you like to preform another transaction?(y/n)" << endl;
		cin >> choice;

		if (transCount == 2)//prompts discount when 2 items have been purchased
		{
			double discount;
			char choice2;
			cout << "2 items sold!" << endl;
			cout << "Sale starting soon!" << endl;
			cout << "Would you like to enter a discount %?(y/n)" << endl;
			cin >> choice2;

			if (choice2 == 'y')//asks the user if they would like to enter a discount
			{
				cout << "Enter the custom discount percentage." << endl;
				cin >> discount;

				while (discount > 1 || discount < 0)//only accepts discounts between 0 and 1
				{
					cout << "Invalid discount percentage. Please Enter Again." << endl;
					cin >> discount;
				}
				for (int i = 0; i < 4; i++)//adds discount to all items
				{
					Inventory[i].addDisc(discount);
				}
				for (int i = 0; i < 4; i++)//prints discounts of all items
				{
					Inventory[i].discDisplay();
				}
			}
		}
	}
	cout << "Closing Shop -- inventory left" << endl;
	for (int i = 0; i < 4; i++)
	{
		Inventory[i].displayItems();
	}
	return 0;//ends program
}