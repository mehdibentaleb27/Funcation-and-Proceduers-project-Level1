
#include <iostream>
#include <string>
using namespace std;

struct sMyInfoCard
{
    string FirstName, LastName;
    short Age;
    string Phone;
};
void ReadInfoCard(sMyInfoCard &MyInfoCard)
{
    cout << "Please Enter FirstName\n";
    cin >> MyInfoCard.FirstName;
    cout << "Please Enter LastName\n";
    cin.ignore(1, '\n');
    getline(cin, MyInfoCard.LastName);
    cout << "Please Enter Age\n";
    cin >> MyInfoCard.Age;
    cout<<"Please Enter Your Phone\n";
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

void ReadPersone(sMyInfoCard Person[2])
{
    ReadInfoCard(Person[0]);
    ReadInfoCard(Person[1]);

}
void PrintPerson(sMyInfoCard Person[2])
{
    cout << "\n***********************\n";
    Print(Person[0]);
    Print(Person[1]);

}
int main()
{
    sMyInfoCard Person[2];
   
    ReadPersone(Person);
    PrintPerson(Person);

    return 0;
}

