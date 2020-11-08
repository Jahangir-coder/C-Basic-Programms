// Write a C++  program to input any alphabet and check whether it is vowel or consonant.
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	char ch;
	cout<<"Enter a character: ";
	cin>>ch;
	// to check lower case vowels
	if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
	{
		cout<<"The entered alphabet is a vowel.";
	}
	// to check upper case vowels
	else if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
	{
		cout<<"The entered alphabet is a vowel.";
	}
	// to check consonents.
	else
	{
		cout<<"The entered alphabet is a consonent.";
	}
	return 0;
}
