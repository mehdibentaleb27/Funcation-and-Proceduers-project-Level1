

#include <iostream>
using namespace std;
int main()
{
    short  Number1, Number2;
    cout << "Please Enter a Number1\n";
    cin >> Number1;
    cout << "Please Enter a Number2\n";
    cin >> Number2;

    if (Number1 > Number2)
        cout << "Max :" << Number1;
    else
        cout << "Max :" << Number2;
    return 0;
}

