#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "How many numbers do you want to type? ";
    cin >> n;

    if (n <= 0) {
        cout << "Please, enter a number greater than zero.\n";
        return 0;
    }
    vector<int> nums;
    nums.reserve(n);
    cout << "Type " << n << " numbers (Press enter after each number):\n";
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        nums.push_back(x);
    }
    int target;
    cout << "Which number are you looking for? ";
    cin >> target;

    int foundIndex = -1;
    for (int i = 0; i < n; i++) {
        if (nums[i] == target) {
            foundIndex = i;
            break;
        }
    }
    if (foundIndex == -1) {
        cout << "Number not found.\n";
    } else {
        cout << "Number found in position (1-based): " << (foundIndex + 1) << "\n";
        cout <<"Index 0-based (programmer): " << foundIndex << "\n";
    }
    return 0;
}