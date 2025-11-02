// CSC 134
// M4HW_TimesTable_Gold
// Toni Bethune
// 11/2/2025
// Program validates user input and prints the correct times table.

#include <iostream>
using namespace std;

int main() {
    int number;
    int multiplier;

    // Input validation loop
    do {
        cout << "Enter a number from 1 to 12: ";
        cin >> number;

        if (number < 1 || number > 12) {
            cout << "Invalid input. Please enter a number between 1 and 12." << endl;
        }
    } while (number < 1 || number > 12);

    // Print the times table
    multiplier = 1;
    while (multiplier <= 12) {
        cout << number << " times " << multiplier << " is " << number * multiplier << "." << endl;
        multiplier++;
    }

    return 0;
}