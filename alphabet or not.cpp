// Write a C++  program to check whether a character is alphabet or not.
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	char ch;
	cout<<"Enter a character: ";
	cin>>ch;
	//contion to check an alphabet.
	if((ch>='A'&&ch<='Z')||(ch>='a'&&ch<='z'))
	{
		cout<<"The entered character is an alphabet.";
	}
	else
	{
		cout<<"The entered character is not an alphabet.";
	}
	return 0;
}
