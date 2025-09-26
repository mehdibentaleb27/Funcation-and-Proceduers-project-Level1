
#include <iostream>
using namespace std;
int ReadNumber(string Text)
{
    short Num;
    cout << Text << endl;
    cin >> Num;

    return Num;
}
float Area(float a,float b, float PI)
{
    return   ((PI * pow(b, 2)) / 4) * ((2 * a - b) / (2 * a + b));

}
void PrintArea(short Num1, float Num2,float PI)
{
    cout << "Area   = " << Area(Num1, Num2,PI);
}
int main()
{

    const float PI = 3.14;
    float a, b;
    a = ReadNumber("Please Enter a Number ");
    b = ReadNumber("Please Enter a Number ");

    PrintArea(a,b, PI);

    return 0;
}

