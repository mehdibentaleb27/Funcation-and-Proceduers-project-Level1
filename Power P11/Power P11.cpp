
#include <iostream>
using namespace std;
short ReadNumber(string Text)
{
    short num;
    cout << Text << endl;
    cin >> num;
    return num;
}

int Power(int Num,short P)
{
    return pow(Num, P);
}
int main()
{
    int Number = ReadNumber("Please Enter a Number");
    cout << Power(Number, 2)<<endl;
    cout << Power(Number, 3) << endl;
    cout << Power(Number, 4) << endl;
}

