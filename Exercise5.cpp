#include <iostream>
using namespace std;

int main() {
    int choice;
    
    while (true) {
        // Display menu
        cout << "Please select the area of the shape to calculate\n";
        cout << "1. Square\n";
        cout << "2. Rectangle\n";
        cout << "3. Triangle\n";
        cout << "4. Quit Program\n";
        cout << "Enter selection: ";
        
        cin >> choice;
        
        if (choice == 1) {
            // Square
            double side;
            cout << "Enter side length: ";
            cin >> side;
            cout << "Area: " << side * side << endl;
        }
        else if (choice == 2) {
            // Rectangle
            double length, width;
            cout << "Enter length: ";
            cin >> length;
            cout << "Enter width: ";
            cin >> width;
            cout << "Area: " << length * width << endl;
        }
        else if (choice == 3) {
            // Triangle
            double base, height;
            cout << "Enter base: ";
            cin >> base;
            cout << "Enter height: ";
            cin >> height;
            cout << "Area: " << 0.5 * base * height << endl;
        }
        else if (choice == 4) {
            // Quit
            break;
        }
        else {
            // Invalid input
            cout << "Your input was: " << choice << " which is an invalid input\n";
            cout << "Please enter a valid input!!!\n";
        }
    }
    
    return 0;
}
