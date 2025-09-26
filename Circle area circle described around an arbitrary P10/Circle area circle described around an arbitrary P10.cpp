
#include <iostream>
using namespace std;
int ReadNumber(string Text)
{
    short Num;
    cout << Text << endl;
    cin >> Num;

    return Num;
}
float Area(float a, float b,float c, float PI)
{
    float p,T;
    p = (a + b + c) / 2;
    T = (a * b * c) / (4 * sqrt(p * (p - a) * (p - b) * (p - c)));

    return   PI * T * T;

}
void PrintArea(short Num1, float Num2,float Num3, float PI)
{
    cout << "Area   = " << Area(Num1, Num2,Num3, PI);
}
int main()
{

    const float PI = 3.14;
    float a, b,c;
    a = ReadNumber("Please Enter a Number ");
    b = ReadNumber("Please Enter a Number ");
    c = ReadNumber("Please Enter a Number ");

    PrintArea(a, b,c, PI);

    return 0;
}

