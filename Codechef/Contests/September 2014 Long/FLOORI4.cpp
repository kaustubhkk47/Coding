#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n, m;
        cin>>n>>m;
        int sum = 0;
        for(int i = 1; i<n+1; i++){
            int prod = n/i;
            sum = (sum+((i*i*i*i*prod)%m))%m;
        }
        cout<<sum<<endl;    
    }    
    //system("pause");
    return 0;
}    
