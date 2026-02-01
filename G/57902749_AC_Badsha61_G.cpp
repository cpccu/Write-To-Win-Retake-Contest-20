#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t; // Read number of test cases
    while (t--) {
        string s;
        cin >> s; // Read the binary string
        int count0 = 0, count1 = 0;

        // Count the number of 0's and 1's
        for (char c : s) {
            if (c == '0') {
                count0++;
            } else {
                count1++;
            }
        }

        // Determine the number of moves
        int moves = min(count0, count1);

        // If the number of moves is odd, Alice wins; if even, Bob wins
        if (moves % 2 == 1) {
            cout << "DA\n"; // Alice wins
        } else {
            cout << "NET\n"; // Bob wins
        }
    }

    return 0;
}