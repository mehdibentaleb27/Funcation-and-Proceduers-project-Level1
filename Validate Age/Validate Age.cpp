

#include <iostream>
using namespace std;
int main()
{
    short age;
    cout << "Please Enter Age \n";
    cin >> age;
    if (age >= 18 && age <= 45)
        cout << "\nValid Age\n";
    else
        cout << "Invalid Age";
    return 0;
}

