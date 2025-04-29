#include <iostream>
#include <cstdlib>  // For rand() and srand()
#include <ctime>    // For time()

using namespace std;

int main() {
    // Seed the random number generator
    srand(time(0));

    // Generate random number between 0 and 11
    int daysUntilExpiration = rand() % 12;

    // Output the appropriate message based on conditions
    if (daysUntilExpiration <= 10) {
        if (daysUntilExpiration <= 5) {
            if (daysUntilExpiration == 1) {
                cout << "Your subscription expires within a day!\n"
                     << "Renew now and save 20%!" << endl;
            }
            else if (daysUntilExpiration == 0) {
                cout << "Your subscription has expired." << endl;
            }
            else {
                cout << "Your subscription expires in " << daysUntilExpiration << " days\n"
                     << "Renew now and save 10%!" << endl;
            }
        }
        else {
            cout << "Your subscription will expire soon. Renew now!" << endl;
        }
    }
    else {
        cout << "You have an active subscription." << endl;
    }

    return 0;
}




    

    
