#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin>>t;
    
    while(t--){
        string s;
        getline(cin,s);
        
        int c0= 0,c1= 0;
        for (char c: s) {
            if (c == '0') c0++;
            else if (c == '1') c1++;
        }
        
        int ans=min(c0,c1);
        
        if (ans%2==1) {
            cout<<"DA"<<endl;
        } else {
            cout<<"NET"<<endl;
        }
    }



    return 0;
}