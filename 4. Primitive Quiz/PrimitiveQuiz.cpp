#include <iostream>
#include <cctype> // tolower (Converts uppercase letters to lowercase.)
using namespace std;

int main() {
    int score = 0;
    char ans;

    cout << "1) Whith type stores whole numbers (no decimal)?\n";
    cout << " a) int\n";
    cout << " b) double\n";
    cout << " c) char\n";
    cout << "You answer (a/b/c): ";
    cin >> ans;
    ans = tolower(ans);
    if (ans == 'a') {
        score++;
    }
    cout << "\n";

    cout << "2) Whith type stores a single character?\n";
    cout << " a) bool\n";
    cout << " b) char\n";
    cout << " c) double\n";
    cout << "You answer (a/b/c): ";
    cin >> ans;
    ans = tolower(ans);
    if (ans == 'b') {
        score++;
    }
    cout << "\n";

    cout << "3) Whith type can store decimal numbers?\n";
    cout << " a) int\n";
    cout << " b) bool\n";
    cout << " c) double\n";
    cout << "You answer (a/b/c): ";
    cin >> ans;
    ans = tolower(ans);
    if (ans == 'c') {
        score++;
    }
    cout << "\n";

    cout << "Score: " << score << "/3\n";

    return 0;

}