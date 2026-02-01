#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t; // Read number of test cases
    while (t--) {
        int n;
        cin >> n; // Read the length of the arrays
        vector<int> a(n), b(n);
        unordered_map<int, int> count; // To count occurrences of each number

        // Read array a and count occurrences
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            count[a[i]]++;
        }

        // Read array b and count occurrences
        for (int i = 0; i < n; ++i) {
            cin >> b[i];
            count[b[i]]++;
        }

        // Find the maximum length of contiguous segments
        int max_length = 0;
        for (const auto& entry : count) {
            max_length = max(max_length, entry.second);
        }

        cout << max_length << endl; // Output the result for this test case
    }

    return 0;
}