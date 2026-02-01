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
    int n,k;
    cin >> n >> k;
    if((n & 1) && (k & 1) || !(n & 1) && !(k & 1)){
        if(k > n) no 
        else{
            yes for(int i=1;i<k;i++) cout << "1 ";
            cout << n - (k - 1) << endl;
        }
    }
    else if(!(n & 1) && (k & 1)){
        if((k * 2) > n) no 
        else{
            yes for(int i=1;i<k;i++) cout << "2 ";
            cout << n - ((k - 1) * 2) << endl;
        }
    }
    else no 
}
e4{
    fst int t = 1;
    cin >> t;
    for (int i=1;i<=t;++i){
        // cout << "Case " << i << ": ";
        Void();
    }
    return 0;
}