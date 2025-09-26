
#include <iostream>
using namespace std;
int main()
{
    float days, hours, minutes, seconds;
    float HourinDay, Minutesinhour, secondsinaMinute;
    cout << "Read a Number of Days\n";
    cin >> days;

    cout << "Read a Number of Hours\n";
    cin >> hours;

    cout << "Read a Number of Minutes\n";
    cin >> minutes;

    cout << "Read a Number of  Seconds\n";
    cin >> seconds;

    HourinDay = (days * 24) + hours;
    Minutesinhour = (HourinDay * 60) + minutes;
    secondsinaMinute = Minutesinhour * 60 + seconds;

    cout << "\n Totale Secande :" << secondsinaMinute;
}

