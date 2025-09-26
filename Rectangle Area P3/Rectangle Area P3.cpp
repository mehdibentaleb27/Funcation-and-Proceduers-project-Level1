
#include <iostream>
using namespace std;
int ReadNumber(string Text)
{
    short Num;
    cout << Text<<endl;
    cin >> Num;

    return Num;
}
short AreaRectangle(short Num1,short Num2)
{
    return Num1 * Num2;
}
void PrintArea(short Num1, short Num2)
{
    cout << "Area Rectongle = " << AreaRectangle(Num1,Num2);
}
int main()
{
    short width, length;

     width = ReadNumber("Please Enter a Number for the width");
     length = ReadNumber("Please Enter a Number for the length");

     PrintArea(width,length);

    return 0;
}

