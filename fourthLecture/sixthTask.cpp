#include <iostream>
using namespace std;

int main()
{
    int number, currentNumber, sum = 0;

    cout << "Enter a positive number: ";
    cin >> number;

    while (number > 0)
    {
        currentNumber = number % 10;
        sum += currentNumber;
        number /= 10;
    }

    cout << "Sum of all digits in the entered number: " << sum << endl;
}