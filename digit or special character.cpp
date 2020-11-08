// Write a C++  program to input any character and check whether it is alphabet, digit or special character.
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	char ch;
    cout << "Enter any character: ";
    cin >> ch;
    // Alphabet checking condition
    if((ch >='a' && ch <='z') || (ch >='A' && ch <='Z'))
    {
        cout <<ch<< " is an Alphabet";
    }
    // Digit checking condition
    else if(ch >='0' && ch <='9')
    {
        cout <<ch<< " is a Digit";
    }
    // Special Character checking condition
    else
    {
        cout <<ch<< " is a Special Character";
    }
	return 0;
}
