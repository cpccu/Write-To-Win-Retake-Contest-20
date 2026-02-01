#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t; // Number of test cases
    
    while (t--) {
        int rating;
        cin >> rating; // Read the rating for the current test case

        if (rating >= 1900) {
            cout << "Division 1" << endl;
        } else if (rating >= 1600) {
            cout << "Division 2" << endl;
        } else if (rating >= 1400) {
            cout << "Division 3" << endl;
        } else {
            cout << "Division 4" << endl;
        }
    }
    
    return 0;
}
