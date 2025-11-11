#include <iostream>
#include <string>
using namespace std;

    int main() {
        string CorrectPassword = "luna";
        string attempt = "";
        int tries = 0;
        
        cout << "Starting brute force attack...\n";

        for (char c1 = 'a'; c1 <= 'z'; c1++) {
            for (char c2 = 'a'; c2 <= 'z'; c2++){
                for (char c3 = 'a'; c3 <= 'z'; c3++){
                    for (char c4 = 'a'; c4 <= 'z'; c4++){

                    attempt = "";
                    attempt += c1;
                    attempt += c2;
                    attempt += c3;
                    attempt += c4;
                    tries++;

                    cout << "Trying: " << attempt << endl;

                    if (attempt == CorrectPassword) {
                        cout << "Password Found: " << attempt << endl;
                        cout << "Total attempts: " << tries << endl;

                        return 0;
                      }
                    }
                }
            }
        }

        cout << "Password Not Found.\n";
        return 0;
    }