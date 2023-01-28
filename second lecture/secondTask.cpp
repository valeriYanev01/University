#include <iostream>
using namespace std;

int main()
{
    int firstNumber;
    int secondNumber;

    cout << "Enter the first number: ";
    cin >> firstNumber;

    cout << "Enter the second number: ";
    cin >> secondNumber;

    cout << "Add: ";
    cout << firstNumber + secondNumber << endl;

    cout << "Substract: ";
    cout << firstNumber - secondNumber << endl;

    cout << "Multiply: ";
    cout << firstNumber * secondNumber << endl;

    cout << "Division: ";
    cout << firstNumber / secondNumber << endl;

    cout << "Module div: ";
    cout << firstNumber % secondNumber;

    return 0;
}