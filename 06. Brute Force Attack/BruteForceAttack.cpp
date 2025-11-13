#include <iostream> // Include library for input and output.
using namespace std;

    int main() {
        const int password = 12345; // Correct password stored as a constant.
        int attempt; // Variable to store the user's input.
        bool access = false; //Track access status.
        
        cout << "=== SECURITY SYSTEM ===" << endl;
        cout << "You have 5 attempts to enter the correct password." << endl;
        cout << "-------------------------" << endl;
        
        // Using a WHILE loop.
        int tries = 0;
        while (tries < 5 && !access) { // Loop run while attempts < 5 and access is false.
            cout << "Enter yor password attempt " 
            << (tries + 1) << " of 5: "; // Show attempts number.
            cin >> attempt; // Read user's password input.
            
            if (attempt == password) { // Check if input matches correct password.
                cout << "Access granted! Welcome to the Security Area." << endl; // Success.
                access = true;
            } else { // If incorrect password
                cout << "Incorrect password. Try again: " << endl; // Error message.
            }
            tries++; // Increase the number of attempts.
        }     

        // If user falls 5 times.
        if (!access) { // Run only if access is still false after the loop.
            cout << "Too many failed attempts. The authorities have been alerted!" << endl;
        }
        return 0; // Program ends successfully.
    }