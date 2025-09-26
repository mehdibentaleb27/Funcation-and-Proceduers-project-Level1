

#include <iostream>
using namespace std;
int main()
{
	float TotalBil, CashPaid, Remainder;
	cout << "Read a TotalBill\n";
	cin >> TotalBil;
	cout << "Read a CashPaid\n";
	cin >> CashPaid;
	Remainder = CashPaid - TotalBil;

	cout << "Remainder : " << Remainder;
	return 0;


}

