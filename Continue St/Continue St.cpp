

#include <iostream>
using namespace std;
int main()
{
	int num, sum=0;
	for (int i = 1; i <=5; i++)
	{
		cout << "Please Enter Number :" << i << endl;
		cin >> num;
		if (num > 50)
		{
			cout << "The number is greater than 50 and won't be calucated.\n";
			continue;
		}
		sum += num;
	}
	cout << "Sum : " << sum;
	return 0;
}

