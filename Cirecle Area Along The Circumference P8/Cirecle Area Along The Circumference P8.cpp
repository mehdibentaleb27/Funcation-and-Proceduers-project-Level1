
#include <iostream>
using namespace std;
int ReadNumber(string Text)
{
    short Num;
    cout << Text << endl;
    cin >> Num;

    return Num;
}
float Area(short L, float PI)
{
    return   pow(L, 2) / (PI * 4);

}
void PrintArea(short Num1, float Num2)
{
    cout << "Area   = " << Area(Num1, Num2);
}
int main()
{

    const float PI = 3.14;
    short L;
    L = ReadNumber("Please Enter a Number ");

    PrintArea(L, PI);

    return 0;
}

