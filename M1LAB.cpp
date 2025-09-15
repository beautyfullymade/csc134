/*
    CSC134_M1LAB
    Author: Toni Bethune
    Date: 09/14/2025
    Description: Program for a salesperson that displays store info,
    item count, price per item, and total cost.
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    // Salesperson information
    string salespersonName = "Jane Smith";
    string productName = "Apples";  // <-- You can change this (e.g., "Pears")
    int numberOfItems = 100;        // <-- Change if needed
    double pricePerItem = 0.25;     // <-- Change if needed

    // Calculate total cost
    double totalCost = numberOfItems * pricePerItem;

    // Display results
    cout << "Salesperson: " << salespersonName << endl;
    cout << "Product: " << productName << endl;
    cout << "Number of " << productName << ": " << numberOfItems << endl;
    cout << "Price per " << productName.substr(0, productName.size()-1) << ": $" << pricePerItem << endl;
    cout << "Total cost for all " << productName << ": $" << totalCost << endl;

    return 0;
}
