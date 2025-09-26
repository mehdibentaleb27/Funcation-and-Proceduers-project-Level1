
#include <iostream>
#include <string>
using namespace std;

struct sMyInfoCard
{
    string FirstName, LastName;
    short Age;
    string Phone;
};
short ReadNumberPersone()
{
    short Pr;
    cout << "How many Number of Person do you want ?\n";
    cin >> Pr;

    return Pr;

}
void ReadInfoCard(sMyInfoCard& MyInfoCard)
{
    cout << "Please Enter FirstName\n";
    cin >> MyInfoCard.FirstName;
    cout << "Please Enter LastName\n";
    cin.ignore(1, '\n');
    getline(cin, MyInfoCard.LastName);
    cout << "Please Enter Age\n";
    cin >> MyInfoCard.Age;
    cout << "Please Enter Your Phone\n";
    cin >> MyInfoCard.Phone;
}
void Print(sMyInfoCard MyInfoCard)
{
    cout << "\n*************************************\n";
    cout << "FirestName   :" << MyInfoCard.FirstName << endl;
    cout << "LastName     :" << MyInfoCard.LastName << endl;
    cout << "Age          :" << MyInfoCard.Age << endl;
    cout << "Phone        :" << MyInfoCard.Phone;
    cout << "\n*************************************\n";
}

void ReadPersone(sMyInfoCard Person[100],short Length)
{
   
    for (int i = 0; i <= Length-1; i++)
    {
        cout << "\nPlease Enter Info Person :" << i + 1<<endl;
        cout<<"***************************\n";
        ReadInfoCard(Person[i]);
    }

}
void PrintPerson(sMyInfoCard Person[100],short length)
{
    //cout << "\n***********************\n";
  
    for (int i = 0; i < length; i++)
    {
        cout << "\nPerson " << i + 1 << " Info:";
        Print(Person[i]);
    }

}
int main()
{
    sMyInfoCard Person[100];
    short Length = ReadNumberPersone();
    ReadPersone(Person,Length);
    PrintPerson(Person,Length);

    return 0;
}

