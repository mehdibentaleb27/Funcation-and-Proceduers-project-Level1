

#include <iostream>
using namespace std;
int main()
{
    short  Number1, Number2,Number3;
    cout << "Please Enter a Number1\n";
    cin >> Number1;
    cout << "Please Enter a Number2\n";
    cin >> Number2;
    cout << "Please Enter a Number3\n";
    cin >> Number3;
    if (Number1 > Number2&&Number1>Number3)
        cout << "Max :" << Number1;
    else if(Number2>Number3)
        cout << "Max :" << Number2;

    else
        cout << "Max :" << Number3;
    return 0;
}

