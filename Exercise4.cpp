#include <iostream>
using namespace std;

int main() {
    int userNumber;
    bool isValid = false;

    cout << "Enter an integer value between 5 and 10\n";

    while (!isValid) {
        // Check if input is an integer
        if (cin >> userNumber) {
            // Check if number is in range
            if (userNumber >= 5 && userNumber <= 10) {
                isValid = true;
            } else {
                cout << "You entered " << userNumber 
                     << ". Please enter a number between 5 and 10.\n";
            }
        } 
        // Handle non-integer input
        else {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Sorry, you entered an invalid number, please try again\n";
        }
    }

    cout << "Your input value(" << userNumber << ") has been accepted.\n";
    return 0;
}
