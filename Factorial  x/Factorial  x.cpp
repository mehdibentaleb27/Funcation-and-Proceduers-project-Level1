

#include <iostream>
using namespace std;
int main()
{
	short Num, sum = 1;
	cout << "Please Enter Number :";
	cin >> Num;
	while (Num<=0)
	{
		cout << "Please Enter a Postive Number :";
		cin >> Num;
	}
	for (int i = Num; i >= 1; i--)
	{
		sum *= i;
	}
	cout << "\Sum Factorial  Number : " << sum << endl;
	return 0;
}

