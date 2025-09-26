

#include <iostream>
using namespace std;
int main()
{
	bool Resulet;
	Resulet = (5 > 6 && 7 == 7) || (1 || 0);
	cout << "(5 > 6 and 7 = 7) OR (1 Or 0)                       = " << Resulet<<endl;

	cout << "!(5 > 6 and 7 = 7) OR (1 Or 0)                      = " <<!Resulet << endl;
	
	Resulet= (5 > 6 && 7 == 7) || !(1 || 0);
	cout << "Not(5 > 6 and 7 = 7) OR NOT (1 Or 0)                = "<<!Resulet<<endl ;
	Resulet = (5 > 6 && 7 == 7) && !(1 || 0);
	cout << "Not(5 > 6 Or 7 = 7) AND NOT (1 Or 0)                = " << !Resulet<<endl;

	Resulet = ((5 > 6 && 7 <= 8) || (8 > 1 && 4 <= 3)) && true;

	cout << "((5 > 6 and 7 <= 8) || (8 > 1 and 4 <= 3)) and true = " << Resulet<<endl;
	
	Resulet = ((5 > 6 && !(7 <= 8)) && (8 > 1 || 4 <= 3)) || true;

	cout << "((5 > 6 and Not(7 <= 8)) and (8 > 1 OR 4 <= 3)) Or true = " << Resulet;

	return 0;
}

