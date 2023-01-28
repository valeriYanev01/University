#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int rad;
    int deg;
    float resultRad;
    float resultDeg;

    cin >> rad;
    cin >> deg;

    resultRad = M_PI * deg / 180;
    resultDeg = rad * 180 / M_PI;

    cout << resultRad;
    cout << "\n";
    cout << resultDeg;
}