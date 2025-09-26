
#include <iostream>
using namespace std;
int main()
{
	short A, B;
	cout << "Please Enter the first number A?\n";
	cin >> A;
	cout << "Please Enter the first number B?\n";
	cin >> B;

	cout << A<< "  = " << B << " is " << (A == B) << endl;
	cout << A<< " != " << B << " is " << (A != B) << endl;
	cout << A<< "  > " << B << " is " << (A > B) << endl;
	cout << A<< "  < " << B << " is " << (A < B) << endl;
	cout << A<< " >= " << B << " is " << (A <= B) << endl;
	cout << A<< " <= " << B << " is " << (A >= B) << endl;


}

