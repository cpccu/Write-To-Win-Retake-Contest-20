#include <iostream>
#include <vector>
using namespace std;

int lvl(vector<int>&a,int i) {
    int ans=0;
    while (i!=-1) {
        i=a[i];
        ans++;
    }
    return ans;
}

int main() {
    int n;
    cin>>n;
    
    vector<int>a(n + 1);
    for(int i=1;i<=n;i++) {
        cin>>a[i];
    }

    int amx=0;
    for (int i = 1; i <= n; i++) {
        amx=max(amx, lvl(a,i));
    }
    cout <<amx<< endl;
    
    return 0;
}