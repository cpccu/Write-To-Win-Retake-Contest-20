#include <bits/stdc++.h>
using namespace std;

int calculateDepth(int employee, const vector<int>& manager, vector<int>& depth) {
    if (depth[employee] != -1) return depth[employee];
    if (manager[employee] == -1) return depth[employee] = 1;
    return depth[employee] = 1 + calculateDepth(manager[employee] - 1, manager, depth);
}

int main() {
    int n;
    cin >> n;
    vector<int> manager(n);
    for (int i = 0; i < n; i++) cin >> manager[i];
    vector<int> depth(n, -1);
    int maxGroups = 0;
    for (int i = 0; i < n; i++) {
        maxGroups = max(maxGroups, calculateDepth(i, manager, depth));
    }
    cout << maxGroups << endl;
    return 0;
}
