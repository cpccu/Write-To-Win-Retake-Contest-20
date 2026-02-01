#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define fst                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long 
#define endl '\n'
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a / gcd(a, b)) * b)
#define e4 signed main() 
#define Infinite void
#define PI 2.0 * acos(0.0)
using namespace std;
#ifdef LOKAL
#include "Debug_Template.h"
#else
#define HERE
#define debug(args...) 
#endif 
using namespace __gnu_pbds;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag,tree_order_statistics_node_update>;
const ll mod = 1e9 + 7;

Infinite Void() {
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    int cnt = 0;
    if(a > c && b >= d) cnt++;
    else if(a >= c && b > d) cnt++;
    if(a > d && b >= c) cnt++;
    else if(a >= d && b > c) cnt++;
    if(b > c && a >= d) cnt++;
    else if(b >= c && a > d) cnt++;
    if(b > d && a >= c) cnt++;
    else if(b >= d && a > c) cnt++;
    cout << cnt << endl;
}
e4{
    fst ll t = 1;
    cin >> t;
    for (ll i=1;i<=t;++i){
        // cout << "Case " << i << ": ";
        Void();
    }
    return 0;
}