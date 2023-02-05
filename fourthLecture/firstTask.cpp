#include <iostream>
using namespace std;

//---USING WHILE LOOP---
// int main()
// {
//     int counter = 1;
//     int number;
//     cout << "Enter a number large than 1: ";
//     cin >> number;

//     while (counter <= number)
//     {
//         cout << counter << endl;
//         counter++;
//     }
// }

// _____________________________________
// USING DO WHILE LOOP

int main()
{
    int number, counter = 1;

    cout << "Enter a number larger than 1: ";
    cin >> number;

    do
    {
        cout << counter << endl;
        counter++;
    } while (counter <= number);
}