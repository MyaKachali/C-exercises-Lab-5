#include <iostream>
#include <cstdlib>  // for rand and srand
#include <ctime>    // for time (used in seeding)
using namespace std;

int main() {
    srand(time(0)); // Seed the random number generator with the current time

    int daysUntilExpiration = rand() % 12; // Random number between 0 and 11
    cout << "Days until expiration: " << daysUntilExpiration << endl;

    if (daysUntilExpiration == 0) {
        // If subscription has expired
        cout << "Your subscription has expired." << endl;
    }

    if (daysUntilExpiration == 1) {
        // If 1 day left
        cout << "Your subscription expires within a day!\nRenew now and save 20%!" << endl;
    }

    if (daysUntilExpiration <= 5 && daysUntilExpiration > 1) {
        // If between 2 and 5 days left
        cout << "Your subscription expires in " << daysUntilExpiration << " days.\nRenew now and save 10%!" << endl;
    }

    if (daysUntilExpiration <= 10 && daysUntilExpiration > 5) {
        // If between 6 and 10 days left
        cout << "Your subscription will expire soon. Renew now!" << endl;
    }

    if (daysUntilExpiration > 10) {
        // If more than 10 days left (i.e., 11)
        cout << "You have an active subscription." << endl;
    }

    return 0;
}
