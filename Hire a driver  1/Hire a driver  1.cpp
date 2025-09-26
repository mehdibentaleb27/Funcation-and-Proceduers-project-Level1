
#include <iostream>
#include <string>
using namespace std;
int ReadNumber()
{
	int Num =0;
	while (Num<=0)
	{
		cout << "Please Enter Number Age\n";
		cin >> Num;
	}
	return Num;
}
string ReadString(string Text)
{
	string S1;
	cout << Text << endl;
	cin >> S1;
	return S1;
}

bool checktheAge(short Num)
{
	return (Num >= 21 ? true : false);
}
bool checktheDriveLicense(string S1)
{
	return (S1 == "Yes"|| S1 == "yes" ? true: false);
}
bool checkRecommendation(string S1)
{
	return (S1 == "Yes" || S1 == "yes" ? true : false);
}
void Print(short Num,string S1,string S2)
{

	if (checktheDriveLicense(S1) && checktheAge(Num)||checkRecommendation(S2))
		cout << "Hired\n";
	else
		cout << "Rejected\n";
}
int main()
{
	short Age = ReadNumber();
	string DriveLicence = ReadString("Do you have a Drive License Yes/No ?");
	string Recommendation = ReadString("Do you have a Recommendation Yes/No ?");
	Print(Age, DriveLicence, Recommendation);

	return 0;
}

