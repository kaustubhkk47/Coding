#include<iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    
    while(t--) {
        int n,k,count=0,a;
        cin>>n>>k;
        for(int i=0;i<n;i++) {
            cin>>a;
            if(a%2==0) count++;
        }    
        
        if(count == n and k==0) cout<<"NO\n";
        else if(count>=k) cout<<"YES\n";
        else cout<<"NO\n";
    }    
    
    return 0;
}
