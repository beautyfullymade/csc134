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
    // This program will simulate an apple orchard.
    // The owner's name
    string name = "Toni Bethune";
    // number of apples owned
    int apples = 100;
    // price per apple
    double pricePerApple = 0.25;

    // calculate the total price of the apples
    double totalPrice = apples * pricePerApple;

    // print all the information about the orchard
    cout << "Welcome to " << name << "'s apple orchard." << endl;
    cout << "We have " << apples << " apples in stock" << endl;
    cout << "Apples are currently $" << pricePerApple << " each." << endl;
    cout << "If you want them all, that will be $" << totalPrice << endl;

    return 0;
}
