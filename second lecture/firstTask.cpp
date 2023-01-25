#include <iostream>
using namespace std;

int main()
{
    string firstName;
    string lastName;
    string weight;

    cin >> firstName;
    cin >> lastName;
    cin >> weight;

    cout << "First Name: " + firstName + "\n";
    cout << "Last Name: " + lastName + "\n";
    cout << "Weight: " + weight;
}