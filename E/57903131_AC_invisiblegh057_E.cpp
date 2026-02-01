#include <bits/stdc++.h>
using namespace std;

int findDepth(vector<int> &managers, int employee)
{
    int depth = 0;
    while (employee != -1)
    {
        depth++;
        employee = managers[employee - 1];
    }
    return depth;
}

int main()
{
    int n;
    cin >> n;

    vector<int> managers(n);
    for (int i = 0; i < n; i++)
    {
        cin >> managers[i];
    }

    int maxDepth = 0;
    for (int i = 1; i <= n; i++)
    {
        maxDepth = max(maxDepth, findDepth(managers, i));
    }

    cout << maxDepth << endl;

    return 0;
}
