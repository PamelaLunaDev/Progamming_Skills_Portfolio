#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    cout << "What is your full name? ";
    getline(cin, name);
    cout << "Hello, " << name << "! Nice to meet you!" << endl;

    return 0;
}