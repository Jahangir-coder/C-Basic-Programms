// Write a C++  program to find maximum between three numbers.
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int num1,num2,num3;
	cout<<"Enter three numbers: ";
	cin>>num1>>num2>>num3;
	// condition to check maximum number between three numbers.
	if(num1>num2 && num1>num3)
	{
		cout<<"The maximum number from the given numbers is: "<<num1<<endl;
	}
	else if(num2>num1 && num2>num3)
	{
		cout<<"The maximum number from the given numbers is: "<<num2<<endl;
	}
	else if(num3>num1 && num3>num2)
	{
		cout<<"The maximum number from the given numbers is: "<<num3<<endl;
	}
	return 0;
}
