// CSC 134
// M2T1 - Apple Sales with User Input
// Toni Bethune
// 9/21/2025

#include <iostream>
#include <string>
using namespace std;
int main() {
    // Set up all variables
    string first_name, last_name, full_name; // holds customer name
    string product = "apples"; //change to whatever you like
    int amount_purchased;
    double cost_each = 0.99;
    double total_cost;
    

    // Greet the customer
    cout << "Welcome to our " << product << "store!" << endl;
    cout << "What's your first name?";
    cin >> first_name;
    cout << "What's your last name? ";
    cin >> last_name;
    full_name = first_name + " " + last_name;
    cout << "Nice to meet you,"<< full_name<< endl;
    

    // Ask how much they'd would like to purchase 
    cout << "How many " <<product << "would you like to buy?";
    cin  >> amount_purchased;
  
    // Calculate total price
    total_cost = amount_purchased * cost_each;
    
    // Give the result
    cout << "For"<< amount_purchased <<" " << product << endl;
    cout << "That will be: $ " << total_cost << endl;
    cout << "Thank you for shopping with me!" << endl;

   
    return 0;
}
