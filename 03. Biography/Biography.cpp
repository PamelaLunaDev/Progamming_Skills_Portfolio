#include <iostream> // Include iostream library for printing text
#include <string> // Allow use of cout without writing std::cout
using namespace std;

int main() {
    string name;
    int age;
    string hometown;

    // Ask the user for their full name.
    cout << "Enter your full name: ";
    getline(cin, name); // Getline allows first + last name    
   
    // Ask the user for hometown.
    cout << "Enter your hometown: ";
    getline(cin, hometown);
   
   // Ask for age.
    cout << "Enter your age: ";
    cin >> age;

    // Validate if the age imput is invalid (user typed text)
    if (cin.fail()) {
        cin.clear(); // Clear the error state.
        cin.ignore(1000, '\n'); // Discard invalid imput.
        cout << "Invalid age entered. Please restart and enter a number.\n";
        return 0;
    }

    // Final output - one single cout
    cout << "\nYour Biography:\n"
         << name << "\n"
         << hometown << "\n"
         << age << "\n";
    return 0;
}