
#include <iostream>
using namespace std;
struct sAddress
{
    string Email, Phone, Facebook;
};
enum Gendor{Male,Female};
enum status{Single,Married};
struct sMyCard
{
    string Name, Age,Country,City;
	int Month_salary,Year_salary;
    char Gender;
    bool isMarried;
    sAddress Address;
};
int main()
{
	sMyCard Card1;
	status Mystatus;
	Card1.Name = "Zinedine zidane";
	Card1.Age = "53 Years";
	Card1.City = "Marseille";
	Card1.Country = "France";
	Card1.Gender = 'M';
	Card1.isMarried = status::Married;
	Card1.Month_salary = 5000;
	Card1.Year_salary = Card1.Month_salary * 12;
	Card1.Address.Phone = "4598255";
	Card1.Address.Facebook = "Zinedine zidane";
	Card1.Address.Email = "Zinedinezidane@gmail.com";
	cout << "**************************************\n";
	cout << "Name             :" <<Card1.Name << endl;
	cout << "Age              :" <<Card1.Age << "\n";
	cout << "City             :" <<Card1.City << endl;
	cout << "Phone            :" << Card1.Address.Phone<<endl;
	cout << "Email            :" << Card1.Address.Email << endl;
	cout << "Facebook         :" << Card1.Address.Facebook << endl;
	cout << "Country          :" <<Card1.Country << "\n";
	cout << "Month Salary     :" <<Card1.Month_salary << "\n";
	cout << "Year Salary      :" <<Card1.Year_salary << "\n";
	cout << "Gender           :" <<Card1.Gender << endl;
	cout << "Maried           :" <<Card1.isMarried << endl;
	cout << "**************************************\n";
}

