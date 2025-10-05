// M2LAB.cpp
// Case Study: Crate Pricing
// CSC134
// Assignment: M2LAB1
// Toni Bethune
// 10/5/2025

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  
    double length, width, height;       
    double costPerCuFt;                
    double profitPercent;               

    cout << "Enter crate length (ft): ";
    cin >> length;
    cout << "Enter crate width (ft): ";
    cin >> width;
    cout << "Enter crate height (ft): ";
    cin >> height;

    cout << "Enter cost per cubic foot ($): ";
    cin >> costPerCuFt;

    cout << "Enter desired profit percent (%): ";
    cin >> profitPercent;

  
    double volume = length * width * height;              
    double materialCost = volume * costPerCuFt;           
    double sellingPrice = materialCost * (1.0 + profitPercent / 100.0);

    
    cout << fixed << setprecision(2);
    cout << "\n===== Crate Quote =====\n";
    cout << "Volume (cu ft):        " << setprecision(2) << volume << "\n";
    cout << setprecision(2);
    cout << "Material cost:        $" << materialCost << "\n";
    cout << "Selling price:        $" << sellingPrice << "\n";

    return 0;
}