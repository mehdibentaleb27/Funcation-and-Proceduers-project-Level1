
#include <iostream>
#include<cmath>
#include<string>
using namespace std;
float ReadNumber(string Text)
{
    float num;
    cout << Text << endl;
    cin >> num;
    return num;
}
int SecondsPerDays()
{
    return ( 24 * 60 * 60);
}
int SecondsPerHours()
{
    return  60 * 60;
}
int SecondsPerMinutes()
{
    return 60;
}

float Days(float Totaleseconds)
{

   return floor( Totaleseconds / SecondsPerDays());
}
float RemainderDays(int Totaleseconds)
{
    return Totaleseconds % SecondsPerDays();

}
float Hours(float Remainder)
{
    return  floor(Remainder / SecondsPerHours());
}
float RemainderofHours(int Remainder)
{
    return Remainder % SecondsPerHours();

}
float Minutes(float Remainder)
{
    return  floor(Remainder / SecondsPerMinutes());
}
float RemainderofMinutes(int Remainder)
{
    return Remainder %SecondsPerMinutes();

}
int main()
{
    float Totaleseconds, Remainder, days,hours,minute,second;
    Totaleseconds = ReadNumber("Read a Number of Seconds");

    days = Days(Totaleseconds);
    Remainder = RemainderDays(Totaleseconds);

    hours = Hours(Remainder);
    Remainder = RemainderofHours(Remainder);

    minute = Minutes(Remainder);
    Remainder = RemainderofMinutes(Remainder);

    second = Remainder;
    cout << days<<":"<<hours<<":"<<minute<<":"<<second;

}

