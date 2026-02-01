#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define fst                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long 
#define ld long double 
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
    ll n,x;
    cin >> n >> x;
    vector<ll> a(n);
    for(ll i=0;i<n;i++) cin >> a[i];
    ll mn = INT_MAX, mx = INT_MIN,ans = 0;
    for(ll i=0;i<n;i++){
        mn = min(mn,a[i]);
        mx = max(mx,a[i]);
        ll val = (mx + mn) / 2 + ((mx + mn) % 2);
        if(abs(val - mn) > x || abs(val - mx) > x){
            ans++;
            mn = a[i];
            mx = a[i];
        }
    }
    cout << ans << endl;
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