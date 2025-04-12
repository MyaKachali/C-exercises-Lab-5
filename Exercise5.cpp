#include <iostream>
using namespace std;

// Function for triangle area
double calcTriangle(double base, double height) {
    return 0.5 * base * height;
}

// Function for rectangle area
double calcRectangle(double length, double width) {
    return length * width;
}

// Function for square area
double calcSquare(double side) {
    return side * side;
}

int main() {
    int choice;

    // Keep showing the menu until user wants to quit
    while (true) {
        // Show menu options
        cout << "\nChoose a shape to calculate the area:\n";
        cout << "1. Triangle\n";
        cout << "2. Rectangle\n";
        cout << "3. Square\n";
        cout << "4. Quit\n";
        cout << "Enter your choice (1-4): ";
        cin >> choice;

        // Check for invalid input
        if (cin.fail() || choice < 1 || choice > 4) {
            cin.clear(); // clear bad input flag
            cin.ignore(1000, '\n'); // throw away garbage input
            cout << "Oops, that wasn't a valid choice. Try again.\n";
            continue;
        }

        // Quit option
        if (choice == 4) {
            cout << "Exiting program. Goodbye!\n";
            break;
        }

        // Variables for user input
        double a, b;

        // Based on what they picked, ask for the right numbers
        switch (choice) {
            case 1:
                // Triangle selected
                cout << "Enter base of triangle: ";
                cin >> a;
                cout << "Enter height of triangle: ";
                cin >> b;
                cout << "Area of triangle: " << calcTriangle(a, b) << endl;
                break;

            case 2:
                // Rectangle selected
                cout << "Enter length of rectangle: ";
                cin >> a;
                cout << "Enter width of rectangle: ";
                cin >> b;
                cout << "Area of rectangle: " << calcRectangle(a, b) << endl;
                break;

            case 3:
                // Square selected
                cout << "Enter side length of square: ";
                cin >> a;
                cout << "Area of square: " << calcSquare(a) << endl;
                break;
        }
    }

    return 0;
}