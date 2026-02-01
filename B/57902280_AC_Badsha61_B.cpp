#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n; // Read the number of citizens
    
    vector<int> welfare(n);
    for (int i = 0; i < n; ++i) {
        cin >> welfare[i]; // Read the welfare of each citizen
    }
    
    // Find the maximum welfare
    int max_welfare = *max_element(welfare.begin(), welfare.end());
    
    // Calculate the total cost to equalize welfare
    long long total_cost = 0;
    for (int i = 0; i < n; ++i) {
        total_cost += (max_welfare - welfare[i]); // Calculate the difference
    }
    
    cout << total_cost << '\n'; // Output the total cost
    
    return 0;
}