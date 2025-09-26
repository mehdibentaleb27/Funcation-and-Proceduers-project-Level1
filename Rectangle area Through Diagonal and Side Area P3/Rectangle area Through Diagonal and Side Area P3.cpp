
#include <iostream>
using namespace std;
int ReadNumber(string Text)
{
    short Num;
    cout << Text << endl;
    cin >> Num;

    return Num;
}
float Area(short a, short d)
{
    return  a * sqrt(pow(d, 2) - pow(a, 2));
    
}
void PrintArea(short Num1, short Num2)
{
    cout << "Area  = " << Area(Num1, Num2);
}
int main()
{
    short a, d;

    a = ReadNumber("Please Enter a Number a");
    d = ReadNumber("Please Enter a Number d");

    PrintArea(a, d);

    return 0;
}

