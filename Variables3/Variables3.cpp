

#include <iostream>
using namespace std;
int main()
{
	string Name = "Zinedine zidane",
	City = "Marseille", Country = "France";
	float Month_salary = 5000,Year_salary;
	short Age = 53;
	char Gender='M';
	bool isMaried=true;
	const short Month_inaYers =12;

	Year_salary = Month_salary * Month_inaYers;

	cout << "\nP1\n";
	cout << "**************************************\n";
	cout << "Name             :"<< Name<<endl;
	cout << "Age              :"<< Age << "\n";
	cout << "City             :"<< City << endl;
	cout << "Country          :"<< Country << "\n";
	cout << "Month Salary     :"<< Month_salary << "\n";
	cout << "Year Salary      :"<< Year_salary << "\n";
	cout << "Gender           :"<< Gender << endl;
	cout << "Maried           :"<< isMaried << endl;
	cout << "**************************************\n";
	
	cout << "\nP2\n\n";
	short Num1=20, Num2=30, Num3=10,Sum=Num1+Num2+Num3;

	cout << Num1 << "+\n";
	cout << Num2 << "+\n";
	cout << Num3 << "\n";
	cout << "-----------------\n";
	cout << "Total = " << Sum;
	
	cout << "\n\nP3\n";
	int age = 25;
	int YourAgeAfter5years = age+5;
	cout << "After 5 years you will be " <<YourAgeAfter5years <<" yeras old\n ";
}

