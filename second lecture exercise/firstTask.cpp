// Enter 5 digits and show correspongind chinese food from menu

#include <iostream>
using namespace std;

int main()
{
    cout << "Enter a digit from 1 to 5 to order food: \n";

    int menuItem;
    cin >> menuItem;

    switch (menuItem)
    {
    case 1:
        cout << "Chicken with rise";
        break;
    case 2:
        cout << "Rise with vegetables";
        break;
    case 3:
        cout << "Bread";
        break;
    case 4:
        cout << "Curry rice";
        break;
    case 5:
        cout << "Mushrooms";
        break;

    default:
        cout << "Entered digit is not in the 1 - 5 range";
    }
}