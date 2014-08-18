#include<iostream>
using namespace std;

int main(){
    int n, k;
    cin>>n>>k;
    int count = 0, a, store = 0;
    cin>>a;
    while(a > 0 and count<n){
    	if(a < store) break;
        count++;
        if(count == k) store = a;
        cin>>a;
    }
    cout<<count;
    return 0;
}    
