

#include <iostream>
using namespace std;
void MysumProcedures()
{
    int Num1,Num2;
    cout << "Please Enter a Number1\n";
    cin >> Num1;
    cout << "Please Enter a Number2\n";
    cin >> Num2;

    cout << "*****************************\n";
    cout << Num1 + Num2;
}
int MysumFunction()
{
    int Num1, Num2;
    cout << "\n\nPlease Enter a Number1\n";
    cin >> Num1;
    cout << "Please Enter a Number2\n";
    cin >> Num2;

    cout << "*****************************\n";
    return Num1 + Num2;
}
int main()
{
    MysumProcedures();
    cout<<MysumFunction();
    return 0;
}

