// Circle Area Inscribed in a Square 20.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	float a,b;
	const float PI = 3.14;
	float area;

	cout << "Please Enter a Number\n";
	cin >> a;
	cout << "Please Enter a Number\n";
	cin >> b;
	area =  ((PI*pow(b,2))/4) * ((2*a-b)/(2*a+b)) ;
	cout << "\nArea :" << area;

}

