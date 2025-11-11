// CSC 134
// M5 - Functions Practice
//Toni Bethune
// 11/10/2025

#include <iostream>
using namespace std;

// Prototypes
void say_hello();
int give_the_answer();
int double_a_number(int n);

int main() {
    say_hello();  // 1) void, no parameters

    // 2) value-returning, no parameters
    int answer = give_the_answer();
    cout << "The answer is " << answer << endl;

    // 3) parameter + return value
    int x = 7;
    cout << "Double of " << x << " is " << double_a_number(x) << endl;

    return 0;
}

// Definitions
void say_hello() {
    cout << "Hello from a function!" << endl;
}

int give_the_answer() {
    return 42;   // or 5 if your instructor uses 5 in class—adjust as needed
}

int double_a_number(int n) {
    return n * 2;
}