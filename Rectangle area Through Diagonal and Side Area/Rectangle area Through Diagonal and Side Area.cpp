

#include <iostream>
using namespace std;
int main()
{
	int a, d;
	float area;
	cout << "Please Entre a Number a\n";
	cin >> a;
	cout << "Please Entre a Number d\n";
	cin >> d;
	area = a * sqrt(pow(d,2)-pow(a,2));
	cout << "\n Area :" << area;
}

