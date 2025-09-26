
#include <iostream>
using namespace std;
int main()
{
	const float PI = 3.14;
	short r;
	float area;
	cout << "Please enter a Number\n";
	cin >> r;
	
	area = PI * pow(r, 2);

	cout << "Area Circle :" << area;
}

