
#include <iostream>
using namespace std;
int ReadNumber(string Text)
{
    short Num;
    cout << Text << endl;
    cin >> Num;

    return Num;
}
float Area(short Base, short height)
{
    return   Base / 2 * height;

}
void PrintArea(short Num1, short Num2)
{
    cout << "Area Triangle  = " << Area(Num1, Num2);
}
int main()
{
    short Base, height;

    Base = ReadNumber("Please Enter a Number for the Base");
    height = ReadNumber("Please Enter a Number for the Height");

    PrintArea(Base, height);

    return 0;
}

