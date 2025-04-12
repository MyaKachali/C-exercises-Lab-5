#include <iostream>
using namespace std;

int main() {
    int userInput;

    // Infinite loop that only breaks when input is valid
    while (true) {
        cout << "Please enter an integer value between 5 and 10: ";

        // Check if the input is an integer
        cin >> userInput;

        if (cin.fail()) {
            // If input is not an integer (e.g., a letter), clear and ignore it
            cin.clear(); // Clear error flag
            cin.ignore(1000, '\n'); // Ignore rest of invalid input
            cout << "Invalid input. Please enter a valid integer.\n";
            continue; // Restart loop
        }

        // Check if the input is in the correct range
        if (userInput >= 5 && userInput <= 10) {
            break; // Valid input! Break out of the loop
        } else {
            cout << "You entered " << userInput << ". Please enter a number between 5 and 10.\n";
        }
    }

    // Confirm the valid input after exiting the loop
    cout << "Your input value " << userInput << " has been accepted." << endl;

    return 0;
}