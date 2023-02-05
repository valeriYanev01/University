#include <iostream>
using namespace std;

int main()
{
    unsigned dollarValue;

    do
    {
        cout << "Enter a value in dollars: ";
        cin >> dollarValue;
        cout << "Value in bulgarin Lev: ";
        cout << dollarValue * 1.81 << endl;
        if (dollarValue == 0)
        {
            cout << "Exiting loop...";
        }
    } while (dollarValue > 0);
}