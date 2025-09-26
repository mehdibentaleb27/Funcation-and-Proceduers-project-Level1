
#include <iostream>
#include<string>
using namespace std;
struct sAddress
{
    string Email, Phone, ZipCode;
};

struct sMyCard
{
    string Name, Age, Country, City;
    int Month_salary, Year_salary;
    char Gender;
    bool isMarried;
    sAddress Address;
};
void ReadInfo(sMyCard &Card)
{
	
	cout << "Please Enter FullName\n";
	getline(cin>>ws,  Card.Name);
	cout << "Please Enter your Age\n";
	getline(cin >> ws, Card.Age);
	cout << "Please Enter your City\n";
	getline(cin >> ws, Card.City);
	cout << "Please Enter your Phone\n";
	getline(cin >> ws, Card.Address.Phone);
	cout << "Please Enter your Email\n";
	getline(cin >> ws, Card.Address.Email);
	cout << "Please Enter your ZipCode\n";
	getline(cin >> ws, Card.Address.ZipCode);
	cout << "Please Enter your Country\n";
	getline(cin >> ws, Card.Country);
	cout << "Please Enter your Month Salary\n";
	cin >> Card.Month_salary;
	cout << "Please Enter your Gender\n";
	cin >>  Card.Gender;
	
	cout << "Please Enter your Maried\n";
	cin >> Card.isMarried;
}
int YearSalary(sMyCard& Card)
{
	return  Card.Year_salary = Card.Month_salary * 12;
}
string Gendor(char Gender)
{
	
	return (toupper(Gender) == 'M'? "Male": "Female");
}
string status(sMyCard  Card)
{
	if (Card.isMarried==1)
	{
		return "Married";
	}
	return   "Single";
}

void PrintInfo(sMyCard Card1)
{
	YearSalary(Card1);
	cout << "**************************************\n";
	cout << "Name             :" << Card1.Name << endl;
	cout << "Age              :" << Card1.Age << "\n";
	cout << "City             :" << Card1.City << endl;
	cout << "Phone            :" << Card1.Address.Phone << endl;
	cout << "Email            :" << Card1.Address.Email << endl;
	cout << "ZipCode          :" << Card1.Address.ZipCode << endl;
	cout << "Country          :" << Card1.Country << "\n";
	cout << "Month Salary     :" << Card1.Month_salary << "\n";
	cout << "Year Salary      :" << Card1.Year_salary << "\n";
	cout << "Gender           :" << Gendor(Card1.Gender) << endl;
	cout << "Maried           :" <<status(Card1) << endl;
	cout << "**************************************\n";

}
int main()
{
	sMyCard MyCard1;
	ReadInfo(MyCard1);
	PrintInfo(MyCard1);
}
