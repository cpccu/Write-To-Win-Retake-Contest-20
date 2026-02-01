#include <bits/stdc++.h>
using namespace std;

int fun(int a, int b)
 {
    if (a > b) return 1;
    if (a == b) return 0;
    return -1;
}

int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int a1, a2, b1, b2;
        cin >> a1 >> a2 >>b1>> b2 ;
        int ans = 0;
        
        if (fun(a1, b1) + fun(a2, b2) > 0) 
        {
            ans++;
        }
        if (fun(a1, b2) + fun(a2, b1) > 0)
         {
            ans++;
        }
        if (fun(a2, b1) + fun(a1, b2) > 0) 
        {
            ans++;
        }
        if (fun(a2, b2) + fun(a1, b1) > 0)
         {
            ans++;
        }
        cout << ans << endl;
    }
    return 0;
}
