#include <iostream> // Provides cout and cin for input and output.
using namespace std; // Allows using cout and cin without writing std::

// Main function, the starting point of the program. 
int main() {

    int month; // Stores the month number typed by the user.

    cout << "Enter the month number (1 to 12): "; // Ask the user for a month.
    cin >> month; //Read the number typed.

    // Switch the value of 'month' and selects the correct case.
    switch (month) {
    // These months all have 31 days.
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        cout << "31\n"; // Print number of days.
        break; // Exit this case and end the switch.

    // These months all have 30 days.
    case 4:
    case 6:
    case 9:
    case 11:
        cout << "30\n";
        break;
    
    // February (not considering leap years).    
    case 2:
        cout << "28\n";
        break;

    // If the user types a number outside 1 to 12.
    default:
        cout << "Invalid month\n";
        break;
    }

    return 0; // Program ends sucessfully.
}