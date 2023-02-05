#include <iostream>
using namespace std;

int main()
{
    int counter = 1;
    int number;
    cout << "Enter a number large than 1: ";
    cin >> number;

    while (counter <= number)
    {
        cout << counter << endl;
        counter++;
    }
}