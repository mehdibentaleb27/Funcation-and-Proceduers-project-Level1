

#include <iostream>
using namespace std;
int main()
{
    float a, b, c,area ,p,T;
    const float PI = 3.14;
    cout << "Please Enter a Number\n";
    cin >> a;
    cout << "Please Enter a Number\n";
    cin >> b;
    cout << "Please Enter a Number\n";
    cin >> c;
    p = (a + b + c) / 2;
    //T = (a * b * c) / (4 * sqrt(p * (p - a) * (p - b) * (p - c)) );
     area =  (PI * pow((a * b * c) / (4* sqrt(p*(p-a)*(p-b)*(p-c))),2));
    //area = PI * T * T;
    cout << "Area :" << area;
}

