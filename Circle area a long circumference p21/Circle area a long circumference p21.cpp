// Circle Area Inscribed in a Square 20.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	short L;
	const float PI = 3.14;
	float area;
	cout << "Please Enter a Number\n";
	cin >> L;

	area = pow(L,2)/(PI*4);
	cout << "\nArea :" << area;

}

