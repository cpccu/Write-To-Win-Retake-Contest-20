#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        long long x;
        cin >> n >> x;

        vector<long long> a(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        long long minAllowed = a[0] - x;
        long long maxAllowed = a[0] + x;

        int changes = 0;

        for (int i = 1; i < n; ++i)
        {

            minAllowed = max(minAllowed, a[i] - x);
            maxAllowed = min(maxAllowed, a[i] + x);

            if (minAllowed > maxAllowed)
            {
                ++changes;
                minAllowed = a[i] - x;
                maxAllowed = a[i] + x;
            }
        }

        cout << changes << endl;
    }
    return 0;
}
