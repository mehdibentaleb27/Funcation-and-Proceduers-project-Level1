

#include <iostream>
using namespace std;
int main()
{
	short Num, sum = 0;
	cout << "Please Enter Number :";
	cin >> Num;

	for (int i = 1; i <= Num; i++)
	{
		if (i % 2 == 0)
		{
			sum += i;
		}
	}
	cout << "\Sum Even Number : " << sum << endl;
	return 0;
}

