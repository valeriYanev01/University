#include <iostream>
using namespace std;

#define MaxValue = 500;
#define MinValue = 100;

int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (number <= 500 && number >= 100)
    {
        cout << "Number does belong in the pre-defined MIN and MAX value range!";
    }
    else
    {
        cout << "Number does not belong in the pre-defined MIN and MAX value range!";
    }
}