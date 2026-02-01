#include <iostream>
using namespace std;

void st(int& x, int& y) {
    if (x > y) {
        swap(x,y);
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a[2], b[2];
        cin >> a[0] >> a[1] >> b[0] >> b[1];

        st(a[0], a[1]);
        st(b[0], b[1]);

        int ans=0;

        if (a[0]>b[0] && a[1]>b[1]) ans++;
        if (a[0]>b[1] && a[1]>b[0]) ans++;
        if (a[1]>b[0] && a[0]>b[1]) ans++;
        if (a[1]>b[1] && a[0]>b[0]) ans++;

        cout<<ans<<endl;
    }



    return 0;
}
