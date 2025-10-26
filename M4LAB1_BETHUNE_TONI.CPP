// CSC 134 - Asterisk Block
// Toni_Bethune_M4_AsteriskBlock.cpp
// 10/26/2025

#include <iostream>
#include <limits>
using namespace std;

int main() {
    int height, width;

    // Prompt & basic validation
    cout << "Enter height: ";
    while (!(cin >> height) || height <= 0) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Please enter a positive integer for height: ";
    }

    cout << "Enter width: ";
    while (!(cin >> width) || width <= 0) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Please enter a positive integer for width: ";
    }

    // Print height rows; each row has width asterisks separated by a single space
    for (int i = 0; i < height; ++i) {
        for (int j = 0; j < width; ++j) {
            cout << "*";
            if (j < width - 1) cout << " ";  // no trailing space at end of line
        }
        cout << '\n'; // newline after each row
    }

    return 0;
}