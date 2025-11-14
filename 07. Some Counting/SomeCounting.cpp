#include <iostream> // Provides cout for printing to the console.
using namespace std; // Allows using cout and endl without std::

// This program demostrates several counting tasks using for loops.
// Each loop prints a diferent range using increments or decrements. 

int main() {
// 1- Count up from 0 to 50 in increments of 1.
// This loop starts at 0 and increases by until it reaches 50.
cout << "Counting from 0 to 50:\n";
for (int i = 0; i <= 50; i++) {
    cout << i << " ";
}
cout << "\n\n";

// 2- Count down from 50 to 0 in decrements of 1.
// This loop starts at 50 and decreases by 1 until reaches 0.
cout << "Counting down from 50 to 0:\n";
for (int i = 50; i >= 0; i--) {
    cout << i << " ";
}
cout << "\n\n";

// 3- Count up from 30 to 50 in increments of 1.
// This loop starts at 30 and increases by 1 until it reaches 50. 
cout << "Counting from 30 to 50:\n";
for (int i = 30; i <= 50; i++) {
    cout << i << " ";
}
cout << "\n\n";

// 4- Count down from 50 to 10 in decrements of 2.
// This loop starts at 50 and decreases by 2 each time.
cout << "Counting down 50 to 10:\n";
for (int i =50; i >= 10; i -=2) {
    cout << i << " ";
}
cout << "\n\n";

// 5- Count up from 100 to 200 in increments of 5.
// This loop starts at 100 and increases by 5 until it reaches 200. 
cout << "Counting from 100 to 200 in steps of 5:\n";
for (int i = 100; i <= 200; i += 5) {
    cout << i << " ";
}
cout << "\n\n";

    return 0; // Program ends successfully.
}