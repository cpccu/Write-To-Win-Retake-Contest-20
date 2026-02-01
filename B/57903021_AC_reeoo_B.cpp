#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin>>n;

    vector<int>a(n);
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }

    int amax=a[0];
    for(int i=1;i<n;i++){
        if (a[i]>amax){
            amax=a[i];
        }
    }

    int ans = 0;
    for(int i=0;i<n;i++) {
        ans=ans+(amax-a[i]);
    }

    cout<<ans<< endl;

    return 0;
}