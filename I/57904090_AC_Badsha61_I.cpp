#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

void solve() {
    int t;
    cin >> t;  // Number of test cases

    while (t--) {
        int n;
        cin >> n; // Length of arrays a and b
        
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];

        unordered_map<int, int> max_count_a, max_count_b;

        // Find longest contiguous subarray in a
        int count = 1;
        for (int i = 1; i < n; i++) {
            if (a[i] == a[i - 1])
                count++;
            else
                count = 1;
            max_count_a[a[i]] = max(max_count_a[a[i]], count);
        }
        max_count_a[a[0]] = max(max_count_a[a[0]], 1); // First element count

        // Find longest contiguous subarray in b
        count = 1;
        for (int i = 1; i < n; i++) {
            if (b[i] == b[i - 1])
                count++;
            else
                count = 1;
            max_count_b[b[i]] = max(max_count_b[b[i]], count);
        }
        max_count_b[b[0]] = max(max_count_b[b[0]], 1); // First element count

        // Find the max length of any number by summing occurrences in a and b
        int max_result = 1;
        for (int i = 1; i <= 2 * n; i++) {
            int total = max_count_a[i] + max_count_b[i]; // Sum longest streak from both arrays
            max_result = max(max_result, total);
        }

        cout << max_result << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
