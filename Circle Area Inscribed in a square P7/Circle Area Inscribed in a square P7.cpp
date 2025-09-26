
#include <iostream>
using namespace std;
int ReadNumber(string Text)
{
    short Num;
    cout << Text << endl;
    cin >> Num;

    return Num;
}
float Area(short A, float PI)
{
    return   (PI * pow(A, 2)) / 4;

}
void PrintArea(short Num1, float Num2)
{
    cout << "Area   = " << Area(Num1, Num2);
}
int main()
{

    const float PI = 3.14;
    short A;
    A = ReadNumber("Please Enter a Number ");

    PrintArea(A, PI);

    return 0;
}

