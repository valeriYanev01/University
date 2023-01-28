#include <iostream>
using namespace std;

int main()
{
    int staticNumber = 10;
    int inputNumber;

    cout << "Enter the number: ";
    cin >> inputNumber;

    staticNumber += inputNumber;
    cout << "Add: " << staticNumber << endl;

    staticNumber -= inputNumber;
    cout << "Substract: " << staticNumber << endl;

    staticNumber *= inputNumber;
    cout << "Multiply: " << staticNumber << endl;

    staticNumber /= inputNumber;
    cout << "Division: " << staticNumber << endl;
}