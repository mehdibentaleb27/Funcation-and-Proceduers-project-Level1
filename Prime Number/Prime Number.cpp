

#include <iostream>
using namespace std;
int main()
{
    int Num;
    cout << "Please Enter a Number\n";
    cin >> Num;

    int M = round(Num / 2);

    for (int i = 2; i <=9; i++)
    {
        if (Num <= i)
        {
            cout << "\nPrime Number\n";
            break;
        }
        else if (Num % i == 0)
        {
            cout << "Not Prime Number";
            break;
        }
        else if(M==i)
        {
            cout << "\nPrime Number\n";
            break;
        }
    }
    return 0;

}

