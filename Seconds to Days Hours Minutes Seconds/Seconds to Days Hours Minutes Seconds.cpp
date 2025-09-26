

#include <iostream>
using namespace std;
int main()
{
    float secondsPerday =24*60*60, secondsPerhour=60*60, secondsPerminute=60;
    float NumberOfSeconds,days,Remainder;
   // float Remainder, munite,hour;
  // float days, seconds,Num;
    cout << "Read Number of Seconds \n";
    cin >> NumberOfSeconds;
    days = floor(NumberOfSeconds / secondsPerday);
    Remainder = NumberOfSeconds / secondsPerday;
   
   
    cout << days<<":"<<Remainder;
   // cin >> Num;
/*
    days = (Num / 60) / 60 / 24;
    hour = ((Num / 60)/60) -(floor(days) * 24);
    Remainder = hour- floor(hour);
    munite = Remainder * 60;
    Remainder = munite - floor(munite);
    seconds = Remainder * 60;
    cout << floor(days)<<":"<<floor(hour)<<":"<<floor(munite)<<":"<<floor(seconds);
    */
}

