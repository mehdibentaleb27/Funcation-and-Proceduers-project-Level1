
#include <iostream>
#include<string>
using namespace std;

int main()
{
    string st1 = "43.22";
    double Num1 = stod(st1);
    float Num2 = stof(st1);
    int Num3 = stoi(st1);
    cout << "String to double \n";
    cout << Num1;
    cout << "\nString to float\n";
    cout << Num2;
    cout << "\nString to integer\n";
    cout << Num3;

    int N = 20;
    string Ns=to_string(N);
    cout << "\ninteger to String \n";
    cout << Ns;


}

