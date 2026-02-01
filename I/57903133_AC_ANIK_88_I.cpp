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
    ll n;
    cin >> n;
    vector<ll> a(n),b(n);
    map<ll,ll> mp,mp2;
    for(ll i=0;i<n;i++) cin >> a[i];
    for(ll i=0;i<n;i++) cin >> b[i];
    ll c = mp[a[0]] = 1;
    for(ll i=1;i<n;i++){
        if(a[i] == a[i-1]){
            c++;
            mp[a[i]] = max(c,mp[a[i]]);
        }
        else{
            c = 1;
            mp[a[i]] = max(mp[a[i]],c);
        }
    }
    mp2[b[0]] = c = 1;
    for(ll i=1;i<n;i++){
        if(b[i] == b[i-1]){
            c++;
            mp2[b[i]] = max(mp2[b[i]],c);
        }
        else{
            c = 1;
            mp2[b[i]] = max(mp2[b[i]],c);
        }
    }
    ll mx = 0;
    for(auto [x,y] : mp) mx = max(mx,y+mp2[x]);
    for(auto [x,y] : mp2) mx = max(mx,y);
    cout << mx << endl;
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