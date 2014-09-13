#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n], b[n];
        for(int i = 0; i < n; i++){
            cin>>a[i];
        }
        for(int i = 0; i < n; i++){
            cin>>b[i];
        }
        sort(a, a+n);
        sort(b, b+n);
        int max = 0;
        for(int i = 0; i<n; i++){
            if(max<abs(a[i]-b[i])){
                max = abs(a[i]-b[i]);
            }    
        }
        cout<<max<<endl;        
    }    
    system("pause");
    return 0;
}    
