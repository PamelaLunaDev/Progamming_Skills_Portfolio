#include <iostream> // Provides cout and cin for input and output.
using namespace std; // Allows use of standard C++ names without std::

string checkEven(int value) { // Function that receives a number and returns a message.
    if (value % 2 == 0) { // Check if the number is divisible by 2 (even).
        return "The provided number is even"; // Return message for an even number.
    } else { // If not divisible by 2 (odd).
        return "The provided number is odd."; // Return message for an odd number.
    }

}

int main() { // Main function where program execution starts. 
    int number; // Variable to store the user's input number.
    cout << "Enter an integer number: "; // Ask the user for a number.
    cin >> number; // Read the number entered by the user.

    string result = checkEven(number); // Call the function and store the returned message.
    cout << result << endl; // Print the returned message to the console.

    return 0; // End program successfully.
}