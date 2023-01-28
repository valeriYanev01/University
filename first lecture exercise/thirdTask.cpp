#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int num1;
    int num2;
    int num3;
    int result;

    cin >> num1;
    cin >> num2;
    cin >> num3;

    result = (sqrt(num1) + sqrt(num2) + sqrt(num3)) / 3;
    cout << result;
}