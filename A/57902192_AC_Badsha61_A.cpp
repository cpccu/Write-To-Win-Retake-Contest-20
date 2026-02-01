#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n, x;
        cin >> n >> x;
        
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        
        // Initialize the first range
        int min_v = a[0] - x;
        int max_v = a[0] + x;
        int changes = 0;
        
        for (int i = 1; i < n; ++i) {
            int new_min_v = a[i] - x;
            int new_max_v = a[i] + x;
            
            // Check if the current range overlaps with the new range
            if (new_max_v < min_v || new_min_v > max_v) {
                // No overlap, we need to change v
                changes++;
                // Update the current range to the new range
                min_v = new_min_v;
                max_v = new_max_v;
            } else {
                // Update the current range to the intersection
                min_v = max(min_v, new_min_v);
                max_v = min(max_v, new_max_v);
            }
        }
        
        cout << changes << '\n';
    }
    
    return 0;
}