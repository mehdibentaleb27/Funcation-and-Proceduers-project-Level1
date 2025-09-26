// Nested For Loops P1 Multiplication  From 1 to 10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	for (int i = 1; i <=10; i++)
	{
		cout << "\t" << i<< endl;
		cout << "---------------------\n";
		for (int j = 1; j <=10; j++)
		{
			cout << i << "*" << j << " = " << i * j<<"\n";
		}
		cout << "---------------------\n";
	}
}

