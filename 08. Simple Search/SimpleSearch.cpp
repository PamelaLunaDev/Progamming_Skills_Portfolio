#include <iostream> // Provides cout and cin for input and output.
using namespace std;

int main() {

    // Create a fixed array of names with 6 strings.
    string names[6] = {"Jake", "Zac", "Ian", "Ron", "Sam", "Dave"};
    
    string searchName = "Sam";  // The target name we are searching for is "Sam".

    // This variable will store the index where the name is found.
    // Start with -1 to show that nothing was found yet.
    int foundIndex = -1; 

    // Loop through all elements of the array.
    // i goes from 0 to 5 (because the array has 6 elements).
    for (int i = 0; i < 6; i++) {

        if (names[i] == searchName) { // Compare each element with the target "Sam".
            foundIndex = i; // Store the index where it was found
            break; // Stop the loop because we found the name.
        }
    }

    if (foundIndex == -1) { // After the loop, check if the name is found.
        cout << "The name '" << searchName << "' was not found.\n"; // -1 means no match was found. 
    } else {
        cout << "The name '" << searchName << "' was found!\n"; // If found, print both index styles.
        cout << "Position in the list (1-based): " << foundIndex + 1  << "\n"; // Human-friendly position (starts at 1).
        cout << "Array index (0-based): " << foundIndex << "\n"; // Programmer index (starts at 0).
    }


    return 0; // Program ends successfully.
}