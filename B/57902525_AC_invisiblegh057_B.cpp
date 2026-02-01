#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int max_welfare = *max_element(a.begin(), a.end());
    int total_cost = 0;

    for (int i = 0; i < n; i++)
    {
        total_cost += (max_welfare - a[i]);
    }

    cout << total_cost << endl;
    return 0;
}