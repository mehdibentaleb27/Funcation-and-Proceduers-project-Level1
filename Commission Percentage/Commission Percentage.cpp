

#include <iostream>
using namespace std;
int main()
{
	int TotaleSales,Number;
	cout << "Please Enter Number\n";
	cin >> Number;

	if (Number >= 500000)
		TotaleSales = Number * 0.02;

	if (Number >= 100000)
		TotaleSales = Number *0.03;
	if (Number >= 50000)
		TotaleSales = Number * 0.05;
	else
		TotaleSales = 0;
	cout <<endl<< TotaleSales;
}

