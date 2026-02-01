#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;

        if (n >= k && (n - k + 1) > 0 && (n - k + 1) % 2 == 1) {
            cout << "YES\n";
            vector<long long> result(k, 1);
            result[k - 1] = n - k + 1;
            for (long long i : result) {
                cout << i << " ";
            }
            cout << endl;
        } 
        else if (n >= 2 * k && (n - 2 * k + 2) > 0 && (n - 2 * k + 2) % 2 == 0) {
            cout << "YES\n";
            vector<long long> result(k, 2);
            result[k - 1] = n - 2 * k + 2;
            for (long long i : result) {
                cout << i << " ";
            }
            cout << endl;
        } 
        else {
            cout << "NO\n";
        }
    }
    return 0;
}
