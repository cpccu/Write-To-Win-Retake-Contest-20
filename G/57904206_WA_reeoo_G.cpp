#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin>>t;
    
    while(t--){
        string s;
        cin >> s;
        
        int count0 = 0,count1 = 0;
        for (char c:s) {
            if (c == '0') count0++;
            else if (c == '1') count1++;
        } 
        int ans=min(count0, count1);  
        if(ans% 2 ==0) {
            cout <<"NET"<<endl;
        }else{
            cout<<"NET"<<endl;
        }
    }
    
    
    return 0;
}