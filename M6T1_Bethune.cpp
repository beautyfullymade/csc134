// CSC 134
// M6T1 - Car Counter
// Toni Bethune
// 12/3/2025

Count the number of cars passing a construction site
each day (Monday–Friday) using:
- method1: while loop, no arrays
- method2: for loop with arrays + simple table (and can be extended to a graph)
*/

#include <iostream>
#include <string>
using namespace std;

// Function Declarations
void method1();
void method2();

// main
int main() {
    // Count # of cars per day, two different ways
    method1();
    cout << endl;  // blank line between methods
    method2();

    return 0;
}

// function definitions
void method1() {
    // Method one - no arrays
    // Count 5 days of cars, get total and average
    cout << "Part 1: Cars per day (no arrays)" << endl;
    cout << "Enter the number of cars that passed the construction site each day." << endl;
    cout << "Day 0 = Monday, Day 4 = Friday" << endl;

    const int SIZE = 5;
    int count = 0;
    int cars_today;      // current value, to add
    int cars_total = 0;  // add up
    double cars_avg = 0; // average

    while (count < SIZE) {
        cout << "Day " << count << ": ";
        cin >> cars_today;
        cars_total += cars_today;
        count++; // Move to next day
    }

    cout << "Total cars for the week = " << cars_total << endl;
    cars_avg = static_cast<double>(cars_total) / SIZE;
    cout << "Average cars per day = " << cars_avg << endl;
}

void method2() {
    // Method 2 uses two arrays:
    // Names of the days
    // # of cars that passed on those days

    cout << "Part 2: Cars per day (with arrays)" << endl;

    const int SIZE = 5;
    string days[SIZE] = {"Mon", "Tue", "Wed", "Thu", "Fri"}; // initialized
    int cars[SIZE];  // not initialized
    int cars_total = 0;
    double cars_avg = 0.0;

    // Input loop
    for (int i = 0; i < SIZE; i++) {
        cout << "# of cars on " << days[i] << ": ";
        cin >> cars[i];
    }

    // Print output in "tabular" format
    cout << "\nDay\tCars" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << days[i] << "\t" << cars[i] << endl;
        // find the total
        cars_total += cars[i];
    }

    // find total, print results
    cars_avg = static_cast<double>(cars_total) / SIZE;
    cout << "\nTotal cars for the week = " << cars_total << endl;
    cout << "Average cars per day = " << cars_avg << endl;

    // (Optional) Simple ASCII bar graph
    cout << "\nASCII Bar Graph (1 * = 10 cars)" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << days[i] << " | ";
        int bars = cars[i] / 10;  // scale: 1 star per 10 cars
        for (int j = 0; j < bars; j++) {
            cout << "*";
        }
        cout << " (" << cars[i] << ")\n";
    }
}