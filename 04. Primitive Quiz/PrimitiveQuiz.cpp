#include <iostream> // Provides cout, cin.
#include <string> // Provides std::string and getline
using namespace std;

int main() {
    int score = 0; // Keeps track of number of correct answers.
    string answer; // Store the user's answer as a string.

    // Question 1:
    cout << "1) What is the capital of France?\n";
    getline(cin, answer); // Read the full line.
    
    // Convert answer to lowercase for flexibility.
    for (auto &c : answer) c = tolower(c);
    if (answer == "paris") {
        cout << "Correct! Paris is capital of France." << endl;
        score++;
    }else {
        cout << "Incorrect! The correct answer is Paris." << endl;
    } 
    cout << endl;


    // Question 2:
    cout << "1) What is the capital of Brazil?\n";
    getline(cin, answer); // Read the full line.
    
    // Convert answer to lowercase again.
    for (auto &c : answer) c = tolower(c);
    if (answer == "brasilia") {
        cout << "Correct! Brasilia is capital of Brazil." << endl;
        score++;
    }else {
        cout << "Incorrect! The correct answer is Brasilia." << endl;
    } 
    cout << endl;

    cout << "Your final score is: " << score << "/2\n";

    return 0;

}