#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> welfare(n);
    int max_welfare = 0;
    for (int i = 0; i < n; i++) {
        cin >> welfare[i];
        max_welfare = max(max_welfare, welfare[i]);
    }
    int total_cost = 0;
    for (int i = 0; i < n; i++) {
        total_cost += max_welfare - welfare[i];
    }
    cout << total_cost << endl;
    return 0;
}
