
#include <iostream>
using namespace std;
int main()
{
	const float Fee = 1.10,Tax=1.16;

	float TotalBill, BillValue;
	cout << "Fee:10% and Tax:16%\n";
	cout << "Read a Billvalue \n";
	cin >> BillValue;

	TotalBill = BillValue * Fee * Tax;

	cout << "TotalBill : " << TotalBill;

}

