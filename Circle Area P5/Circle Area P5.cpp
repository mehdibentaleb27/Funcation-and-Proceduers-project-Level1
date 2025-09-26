
#include <iostream>
using namespace std;
int ReadNumber(string Text)
{
    short Num;
    cout << Text << endl;
    cin >> Num;

    return Num;
}
float Area(short r, float PI)
{
    return   PI * pow(r, 2);

}
void PrintArea(short Num1, float Num2)
{
    cout << "Area Circle  = " << Area(Num1, Num2);
}
int main()
{
   
    const float PI = 3.14;
    short r;
    r = ReadNumber("Please Enter a Number ");

    PrintArea(r, PI);

    return 0;
}

