#include <iostream>   // For input/output
#include <cstdlib>    // For rand() and srand()
#include <ctime>      // For time() to seed rand()
using namespace std;

int main() {
    // Seed the random number generator with current time
    srand(time(0)); 

    // Generate a random number from 0 to 11
    int daysUntilExpiration = rand() % 12;

    // Show the randomly generated number (for testing)
    cout << "Days until expiration: " << daysUntilExpiration << endl;

    // Use a switch to determine the message to display
    switch (daysUntilExpiration) {
        case 0:
            // Subscription expired
            cout << "Your subscription has expired." << endl;
            break;

        case 1:
            // Only one day left
            cout << "Your subscription expires within a day!\nRenew now and save 20%!" << endl;
            break;

        case 2:
        case 3:
        case 4:
        case 5:
            // Between 2 and 5 days left
            cout << "Your subscription expires in " << daysUntilExpiration 
                 << " days.\nRenew now and save 10%!" << endl;
            break;

        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
            // Between 6 and 10 days left
            cout << "Your subscription will expire soon. Renew now!" << endl;
            break;

        case 11:
            // More than 10 days left (exactly 11)
            cout << "You have an active subscription." << endl;
            break;

        default:
            // In case the random value is somehow out of range
            cout << "Invalid days value." << endl;
            break;
    }

    return 0;
}