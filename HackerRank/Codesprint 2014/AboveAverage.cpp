#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        float a[n];
        float avg = 0;
        for(int i = 0; i<n; i++){
            cin>>a[i];
            avg += a[i];
        }
        avg /= n;
        int count = 0;
        for(int i = 0; i < n; i++){
            if(a[i]>avg){
                count++;
            }    
        }
        cout<<count<<endl;    
                
    }
    return 0;    
}    
