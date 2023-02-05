#include <iostream>
using namespace std;

int main()
{
    int number, currentNumber, zero = 0, one = 0, two = 0, three = 0, four = 0, five = 0, six = 0, seven = 0, eigth = 0, nine = 0;
    cout << "Enter a number: ";
    cin >> number;

    while (number > 0)
    {
        currentNumber = number % 10;
        switch (currentNumber)
        {
        case 0:
            zero++;
            break;
        case 1:
            one++;
            break;
        case 2:
            two++;
            break;
        case 3:
            three++;
            break;
        case 4:
            four++;
            break;
        case 5:
            five++;
            break;
        case 6:
            six++;
            break;
        case 7:
            seven++;
            break;
        case 8:
            eigth++;
            break;
        case 9:
            nine++;
            break;
        }
        number /= 10;
    }

    cout << "Digit/Occurrances: " << endl
         << "Zero: " << zero << endl
         << "One: " << one << endl
         << "Two: " << two << endl
         << "Three: " << three << endl
         << "Four: " << four << endl
         << "Five: " << five << endl
         << "Six: " << six << endl
         << "Seven: " << seven << endl
         << "Eigth: " << eigth << endl
         << "Nine: " << nine << endl;
}