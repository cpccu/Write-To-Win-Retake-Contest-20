#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t; // Number of test cases

    while (t--) {
        int a1, a2, b1, b2;
        cin >> a1 >> a2 >> b1 >> b2; // Reading input

        // All possible game outcomes
        int suneetWins = 0;

        // First combination: Suneet picks a1 first, Slavic picks b1 first
        int suneetRounds = (a1 > b1) + (a2 > b2);
        if (suneetRounds == 2) suneetWins++; // Suneet wins both rounds

        // Second combination: Suneet picks a1 first, Slavic picks b2 first
        suneetRounds = (a1 > b2) + (a2 > b1);
        if (suneetRounds == 2) suneetWins++; 

        // Third combination: Suneet picks a2 first, Slavic picks b1 first
        suneetRounds = (a2 > b1) + (a1 > b2);
        if (suneetRounds == 2) suneetWins++; 

        // Fourth combination: Suneet picks a2 first, Slavic picks b2 first
        suneetRounds = (a2 > b2) + (a1 > b1);
        if (suneetRounds == 2) suneetWins++;

        cout << suneetWins << endl;
    }

    return 0;
}
