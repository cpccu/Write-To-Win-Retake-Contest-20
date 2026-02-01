#include <iostream>
#include <vector>
using namespace std;

vector<int> adj[2001]; // Adjacency list to represent the hierarchy
int max_depth = 0;

// Function to perform DFS and find the maximum depth
void dfs(int node, int depth) {
    max_depth = max(max_depth, depth);
    for (int child : adj[node]) {
        dfs(child, depth + 1);
    }
}

int main() {
    int n;
    cin >> n; // Number of employees

    vector<int> managers(n + 1);

    // Read input and build the hierarchy tree
    for (int i = 1; i <= n; i++) {
        cin >> managers[i];
        if (managers[i] != -1) {
            adj[managers[i]].push_back(i);
        }
    }

    // Perform DFS from every root node (employee without a manager)
    for (int i = 1; i <= n; i++) {
        if (managers[i] == -1) {
            dfs(i, 1); // Start depth at 1 for root employees
        }
    }

    cout << max_depth << endl; // Minimum groups needed
    return 0;
}
