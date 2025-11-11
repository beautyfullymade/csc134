#include <iostream>
#include <limits>
using namespace std;

/*
 CSC 134
 M5LAB1 - Choose Your Own Adventure
 Your Name
 Date
*/

// ======= Prototypes =======
void main_menu();
void choice_front_door();
void choice_back_door();
void choice_go_home();

// new branches you add
void choice_check_mailbox();
void choice_call_friend();

// helper
int get_int_in_range(int low, int high, const string& prompt);

// ======= main =======
int main() {
    cout << "M5LAB1 - Choose Your Own Adventure\n";
    main_menu();
    cout << "Thanks for playing!\n";
    return 0;
}

// ======= Helper to safely read an int in [low, high] =======
int get_int_in_range(int low, int high, const string& prompt) {
    int x;
    while (true) {
        cout << prompt;
        if (cin >> x && x >= low && x <= high) {
            return x;
        }
        cout << "Invalid input. Please enter a number from "
             << low << " to " << high << ".\n";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
}

// ======= Menus / Story =======
void main_menu() {
    while (true) {
        cout << "\n=== Main Menu ===\n";
        cout << "You're in front of a spooky old house...\n";
        cout << "1) Try the front door\n";
        cout << "2) Sneak around back\n";
        cout << "3) Forget it and go home\n";
        cout << "4) [Quit]\n";

        int choice = get_int_in_range(1, 4, "Choose: ");

        if (choice == 1) {
            choice_front_door();
        } else if (choice == 2) {
            choice_back_door();
        } else if (choice == 3) {
            choice_go_home();
        } else { // 4
            cout << "Ok, quitting game.\n";
            return;  // back to main()
        }
        // After any branch, we return here and show the main menu again.
    }
}

void choice_front_door() {
    cout << "\n[Front Door]\n";
    cout << "You jiggle the handle. It's locked.\n";
    cout << "What now?\n";
    cout << "1) Check around back\n";
    cout << "2) Give up and go home\n";
    cout << "3) Check the old mailbox by the steps\n"; // NEW path
    int choice = get_int_in_range(1, 3, "Choose: ");

    if (choice == 1) {
        choice_back_door();
    } else if (choice == 2) {
        choice_go_home();
    } else {
        choice_check_mailbox(); // new branch
    }
}

void choice_back_door() {
    cout << "\n[Back of the House]\n";
    cout << "You find a rickety porch and a half-broken screen door.\n";
    cout << "You notice a small window cracked open.\n";
    cout << "1) Quietly knock on the back door\n";
    cout << "2) Try to reach through the window for the latch\n";
    cout << "3) Call a friend for backup\n"; // NEW path
    cout << "4) Return to the main menu\n";
    int choice = get_int_in_range(1, 4, "Choose: ");

    if (choice == 1) {
        cout << "You knock twice. A cat answers with a hiss. No one home.\n";
    } else if (choice == 2) {
        cout << "You stretch through the window and… click! The door opens.\n";
        cout << "Inside is dusty but safe. You find an old journal on a table.\n";
        cout << "You pocket it and head back outside.\n";
    } else if (choice == 3) {
        choice_call_friend(); // new branch
    } else {
        cout << "Heading back to the front...\n";
    }
}

void choice_go_home() {
    cout << "\n[Go Home]\n";
    cout << "You decide the spooky house can wait.\n";
    cout << "At home, you make cocoa and watch a mystery show.\n";
    cout << "Maybe you'll return tomorrow with better gear.\n";
}

// ======= New branches you added =======
void choice_check_mailbox() {
    cout << "\n[Mailbox]\n";
    cout << "The rusty mailbox screeches as it opens. Inside is a small brass key\n";
    cout << "with a tag that says: 'BACK.' You grin.\n";
    cout << "You take the key and head behind the house.\n";
    cout << "(The key fits the back door perfectly!)\n";
}

void choice_call_friend() {
    cout << "\n[Call a Friend]\n";
    cout << "You phone your friend Alex. They bring a flashlight and snacks.\n";
    cout << "Together, you explore safely and find a hidden note:\n";
    cout << "\"Sometimes the scariest doors lead to the best stories.\"\n";
}
