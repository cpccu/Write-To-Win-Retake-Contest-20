#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t; // Read the number of test cases
    
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c; // Read the three digits
        
        // Determine the unique digit
        if (a == b) {
            cout << c << '\n'; // c is unique
        } else if (a == c) {
            cout << b << '\n'; // b is unique
        } else {
            cout << a << '\n'; // a is unique
        }
    }
    
    return 0;
}