// CSC 134
// M5LAB2 - Area of a Rectangle
// Toni Bethune
// 11/10/2025

#include <iostream>
using namespace std;

// Function Prototypes
double getLength();
double getWidth();
double getArea(double length, double width);
void displayData(double length, double width, double area);

int main()
{
    // This program calculates the area of a rectangle.
   
    double length,    // The rectangle's length
           width,     // The rectangle's width
           area;      // The rectangle's area
          
    // Get the rectangle's length.
    length = getLength();
   
    // Get the rectangle's width.
    width = getWidth();   // <-- missing semicolon fixed
   
    // Get the rectangle's area.
    area = getArea(length, width);   // <-- area spelled wrong + missing arguments fixed
   
    // Display the rectangle's data.
    displayData(length, width, area);
          
    return 0;
}

//***************************************************
// getLength - Asks the user for the length         *
//***************************************************
double getLength() {
    double length;
    cout << "Enter the rectangle's length: ";
    cin >> length;
    return length;
}

//***************************************************
// getWidth - Asks the user for the width           *
//***************************************************
double getWidth() {
    double width;
    cout << "Enter the rectangle's width: ";
    cin >> width;
    return width;
}

//***************************************************
// getArea - Calculates the area using L * W        *
//***************************************************
double getArea(double length, double width) {
    return length * width;
}

//***************************************************
// displayData - Shows length, width, and area      *
//***************************************************
void displayData(double length, double width, double area) {
    cout << "\n--- Rectangle Data ---\n";
    cout << "Length: " << length << endl;
    cout << "Width : " << width  << endl;
    cout << "Area  : " << area   << endl;
    cout << "----------------------\n";
}