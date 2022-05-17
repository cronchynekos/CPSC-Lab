//Nathanael Kim week 12 lab 10
//
#include <time.h>
#include <iostream>

using namespace std;

class Dice
{
private:
    int value1;
    int value2;
    int value3;
    int count;
public:
    void displayValue();
    void giveValue();
    void changeValue1(int input);
    void changeValue2(int input);
    void changeValue3(int input);
};
void Dice::giveValue()
{
    value1 = rand() % 6 + 1;
    value2 = rand() % 6 + 1;
    value3 = rand() % 6 + 1;
}
void Dice::displayValue()
{
    cout << value1 << endl;
    cout << value2 << endl;
    cout << value3 << endl;
    count = 0;
    if (value1 == value2) 
    {
        count++;
    }
    else if (value1 == value3)
    {
        count++;
    }
    else if (value2 == value3)
    {
        count++;
    }
    if (count == 0)
    {
        cout << "No dice are equal" << endl;
    }else if (count == 1)
    {
        cout << "One dice is equal" << endl;
    }
    else if (count == 2)
    {
        cout << "Two dice are equal" << endl;
    }
    else if (count == 3)
    {
        cout << "All dice are equal" << endl;
    }
}
void Dice::changeValue1(int input)
{
    value1 = input;
}
void Dice::changeValue2(int input)
{
    value2 = input;
}
void Dice::changeValue3(int input)
{
    value3 = input;
}



int main()
{
    srand(time(0));
    Dice d1;
    //shared_ptr<Dice> dptr(new Dice());
 

    cout << "Created Shared Pointer #1 to manage the object" << endl;
    //dptr.giveValue();
    d1.displayValue();


    return 0;
}
