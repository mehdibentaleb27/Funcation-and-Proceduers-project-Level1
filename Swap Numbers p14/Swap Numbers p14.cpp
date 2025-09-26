

#include <iostream>
using namespace std;
int main()
{
	short Number1, Number2, Temp;

	cout << "Please Enter a Number1\n";
	cin >> Number1;

	cout << "Please Enter a Number2\n";
	cin >> Number2;

	cout << "Number1 : " << Number1 << endl;
	cout << "Number2 : " << Number2 << endl;

	Temp = Number1;
	 Number1=Number2;
	 Number2 = Temp;
	 cout << "\n Sawp\n";
	 cout << "Number1 : " << Number1 << endl;
	 cout << "Number2 : " << Number2 << endl;


}

