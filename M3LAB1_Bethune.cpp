// space_choice_v3.cpp  (Program Three style)
// Same idea but split into small functions (methods)
// CSC134 
// M3LAB1
// Toni Bethune
// 10/05/2025



# include <iostream>
using namespace std;

void handleScan() 
{
    cout << "\nYou run a full sensor sweep...\n";
    cout << "Hidden crystals discovered! You gain rare research data.\n";
}

void handleDodge() {
    cout << "\nYou fire the thrusters and dodge smoothly.\n";
    cout << "Nice piloting! You avoid debris and keep the hull intact.\n";
}

void handleInvalid() {
    cout << "\nI'm sorry, that is not a valid choice.\n";
}

int main() {
    cout << "A strange asteroid is approaching your ship.\n";
    cout << "Do you (1) scan it or (2) fire thrusters to dodge?\n";
    cout << "Type 1 or 2: ";

    int choice;
    cin >> choice;

    if (choice == 1) {
        handleScan();
    } else if (choice == 2) {
        handleDodge();
    } else {
        handleInvalid();
    }

    cout << "\nThanks for playing!\n";
    return 0;
}