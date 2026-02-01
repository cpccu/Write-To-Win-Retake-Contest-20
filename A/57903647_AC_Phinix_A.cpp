#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        long long x;
        cin >> n >> x;

        vector<long long> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        long long min_range = a[0] - x, max_range = a[0] + x;
        int changes = 0;

        for (int i = 1; i < n; ++i) {
            long long new_min = a[i] - x;
            long long new_max = a[i] + x;

            if (new_min > max_range || new_max < min_range) {
                ++changes;
                min_range = new_min;
                max_range = new_max;
            } else {
                min_range = max(min_range, new_min);
                max_range = min(max_range, new_max);
            }
        }

        cout << changes << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}