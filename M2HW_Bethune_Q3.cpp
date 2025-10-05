// M2HW_Bethune_Q3
// Pizza Party Program
// CSC-GOld
// Assignment: M2HW
// Toni Bethune
// 10/05/2025

#include <iostream>
using namespace std;

int main() {
    int pizzas, slicesPerPizza, visitors;

    
    cout << "How many pizzas did you order? ";
    cin >> pizzas;
    cout << "How many slices per pizza? ";
    cin >> slicesPerPizza;
    cout << "How many visitors are coming? ";
    cin >> visitors;

    
    int totalSlices = pizzas * slicesPerPizza;
    int slicesNeeded = visitors * 3;
    int leftover = totalSlices - slicesNeeded;

   
    cout << "\nTotal slices available: " << totalSlices << endl;
    cout << "Total slices needed: " << slicesNeeded << endl;

    if (leftover >= 0) {
        cout << "Leftover slices: " << leftover << endl;
    } else {
        cout << "Not enough pizza! You are short by " << -leftover << " slices." << endl;
    }

    return 0;
}