#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int a1, a2, b1, b2;
        cin >> a1 >> a2 >> b1 >> b2;

        int win_count = 0;
        
        if ((a1 > b1) + (a1 > b2) > 1) win_count++;
        if ((a1 > b1) + (a2 > b2) > 1) win_count++;
        if ((a2 > b1) + (a1 > b2) > 1) win_count++;
        if ((a2 > b1) + (a2 > b2) > 1) win_count++;
        
        cout << win_count << endl;
    }

    return 0;
}
