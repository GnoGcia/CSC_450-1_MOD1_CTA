#include <iostream>

using namespace std;

int main()
{
    // Declare variables for storing
    // fictional person data
    string firstName;
    string lastName;
    string streetAddress;
    string city;
    int zipCode;

    // Record values for variables
    // using user input
    cout << "First Name: ";
    cin >> firstName;
    cout << "Last Name: ";
    cin >> lastName;
    cin.ignore(246, '\n');
    cout << "Street Address: ";
    getline(cin, streetAddress);
    cout << "City: ";
    getline(cin, city);
    cout << "Zip Code: ";
    cin >> zipCode;

    // Output fictional person data to the console
    cout << "Name: " << lastName << ", " << firstName << endl;
    cout << "Location: " << streetAddress << ", " << city << ", " << zipCode << endl;

    return 0;
}
