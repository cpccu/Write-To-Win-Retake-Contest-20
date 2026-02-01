#include <iostream>
#include <vector>
using namespace std;

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        int ans = 0;
        int mn = a[0] - x;
        int mx = a[0] + x;
        
        for (int i = 1; i < n; i++) {
            int nmn = max(a[i] - x, mn);
            int nmx = min(a[i] + x, mx);

            if (nmn > nmx) {
                ans++;
                mn = a[i] - x;
                mx = a[i] + x;
            } else {
                mn = nmn;
                mx = nmx;
            }
        }
        
        cout << ans << endl;
    }

    return 0;
}