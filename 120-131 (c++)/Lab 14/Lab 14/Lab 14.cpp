//Nathanael Kim
#include <iostream> 
#include <string>
using namespace std;

int gcd(int a, int b)//function finds the GCD of two numbers
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

void reverse(string input)//recursion function that reverses a string
{
    if (input.length() == 0)
    {
        return;
    }
    reverse(input.substr(1));
    cout << input[0];
}

bool isPalindromeRec(string str_1, int f, int l)//function checks if a string is a palindrome
{
    if (str_1.length() == 1)
    {
        return true;
    }

    if (f >= 1)
    {
        return true;
    }

    if (str_1[f] != str_1[l])
    {
        return false;
    }
    return isPalindromeRec(str_1, f + 1, l - 1);
}

bool isPalindrome(string str_1)//called in main. this function calls the isPalindromeRec function
{
    return isPalindromeRec(str_1, 0, str_1.length() - 1);
}


int main()
{
    cout << "Enter 2 numbers: " << endl;//first recursion function
    int inputa;
    int inputb;
    cin >> inputa;
    cin >> inputb;
    cout << "GCD of " << inputa << " and " << inputb << " is " << gcd(inputa, inputb);


    cout << "The unaltered string is:" << endl;//second recursion function
    cout << "stressed" << endl;
    cout << "The string backwards is:" << endl;
    string input = "stressed";
    reverse(input);


    if (isPalindrome("yeey") == false)//third recursion function
    {
        cout << endl << "not a palindrome" << endl;
    }
    else
    {
        cout << endl << "is a palindrome" << endl;
    }

    return 0;
}