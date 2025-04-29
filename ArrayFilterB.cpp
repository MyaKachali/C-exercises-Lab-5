#include <iostream>
#include <string>
using namespace std;

int main() {
    // Initialize array exactly as given in exercise
    string elements[8] = {"B123", "C234", "A345", "C15", "B177", "G3003", "C235", "B179"};
    
    // Simple for loop checking each element
    for (int i = 0; i < 8; i++) {
        // Check if first character is 'B'
        if (elements[i][0] == 'B') {
            // Print the element if it starts with B
            cout << elements[i] << endl;
        }
    }
    
    return 0;
}
