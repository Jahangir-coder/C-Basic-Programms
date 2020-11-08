// Write a C++  program to check whether a number is even or odd.
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int num;
	cout<<"Enter a number to check: ";
	cin>>num;
	//condition to check number is even.
	if(num%2==0)
	{
		cout<<"Entered number is even.";
	}
	//condition to check number is odd.
	else
	{
		cout<<"Entered number is odd.";
	}
	return 0;
}
