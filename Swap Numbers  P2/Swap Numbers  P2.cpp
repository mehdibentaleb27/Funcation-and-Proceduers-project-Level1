
#include <iostream>
using namespace std;
int ReadNumber()
{
    short Num;

        cout << "Please Enter a Number\n";
        cin >> Num;
    
    return Num;
}
void Sawp(int &Num1, int&Num2)
{
    int Temp;
    Temp = Num1;
    Num1 = Num2;
    Num2=Temp;
}
void PrintNumber(int Num1, int Num2)
{
    cout << Num1 << endl;
    cout << Num2<<endl;
}
int main()
{
    int Num1 = ReadNumber();
    int Num2 = ReadNumber();
    cout << "Before Sawp \n";
    PrintNumber(Num1,Num2);
    Sawp(Num1, Num2);
    cout << "After Sawp \n";
    PrintNumber(Num1, Num2);

}

