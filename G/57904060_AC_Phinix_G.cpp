#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        
        int ones = 0, zeros = 0;
        for (char c : s) {
            if (c == '1') {
                ones++;
            } else {
                zeros++;
            }
        }
        
        int moves = min(ones, zeros);
        
        if (moves % 2 == 1) {
            cout << "DA" << endl;
        } else {
            cout << "NET" << endl;
        }
    }
    return 0;
}
