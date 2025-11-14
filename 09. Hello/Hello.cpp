#include <iostream> // Allows the use of cout and cin
using namespace std; //Avoids writing std::cout

// Void function because it does not return a value.
void hello() { // Function declaration.
    cout << "Hello" << endl; // prints Hello to the terminal.
}

int main() {
    hello(); // Calls the function

    return 0;
}