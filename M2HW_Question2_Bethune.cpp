// M2HW_Question2_Bethune.cpp
// General Crates Pricing Update
// CSC134-Gold
// Assignment: M2LAB2
// Toni Bethune
// 10/05/2025

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double length, width, height;

    
    const double COST_PER_CUFT = 0.30;   
    const double MAX_CHARGE_PER_CUFT = 0.52;  


    cout << "Enter crate length (ft): ";
    cin >> length;
    cout << "Enter crate width (ft): ";
    cin >> width;
    cout << "Enter crate height (ft): ";
    cin >> height;

    
    double volume = length * width * height;
    double materialCost = volume * COST_PER_CUFT;
    double charge = volume * MAX_CHARGE_PER_CUFT;
    double profit = charge - materialCost;

    
    cout << fixed << setprecision(2);
    cout << "\n=== General Crates Pricing Report ===\n";
    cout << "Volume (cubic feet):   " << volume << endl;
    cout << "Cost to build:        $" << materialCost << endl;
    cout << "Maximum charge:       $" << charge << endl;
    cout << "Profit:               $" << profit << endl;

    return 0;
}
