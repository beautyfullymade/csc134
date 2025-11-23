// CSC 134
// M5HW1 - Menu Program for Questions 1-5
// Toni Bethune
// 11/23/2025

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

void question1_rainfall();
void question2_blockVolume();
void question3_romanNumeral();
void question4_geometryCalculator();
void question5_distanceTraveled();

int main() {
    int choice = 0;

    do {
        cout << "\n=== M5HW1 Main Menu ===\n";
        cout << "1. Question 1 - Average Rainfall\n";
        cout << "2. Question 2 - Block Volume\n";
        cout << "3. Question 3 - Roman Numerals\n";
        cout << "4. Question 4 - Geometry Calculator\n";
        cout << "5. Question 5 - Distance Traveled\n";
        cout << "6. Exit\n";
        cout << "Enter your choice (1-6): ";
        cin >> choice;

        // Input validation for main menu
        if (cin.fail()) {
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Invalid input. Please enter a number from 1 to 6.\n";
            continue;
        }

        switch (choice) {
            case 1:
                question1_rainfall();
                break;
            case 2:
                question2_blockVolume();
                break;
            case 3:
                question3_romanNumeral();
                break;
            case 4:
                question4_geometryCalculator();
                break;
            case 5:
                question5_distanceTraveled();
                break;
            case 6:
                cout << "Exiting program. Goodbye!\n";
                break;
            default:
                cout << "The valid choices are 1 through 6. Please select one of those.\n";
        }

    } while (choice != 6);

    return 0;
}

// =======================
// Question 1 - Rainfall
// =======================
void question1_rainfall() {
    string month1, month2, month3;
    double rain1, rain2, rain3;

    cout << "\nQuestion 1 - Average Rainfall\n";

    cout << "Enter month: ";
    cin >> month1;
    cout << "Enter rainfall for " << month1 << ": ";
    cin >> rain1;

    cout << "Enter month: ";
    cin >> month2;
    cout << "Enter rainfall for " << month2 << ": ";
    cin >> rain2;

    cout << "Enter month: ";
    cin >> month3;
    cout << "Enter rainfall for " << month3 << ": ";
    cin >> rain3;

    double average = (rain1 + rain2 + rain3) / 3.0;

    cout << fixed << setprecision(2);
    cout << "The average rainfall for " << month1 << ", " << month2
         << ", and " << month3 << " is " << average << " inches.\n\n";
}

// =======================
// Question 2 - Block Volume
// =======================
void question2_blockVolume() {
    double width, length, height;

    cout << "\nQuestion 2 - Block Volume\n";

    cout << "Enter width: ";
    cin >> width;
    cout << "Enter length: ";
    cin >> length;
    cout << "Enter height: ";
    cin >> height;

    // Input validation
    if (width <= 0 || length <= 0 || height <= 0) {
        cout << "Error: No side can be zero or less.\n\n";
        return;
    }

    double volume = width * length * height;
    cout << fixed << setprecision(2);
    cout << "The volume of the block is " << volume << ".\n\n";
}

// =======================
// Question 3 - Roman Numerals
// =======================
void question3_romanNumeral() {
    int number;

    cout << "\nQuestion 3 - Roman Numerals\n";
    cout << "Enter a number (1 - 10): ";
    cin >> number;

    if (number < 1 || number > 10) {
        cout << "Error: Number must be between 1 and 10.\n\n";
        return;
    }

    string roman;
    switch (number) {
        case 1: roman = "I"; break;
        case 2: roman = "II"; break;
        case 3: roman = "III"; break;
        case 4: roman = "IV"; break;
        case 5: roman = "V"; break;
        case 6: roman = "VI"; break;
        case 7: roman = "VII"; break;
        case 8: roman = "VIII"; break;
        case 9: roman = "IX"; break;
        case 10: roman = "X"; break;
    }

    cout << "The Roman numeral version of " << number
         << " is " << roman << ".\n\n";
}

// =======================
// Question 4 - Geometry Calculator
// =======================
void question4_geometryCalculator() {
    int choice;
    cout << "\nQuestion 4 - Geometry Calculator\n";

    cout << "Geometry Calculator\n";
    cout << "1. Calculate the Area of a Circle\n";
    cout << "2. Calculate the Area of a Rectangle\n";
    cout << "3. Calculate the Area of a Triangle\n";
    cout << "4. Quit\n";
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    if (choice < 1 || choice > 4) {
        cout << "The valid choices are 1 through 4. Run the program again and select one of those.\n\n";
        return;
    }

    const double PI = 3.14159;
    double radius, length, width, base, height, area;

    switch (choice) {
        case 1:
            cout << "Enter the circle's radius: ";
            cin >> radius;
            if (radius < 0) {
                cout << "The radius cannot be less than zero.\n\n";
                return;
            }
            area = PI * radius * radius;
            cout << fixed << setprecision(5);
            cout << "The area is " << area << "\n\n";
            break;

        case 2:
            cout << "Enter the rectangle's length: ";
            cin >> length;
            cout << "Enter the rectangle's width: ";
            cin >> width;
            if (length < 0 || width < 0) {
                cout << "Only enter positive values for length and width.\n\n";
                return;
            }
            area = length * width;
            cout << fixed << setprecision(2);
            cout << "The area is " << area << "\n\n";
            break;

        case 3:
            cout << "Enter the triangle's base: ";
            cin >> base;
            cout << "Enter the triangle's height: ";
            cin >> height;
            if (base < 0 || height < 0) {
                cout << "Only enter positive values for base and height.\n\n";
                return;
            }
            area = base * height * 0.5;
            cout << fixed << setprecision(2);
            cout << "The area is " << area << "\n\n";
            break;

        case 4:
            cout << "Returning to main menu...\n\n";
            break;
    }
}

// =======================
// Question 5 - Distance Traveled
// =======================
void question5_distanceTraveled() {
    double speed;
    int hours;

    cout << "\nQuestion 5 - Distance Traveled\n";

    cout << "What is the speed of the vehicle in mph? ";
    cin >> speed;

    cout << "How many hours has it traveled? ";
    cin >> hours;

    if (speed < 0) {
        cout << "Error: Speed cannot be negative.\n\n";
        return;
    }
    if (hours < 1) {
        cout << "Error: Hours traveled must be at least 1.\n\n";
        return;
    }

    cout << "Hour\tDistance Traveled\n";
    cout << "--------------------------------\n";

    for (int h = 1; h <= hours; ++h) {
        double distance = speed * h;
        cout << setw(4) << h << "\t" << distance << "\n";
    }

    cout << "\n";
}