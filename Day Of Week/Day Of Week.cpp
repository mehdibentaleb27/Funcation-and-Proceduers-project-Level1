

#include <iostream>
using namespace std;
int main()
{
	short Days;
	cout << "Please Enter a Number of day  1,7\n";
	cin >> Days;
	if (Days > 7||Days<=0)
	{
		cout << "Wrong Day";
		return 0;
	}

		else if (Days == 1)
			cout << "Its Sunday";
		else if(Days==2)
			cout << "Its Monday";
	   else if (Days == 3)
		    cout << "Its Tuesday";
	   else if (Days == 4)
		   cout << "Its Wednesday";
	   else if (Days == 5)
		cout << "Its Thyrsday";
	   else if (Days == 6)
		cout << "Its Firday";
	   else if (Days == 7)
		cout << "Its Sunday";
}

