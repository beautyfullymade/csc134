// CSC 134
// M4T1
// Name: Toni Bethune
// Date: 10/26/2025
//
// This program combines:
//  - Program 5-3 (print Hello 5 times)
//  - Program 5-6 (print table of numbers and squares)

#include <iostream>
using namespace std;

int main() {

    // Part 1: Say "Hello" five times
    cout << "Part 1: Hello Loop\n";
    int count = 1;  // counter variable
    while (count <= 5) {
        cout << "Hello number " << count << endl;
        count++;  // important to avoid infinite loop
    }

    cout << "\n---------------------\n";

    // Part 2: Table of numbers and their squares
    cout << "Part 2: Numbers and Squares\n";
    cout << "Number\tSquare\n";
    cout << "---------------------\n";

    int number = 1;  // loop control variable
    while (number <= 10) {
        cout << number << "\t" << (number * number) << endl;
        number++;
    }

    cout << "\nDone!\n";
    return 0;
}