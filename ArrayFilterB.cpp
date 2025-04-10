#include <iostream>
#include <string>
using namespace std;

int main() {
    // Declare and initialize the array with string elements
    string codes[] = {"B123", "C234", "A345", "C15", "B177", "G3003", "C235", "B179"};
    
    // Get the number of elements in the array
    int size = sizeof(codes) / sizeof(codes[0]);

    cout << "Elements that start with 'B':" << endl;

    // Loop through each element in the array
    for (int i = 0; i < size; i++) {
        // Check if the first character is 'B'
        if (codes[i][0] == 'B') {
            // Output the element
            cout << codes[i] << endl;
        }
    }

    return 0;
}