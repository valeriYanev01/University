#include <iostream>
using namespace std;

int main()
{
    int number, counter = 0;
    cout << "Enter a number: ";
    cin >> number;
    while (number > 0)
    {
        number = number / 10;
        counter++;
    };

    cout << counter;
}