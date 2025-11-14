#include <iostream> // Provides cout and cin for input and output.
using namespace std; // Allows use of standard C++ names without std::

string checkEven(int value) { // Function that receives a number and returns a message.
    if (value % 2 == 0) { // Check if the number is divisible by 2 (even).
        return "The provide number is even"; // Return message for even number.
    } else { // If not divisible by 2 (odd).
        return "The provide number is odd."; // Return message for odd number.
    }

}

int main() { // Main function where program execution starts. 
    int number; // Variable to store user's input number.
    cout << "Enter a integer number: "; // Ask user for a number.
    cin >> number; // Read the number entered by the user.

    string result = checkEven(number); // call the function and store returned message.
    cout << result << endl; // Print the returned message to the console.

     return 0; // End program successfully.
 }