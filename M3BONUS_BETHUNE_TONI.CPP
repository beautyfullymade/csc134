// CSC 134
// M3 - AI Assisted Development (Craps Game)
// Name: Toni Bethune
// Date: 10/26/2025
//
// Notes:
// - Uses only if/else, loops, and functions.
// - Includes a random die function, input validation, and a simple menu.
// - Rules of Craps (short):
//     * First roll (come-out):
//         - 7 or 11  => immediate WIN
//         - 2, 3, or 12 => immediate LOSS ("craps")
//         - otherwise the sum becomes the POINT
//     * Point phase:
//         - keep rolling until you roll POINT again (WIN) or 7 (LOSS)

#include <iostream>
#include <cstdlib>   // rand, srand
#include <ctime>     // time
#include <cctype>    // tolower
#include <string>
using namespace std;

// ---------- Function Prototypes ----------
int rollDie();                       // single die (1..6)
int rollTwoDice(int& d1, int& d2);   // returns sum, sets d1/d2 by ref
bool playOneRound();                 // plays one full round; returns true if player won
int menu();                          // shows menu & returns user choice
bool askPlayAgain();                 // y/n with validation

// ---------- Helpers ----------
int rollDie() {
    // returns a number 1..6
    return (rand() % 6) + 1;
}

int rollTwoDice(int& d1, int& d2) {
    d1 = rollDie();
    d2 = rollDie();
    return d1 + d2;
}

int menu() {
    cout << "\n=== Craps ===\n"
         << "1) Play a round\n"
         << "2) How to play\n"
         << "0) Exit\n"
         << "Enter choice: ";
    int choice;
    if (!(cin >> choice)) {
        cin.clear();
        cin.ignore(10000, '\n');
        return -1; // will be treated as invalid
    }
    return choice;
}

bool askPlayAgain() {
    cout << "Play again? (y/n): ";
    string s;
    while (true) {
        if (!(cin >> s)) {
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Please type y or n: ";
            continue;
        }
        // lower-case first char only
        char c = static_cast<char>(tolower(static_cast<unsigned char>(s[0])));
        if (c == 'y') return true;
        if (c == 'n') return false;
        cout << "Please type y or n: ";
    }
}

// Plays one full round of craps.
// Returns true if the player wins, false if the player loses.
bool playOneRound() {
    int d1, d2;
    int sum = rollTwoDice(d1, d2);

    cout << "\nCome-out roll: " << d1 << " + " << d2 << " = " << sum << "\n";

    // Come-out logic
    if (sum == 7 || sum == 11) {
        cout << "Natural! You win!\n";
        return true;
    } else if (sum == 2 || sum == 3 || sum == 12) {
        cout << "Craps! You lose.\n";
        return false;
    }

    // Establish point
    int point = sum;
    cout << "Point is set to " << point << ". Keep rolling...\n";

    // Point phase: roll until point (win) or 7 (lose)
    while (true) {
        sum = rollTwoDice(d1, d2);
        cout << "Roll: " << d1 << " + " << d2 << " = " << sum << "\n";

        if (sum == point) {
            cout << "You hit the point! You win!\n";
            return true;
        } else if (sum == 7) {
            cout << "Seven out! You lose.\n";
            return false;
        }
        // otherwise continue
    }
}

int main() {
    srand(static_cast<unsigned>(time(nullptr))); // seed once

    bool running = true;
    int wins = 0;
    int losses = 0;

    while (running) {
        int choice = menu();

        if (choice == 1) {
            bool keepPlaying = true;
            while (keepPlaying) {
                bool won = playOneRound();
                if (won) ++wins; else ++losses;

                cout << "Scoreboard: Wins = " << wins << ", Losses = " << losses << "\n";
                keepPlaying = askPlayAgain();
            }
        } else if (choice == 2) {
            cout << "\nHow to Play Craps (short version):\n"
                 << "- On the first roll (come-out), a 7 or 11 wins immediately.\n"
                 << "- A 2, 3, or 12 loses immediately (\"craps\").\n"
                 << "- Any other number becomes the POINT. Keep rolling until:\n"
                 << "    * You roll the POINT again (you win), or\n"
                 << "    * You roll a 7 (you lose).\n";
        } else if (choice == 0) {
            cout << "Goodbye!\n";
            running = false;
        } else {
            cout << "Invalid choice. Try again.\n";
        }
    }
    return 0;
}