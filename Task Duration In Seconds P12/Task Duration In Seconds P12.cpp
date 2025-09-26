
#include <iostream>
using namespace std;
short ReadNumber(string Text)
{
    short num;
    cout << Text << endl;
    cin >> num;
    return num;
}
int DaysinSeconds(short days)
{
    return days*24*60*60;
}
int HoursinSeconds(short hours)
{
    return hours * 60 * 60;
}
int MinutesinSeconds(short Muintes)
{
    return Muintes * 60;
}
int TotaleSeconds(short days, short hours, short Minutes, short seconds)
{
    return DaysinSeconds(days) + HoursinSeconds(hours) + MinutesinSeconds(Minutes) + seconds;
}
int main()
{
    int days, hours, minutes, seconds;
    days = ReadNumber("Read a Number of Days");
    hours = ReadNumber("Read a Number of Hours");
    minutes = ReadNumber("Read a Number of Minutes");
    seconds = ReadNumber("Read a Number of Seconds");

    cout << "Totale Seconds : ";
    cout << TotaleSeconds(days, hours, minutes, seconds);
}

