

#include <iostream>
using namespace std;
int main()
{
    short age;
    cout << "Please Enter Age \n";
    cin >> age;
    while (!(age >= 18 && age <= 45))
    {
        cout << "\nInValid Age\n";

        cout << "Please Enter Age \n";
        cin >> age;
    }
        cout << "\nValid Age\n";

    return 0;
}

