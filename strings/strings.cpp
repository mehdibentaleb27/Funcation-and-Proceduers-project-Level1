

#include <iostream>
#include<string>
using namespace std;
int main()
{
    string S1, S2, S3;
    int sum;
    cout << "Please enter String1 (Full Name) \n";
    getline(cin , S1);
    cout << "Please enter String2 (Number) \n";
    cin >> S2;
    cout << "Please enter String3 (Number) \n";
    cin >> S3;
    sum = stoi(S2) * stoi(S3);

    cout << "\n***********************************************\n";
    cout <<"The Length of string is :"<< S1.length();
    cout << "\nCharacter of 0,2,4,7 are :"<<S1[0]<<" " << S1[2]<<" " << S1[4]<<" " << S1[7];
    cout << "\nConcatenating string2 and string3 ="<<S2+S3<<endl;
    cout << S2 << " * " << S3 << " = " << sum;
}

