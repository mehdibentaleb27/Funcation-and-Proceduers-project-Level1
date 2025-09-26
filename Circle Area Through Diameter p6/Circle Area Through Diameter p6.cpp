
#include <iostream>
using namespace std;
int ReadNumber(string Text)
{
    short Num;
    cout << Text << endl;
    cin >> Num;

    return Num;
}
float Area(short D, float PI)
{
    return   (PI * pow(D, 2)) / 4;

}
void PrintArea(short Num1, float Num2)
{
    cout << "Area   = " << Area(Num1, Num2);
}
int main()
{

    const float PI = 3.14;
    short D;
    D = ReadNumber("Please Enter a Number ");

    PrintArea(D, PI);

    return 0;
}

