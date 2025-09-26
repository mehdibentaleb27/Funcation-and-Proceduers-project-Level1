

#include <iostream>
using namespace std;
int main()
{
	short Mark1, Mark2, Mark3, Avrage;

	cout << "Please enter a Mark1\n";
	cin >> Mark1;
	cout << "Please enter a Mark2\n";
	cin >> Mark2;
	cout << "Please enter a Mark3\n";
	cin >> Mark3;

	Avrage = (Mark1 + Mark2 + Mark3) / 3;

	cout << "Avrage :" << Avrage;

	if (Avrage >= 50)
		cout << "\nPass";
	else
		cout << "\nFail";
}

