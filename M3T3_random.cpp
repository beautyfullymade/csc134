// m3_random.cpp  — Craps: first-roll outcome only
#include <iostream>
#include <random>
#include <string>

int roll_die(std::mt19937 &rng) {
    static std::uniform_int_distribution<int> d6(1, 6);
    return d6(rng);
}

int main() {
    std::random_device rd;
    std::mt19937 rng(rd());                    // seed engine once

    std::cout << "== Craps (first roll only) ==\n\n";

    char again = 'y';
    while (std::tolower(again) == 'y') {
        int die1 = roll_die(rng);
        int die2 = roll_die(rng);
        int sum  = die1 + die2;

        std::cout << "You rolled " << die1 << " + " << die2
                  << " = " << sum << "\n";

        if (sum == 7 || sum == 11) {
            std::cout << ">> You WIN on the first roll!\n";
        } else if (sum == 2 || sum == 3 || sum == 12) {
            std::cout << ">> Craps! You LOSE on the first roll.\n";
        } else {
            std::cout << ">> Point is " << sum << ". (Stop here for M3T3)\n";
        }

        std::cout << "\nRoll again? (y/n): ";
        std::cin >> again;
        std::cout << "\n";
    }

    std::cout << "Thanks for playing!\n";
    return 0;
}