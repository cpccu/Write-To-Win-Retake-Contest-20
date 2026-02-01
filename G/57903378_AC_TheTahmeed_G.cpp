#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    int zero = 0, one = 0;

    // Count the number of 0's and 1's
    for (char c : s)
    {
        if (c == '0')
            zero++;
        else if (c == '1')
            one++;
    }

    // The result is determined by the smaller count and its parity
    int ans = min(zero, one);
    if (ans % 2 == 1)
        cout << "DA" << endl;
    else
        cout << "NET" << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
