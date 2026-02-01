#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];
        
        unordered_map<int, vector<int>> positions;
        
        for (int i = 0; i < n; i++) {
            positions[a[i]].push_back(i);
        }
        
        for (int i = 0; i < n; i++) {
            positions[b[i]].push_back(i + n);
        }
        
        int max_length = 1;
        
        for (auto& entry : positions) {
            vector<int>& pos = entry.second;
            sort(pos.begin(), pos.end());
            
            int current_length = 1;
            for (int i = 1; i < pos.size(); i++) {
                if (pos[i] == pos[i - 1] + 1) {
                    current_length++;
                } else {
                    max_length = max(max_length, current_length);
                    current_length = 1;
                }
            }
            max_length = max(max_length, current_length);
        }
        
        cout << max_length << endl;
    }
    
    return 0;
}
