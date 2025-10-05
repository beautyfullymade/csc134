// Banking Transactions Simulation
// CSC134- Gold
// Assignment: M2LAB1 (Banking Transactions)
// Author: Toni Bethune
// Date: 10/5/2025

#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>   
#include <ctime>     

using namespace std;

int main() {
    
    srand(time(0));

    string name;
    double startingBalance, deposit, withdrawal, finalBalance;
    int accountNumber = 10000 + rand() % 90000; 

    
    cout << "Enter the name on the account: ";
    getline(cin, name);

    
    cout << "Enter starting account balance: $";
    cin >> startingBalance;

    cout << "Enter deposit amount: $";
    cin >> deposit;

    cout << "Enter withdrawal amount: $";
    cin >> withdrawal;

   
    finalBalance = startingBalance + deposit - withdrawal;

    
    cout << fixed << setprecision(2); // format money values to 2 decimal places
    cout << "\n=== Account Summary ===\n";
    cout << "Name on the account: " << name << endl;
    cout << "Account number: " << accountNumber << endl;
    cout << "Final balance: $" << finalBalance << endl;

    return 0;
}