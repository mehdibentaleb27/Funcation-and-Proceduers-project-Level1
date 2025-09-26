
#include <iostream>
using namespace std;
enum enScreenColor{Red=1,Blue=2,Green=3,Yellow=4};

short ReadNumber(string Text)
{
    int Num;
    cout << Text ;
    cin >> Num;
    return Num;
}
void ScreenBackground(short num)
{
    
    enScreenColor Color;
    Color = (enScreenColor) num;
    if (Color == enScreenColor::Red)
    {
        system("Color 4C");
    }
    else if (Color == enScreenColor::Blue)
    {
        system("Color 1F");
    }
    else if (Color == enScreenColor::Green)
    {
        system("Color 2A");
    }
    else if (Color == enScreenColor::Yellow)
    {
        system("Color 6E");
    }
    else
    {
        system("Color 4F");

    }
}
void Print()
{
    cout << "***********************\n";
    cout << "Please Chose the number of your color?\n";
    cout << "(1) Red \n";
    cout << "(2) Blue \n";
    cout << "(3) Green \n";
    cout << "(4) Yellow \n";
    cout << "(default) Otherwise Red\n";
    cout << "***********************\n";
  
}
int main()
{
    Print();
    int Choice = ReadNumber("Your Choice : ");
    ScreenBackground(Choice);
}

