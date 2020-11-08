// Write a C++  program to check whether a number is divisible by 5 and 11 or not.
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int num;
	cout<<"Enter a number to check: ";
	cin>>num;
	//condition to check divisible or not.
	if(num % 5==0 && num % 11==0)
    {
        cout<<"Number is divisible by 5 and 11";
    }
    else
    {
        cout<<"Number is not divisible by 5 and 11";
    }
	return 0;
}
