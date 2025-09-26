
#include <iostream>
using namespace std;
int main()
{
    short A = 10, B ;

    B = A++;//b will take the old value,then A will increase by 1
    cout << "B = " << B << endl;
    cout << "A = " << A << endl;

    B = ++A;//a will increase by 1,then b will take the new value
    cout << "B = " << B << endl;
    cout << "A = " << A << endl;

    return 0;
}

