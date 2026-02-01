#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n + 1);
        vector<int> b(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        for (int i = 1; i <= n; i++)
        {
            cin >> b[i];
        }
        vector<int> a1(n + n + 1);
        vector<int> b1(n + n + 1);
        int p = 1;
        for (int i = 2; i <= n; i++)
        {
            if (a[i] != a[i - 1])
            {
                a1[a[i - 1]] = max(a1[a[i - 1]], i - p);
                p = i;
            }
        }
        a1[a[n]] = max(a1[a[n]], n - p + 1);

        p = 1;
        for (int i = 2; i <= n; i++)
        {
            if (b[i] != b[i - 1])
            {
                b1[b[i - 1]] = max(b1[b[i - 1]], i - p);
                p = i;
            }
        }
        b1[b[n]] = max(b1[b[n]], n - p + 1);

        int ans = 0;
        for (int i = 1; i <= n + n; i++)
        {
            ans = max(ans, a1[i] + b1[i]);
        }

        cout << ans << '\n';
    }
}