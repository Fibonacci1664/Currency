/*
A simple currency program..

© D. Green 2019
*/

#include"D:\Visual_Studio_Projects_Cpp_book\std_lib_facilities.h"
#include<iostream>

using namespace std;

int main()
{
	int onePence = 0;
	int twoPence = 0;
	int fivePence = 0;
	int tenPence = 0;
	int twentyPence = 0;
	int fiftyPence = 0;
	int pounds = 0;

	cout << "Please enter how many 1p pieces you have:> \n";

	cin >> onePence;

	cout << "Please enter how many 2p pieces you have:> \n";

	cin >> twoPence;

	cout << "Please enter how many 5p pieces you have:> \n";

	cin >> fivePence;

	cout << "Please enter how many 10p pieces you have:> \n";

	cin >> tenPence;

	cout << "Please enter how many 20p pieces you have:> \n";

	cin >> twentyPence;

	cout << "Please enter how many 50p pieces you have:> \n";

	cin >> fiftyPence;

	// char(156) is ASCII for the pound symbol £.
	cout << "Please enter how many " << char(156) << "1 coins you have:> \n";

	cin >> pounds;
	
	int totalPence = onePence + (twoPence * 2) + (fivePence * 5) + (tenPence * 10) + (twentyPence * 20) + (fiftyPence * 50) + (pounds * 100);

	if (onePence == 1)
	{
		cout << "You have 1 1p piece.\n";
	}
	else
	{
		cout << "You have " << onePence << " 1p pieces.\n";
	}

	if (twoPence == 1)
	{
		cout << "You have 1 2p piece.\n";
	}
	else
	{
		cout << "You have " << twoPence << " 2p pieces.\n";
	}

	if (fivePence == 1)
	{
		cout << "You have 1 5p piece.\n";
	}
	else
	{
		cout << "You have " << fivePence << " 5p pieces.\n";
	}

	if (tenPence == 1)
	{
		cout << "You have 1 10p piece.\n";
	}
	else
	{
		cout << "You have " << tenPence << " 5p pieces.\n";
	}

	if (twentyPence == 1)
	{
		cout << "You have 1 20p piece.\n";
	}
	else
	{
		cout << "You have " << twentyPence << " 20p pieces.\n";
	}

	if (fiftyPence == 1)
	{
		cout << "You have 1 50p piece.\n";
	}
	else
	{
		cout << "You have " << fiftyPence << " 50p pieces.\n";
	}

	cout << "Your total pence = " << totalPence << "p.\n";

	int totalPounds = totalPence / 100;
	int remPence = totalPence % 100;

	cout << "Your amount in pounds and pence = " << char(156) << totalPounds << "." << remPence << '\n';

	return 0;
}