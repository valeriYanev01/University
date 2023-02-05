#include <iostream>
using namespace std;

int main()
{
    long x = 0, y = 0, sum = 0, i = 0;

    cout << "Enter a nonnegative number: ";
    cin >> x;

    if (x == 0)
    {
        cout << "Incorrect input!";
    }
    else
    {
        while (x > 0)
        {
            y = x % 10;
            sum += y;
            x = x / 10;
            i++;
        }
        cout << "Average: " << (double)sum / i << endl;
    }
}