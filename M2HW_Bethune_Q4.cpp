//M2HW_Bethune_Q4
// FTCC Cheering Program
// CSC134-Gold
// Assignment: M2HW
// Toni Bethune
// 10/05/2025

#include <iostream>
#include <string>
using namespace std;

int main() {
    string letsGo, school, team, cheerOne, cheerTwo, cheerThree;

    // Assign values
    letsGo = "Let's go ";
    school = "FTCC";
    team = "Trojans";

    // Build cheer strings using concatenation
    cheerOne = letsGo + school;
    cheerTwo = letsGo + team;

    // Unique cheer using school + mascot
    cheerThree = school + " " + team + " fight, win, repeat!";

    // Output cheers
    cout << cheerOne << endl;
    cout << cheerOne << endl;
    cout << cheerOne << endl;
    cout << cheerTwo << endl;
    cout << cheerThree << endl;  // unique cheer

    return 0;
}