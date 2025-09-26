
#include <iostream>
using namespace std;
int main()
{
	int Number,sum=0;

	while (true)
	{
		cout << "Please Enter Number\n";
		cin >> Number;
		
		if (Number != -20)
		{
			sum += Number;
		}
		else
			break;
			
	}
	cout << "Sum : " << sum;
}

