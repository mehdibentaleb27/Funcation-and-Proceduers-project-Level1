
#include <iostream>
using namespace std;
int main()
{
    short loan_amount,Month_Instalment,Month;
    cout << "Enter Loan Amounnt\n";
     cin >> loan_amount;
     cout << "Enter Month Payment\n";
     cin >> Month_Instalment;
     Month= loan_amount / Month_Instalment;

     cout << Month<< " Months";
}

