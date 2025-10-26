// CSC 134
// M3HW1 - Gold
// Name: Toni Bethune
// Date: 10/26/2025

#include <iostream>
#include <iomanip>   // setprecision, fixed
#include <cstdlib>   // rand, srand
#include <ctime>     // time
#include <cctype>    // tolower
#include <string>
using namespace std;

// Function prototypes
void question1();  // Chat bot (yes/no/other)
void question2();  // Receipt calculator w/ dine-in tip
void question3();  // Choose Your Own Adventure
void question4();  // Math practice (random single-digit sum)

int main() {
    // Seed randomness once for the whole run
    srand(static_cast<unsigned>(time(nullptr)));

    bool keep_going = true;
    while (keep_going) {
        cout << "\n=== M3HW1 Menu ===\n"
             << "1. Question 1 - Chat Bot\n"
             << "2. Question 2 - Receipt Calculator\n"
             << "3. Question 3 - Choose Your Own Adventure\n"
             << "4. Question 4 - Math Practice\n"
             << "0. Exit\n"
             << "Enter your choice: ";
        int choice;
        if (!(cin >> choice)) {
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Invalid input. Try again.\n";
            continue;
        }

        if (choice == 1) question1();
        else if (choice == 2) question2();
        else if (choice == 3) question3();
        else if (choice == 4) question4();
        else if (choice == 0) {
            cout << "Goodbye!\n";
            keep_going = false;
        } else {
            cout << "Invalid choice. Try again.\n";
        }
    }
    return 0;
}

// ----------------------
// Question 1: Chat Bot
// ----------------------
void question1() {
    cout << "\nHello, I’m a C++ program!\n";
    cout << "Do you like me? Please type yes or no: ";

    string answer;
    cin >> answer;

    // make answer lowercase for easy comparison
    for (char& ch : answer) ch = static_cast<char>(tolower(static_cast<unsigned char>(ch)));

    if (answer == "yes") {
        cout << "That’s great! I’m sure we’ll get along.\n";
    } else if (answer == "no") {
        cout << "Well, maybe you’ll learn to like me later.\n";
    } else {
        cout << "If you’re not sure… that’s OK.\n";
    }
}

// ----------------------------------------
// Question 2: Receipt Calculator (tip if dine-in)
// ----------------------------------------
void question2() {
    const double TAX_RATE = 0.07;  // 7% (adjust if needed)
    const double TIP_RATE = 0.15;  // 15% for dine-in

    double mealPrice;
    cout << "\nEnter the price of the meal: $";
    while (!(cin >> mealPrice) || mealPrice < 0) {
        cin.clear();
        cin.ignore(10000, '\n');
        cout << "Please enter a valid non-negative number: $";
    }

    cout << "Please enter 1 for dine in, 2 for takeaway: ";
    int orderType;
    if (!(cin >> orderType)) {
        cin.clear();
        cin.ignore(10000, '\n');
        orderType = 2; // default to takeaway on bad input
        cout << "Input not recognized. Treating as takeaway.\n";
    }

    double tax = mealPrice * TAX_RATE;
    double tip = (orderType == 1) ? (mealPrice * TIP_RATE) : 0.0;
    double total = mealPrice + tax + tip;

    cout << fixed << setprecision(2);
    cout << "\n----- Receipt -----\n";
    cout << "Meal Price: $" << mealPrice << '\n';
    cout << "Tax:        $" << tax << '\n';
    cout << "Tip:        $" << tip << '\n';
    cout << "-------------------\n";
    cout << "Total Due:  $" << total << '\n';
}

// ----------------------------------------
// Question 3: Choose Your Own Adventure
// ----------------------------------------
void question3() {
    cout << "\nWelcome to the adventure!\n";
    cout << "You stand at the mouth of a dark cave.\n";
    cout << "Do you ENTER (1) or RUN AWAY (2)? ";
    int choice1;
    if (!(cin >> choice1)) {
        cin.clear();
        cin.ignore(10000, '\n');
        cout << "You hesitate too long. The chance passes. Game Over.\n";
        return;
    }

    if (choice1 == 2) {
        cout << "You run away safely. Game Over.\n";
    } else if (choice1 == 1) {
        cout << "Inside, you find a dusty chamber with a treasure chest.\n";
        cout << "Do you OPEN the chest (1) or IGNORE it (2)? ";
        int choice2;
        if (!(cin >> choice2)) {
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "While you hesitate, a trap springs. Game Over.\n";
            return;
        }

        if (choice2 == 1) {
            cout << "The chest holds gold and a healing potion. Victory!\n";
        } else if (choice2 == 2) {
            cout << "A lurking monster attacks from behind. Defeat. Game Over.\n";
        } else {
            cout << "You trip a trap with that odd choice. Game Over.\n";
        }
    } else {
        cout << "You step on a loose stone and tumble away. Game Over.\n";
    }
}

// ----------------------------------------
// Question 4: Math Practice (single problem)
// ----------------------------------------
void question4() {
    int a = rand() % 10;  // 0..9
    int b = rand() % 10;  // 0..9

    cout << "\nWhat is " << a << " plus " << b << "? ";
    int user;
    if (!(cin >> user)) {
        cin.clear();
        cin.ignore(10000, '\n');
        cout << "That wasn’t a number. Incorrect.\n";
        return;
    }

    int correct = a + b;
    if (user == correct) {
        cout << "Correct!\n";
    } else {
        cout << "Incorrect. The right answer was " << correct << ".\n";
    }
}