
#include <iostream>
using namespace std;
int main()
{
	const float PI = 3.14;
	short D;
	float area;
	cout << "Please enter a Number\n";
	cin >> D;

	area =(PI * pow(D, 2))/4;

	cout << "Area  :" << area;
}

