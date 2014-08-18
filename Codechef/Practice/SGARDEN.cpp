#include<iostream>
using namespace std;

bool checkarray(int a[], int size){
    for(int i = 0; i<size; i++){
        if(a[i] != i+1){return false;}
    }
    return true;
}        

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int count = 0;
        
        int a[n], b[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
            b[i]=i+1;
        }
        
        bool z = false;
        while(z == false){
            int temp[n];
            for(int i=0; i<n; i++){
                temp[(a[i])-1] = b[i];
            }
            for(int i=0; i<n; i++){
                b[i] = temp[i];
            }    
            count++;
            count = count%1000000007;
            z = checkarray(b, n);    
        }
        cout<<count<<endl;       
    }
    //system("pause");    
    return 0;
}    
