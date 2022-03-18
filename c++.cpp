//============================================================================
// Name        : c++.cpp
// Author      : 
// Version     :
// Copyright   : I don't have a copyright notice unfortunately
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	string task1 = "nul";
	int num1;
	int num2;
	int input;

	cout << "Welcome to the Console Calculator! (Enter something) ";
	cin >> task1;

	cout << "First enter your 1st digit ";
	cin >> num1;

	cout << "Second enter your 2nd digit ";
	cin >> num2;

	cout << "Finally, enter your operation, for + press 1, for - press 2, for * press 3, and for / press 4 ";
	cin >> input;


	if(input==1)
	{
		cout << "Selected Operation: + ,";
		cout << "Your answer is " << num1 + num2;
	}
	if(input==2)
	{
		cout << "Selected Operation: - ,";
		cout << "Your answer is " << num1 - num2;
	}
	if(input==3)
	{
		cout << "Selected Operation: * ,";
		cout << "Your answer is " << num1 * num2;

	}
	if(input==4)
	{
		cout << "Selected Operation / ,";
		cout << "Your answer is " << num1 / num2;
		cout << "                              Enter Something to continue";
	}

	cin >> task1;

	return 0;
}
