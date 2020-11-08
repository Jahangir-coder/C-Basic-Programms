// Write a C++  program to check whether a number is negative, positive or zero.
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int num;
	cout<<"Enter a number: ";
	cin>>num;
	//condition to check number is positive or not.
	if(num>0)
	{
		cout<<"Entered number is Positive."<<endl;
	}
	//condition to check number is negative or not.
	else if(num<0)
	{
		cout<<"Entered number is Negative."<<endl;
	}
	//condition to check number is equal to zero or not.
	else if(num==0)
	{
		cout<<"Entered number is Zero."<<endl;
	}
	return 0;
}
