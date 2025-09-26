// Arrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int ReadGrades(string Text)
{
    int num;
    cout << Text << endl;
    cin >> num;
    return num;
}
float CalculateAverageGrades(float arr[3])
{
    return (arr[0] + arr[1] + arr[2])/3;
}
int main()
{
    float Grades[3];
    Grades[0] = ReadGrades("Please Enter Grade1");
    Grades[1] = ReadGrades("Please Enter Grade2");
    Grades[2] = ReadGrades("Please Enter Grade3");

    cout << "The average of grades is " << CalculateAverageGrades(Grades);
    return 0;
}

