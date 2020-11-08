// Write a C++  program to check whether an year is leap year or not.
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int year;
	cout<<"Enter an year: ";
	cin>>year;
	//condition to check an year is leap or not.
	if(year%4==0)
	{
		cout<<"The entered year is a leap year.";
	}
	else
	{
		cout<<"The entered year is not a leap year.";
	}
	return 0;
}
