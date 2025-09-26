
#include <iostream>
using namespace std;
enum enWeekDay{Sun=1,Mon=2,Tue=3,Wed=4,Thu=5,Fri=6,Sat=7};
enWeekDay ReadWeekDay()
{
    enWeekDay weekDay;
    short Wd=0;
    cout << "Please Enter the Number of day ?\n";
    cin >> Wd;

    return  (enWeekDay)Wd;
}
string GetaWeekDay(enWeekDay WeekDay)
{
    switch (WeekDay)
    {
    case Sun:
        return "Sunday";
        break;
    case Mon:
        return "Monday";
        break;
    case Tue:
        return "Tuesday";
        break;
    case Wed:
        return "Wednesday";
        break;
    case Thu:
        return "Thuesday";
        break;
    case Fri:
        return "Firady";
        break;
    case Sat:
        return "Sturday";
        break;
    default:
        return "Not a week Today !";
        break;
    }
}
void ShowWeekDayMenu()
{
    cout << "*************************************\n";
    cout << "\t   Week Days\n";
    cout << "*************************************\n";
    cout << " 1 : Sunday \n";
    cout << " 2 : Monday \n";
    cout << " 3 : Tuesday \n";
    cout << " 4 : Wednesday\n";
    cout << " 5 : Thursday \n";
    cout << " 6 : Firady \n";
    cout << " 7 : Saturday\n";
    cout << "*************************************\n";

}
int main()
{
    ShowWeekDayMenu();
    cout<<"to day is "<<GetaWeekDay(ReadWeekDay());
    return 0;
}

