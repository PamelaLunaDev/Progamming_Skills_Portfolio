#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter a positive intenger N (e.g., 10): ";
    cin >> N;

    if (N <= 0) {
        cout << "Please, enter a positive number greater than zero.\n";
        return 0;
    }

    int CountEven = 0;
    int CountOdd = 0;
    int sum = 0;

    for (int i = 1; i <= N; i++) {
        sum += i;
        if (i % 2 == 0){
            CountEven++;
        } else {
            CountOdd++;
        }
    }

    double average = (double)sum / N;

    cout << "Results from 1 to a " << N << ":\n";
    cout << "Sum: " << sum << "\n";
    cout << "Average: " << average << "\n";
    cout << "Quantity of even numbers: " << CountEven << "\n";
    cout << "Quantity of odd numbers: " << CountOdd << "\n";

    return 0;
}