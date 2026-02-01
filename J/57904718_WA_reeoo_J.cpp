#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--){
        int a1,a2,b1,b2;
        cin>>a1>>a2>>b1>>b2;

        int suneetWins=0;

        if (a1>b1 && a2>b2)suneetWins++;
        if (a1>b2 && a2>b1) suneetWins++;
        if (a2>b1 && a1>b2) suneetWins++;
        if (a2>b2 && a1>b1) suneetWins++;

        cout << suneetWins << endl;
    }



    return 0;
}