

#include <iostream>
using namespace std;
int main()
{
	float Number1,Number2,sum;
	char Opration;
	cout << "Please Enter a Number1 \n";
	cin >> Number1;
	cout << "Please Enter a Number2 \n";
	cin >> Number2;
	cout << "Please Enter  Operation Type  +,-,*,/\n";
	cin >> Opration;

	if (Opration == '+')
		sum =Number1 + Number2;

	else if(Opration=='-')
		sum = Number1 - Number2;

	else if (Opration == '*')
		sum = Number1 * Number2;
	else if (Opration == '/')
		sum = Number1 / Number2;
	else
	{
		cout << "Wrong Opration";
		return 0;
	}
	cout << Number1 <<" "<< Opration <<" " << Number2 << " = " << sum;
	return 0;
}

