// Weeks and Days.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{

    float hour ,Days,Weeks;

    cout << "Read a Number of Houres\n";
    cin >> hour;
    Days = hour /24 ;
    Weeks = Days / 7;
    cout << "Days :" << Days<<endl;
    cout << "Weeks : " << Weeks;


}

