#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    int n, min2 = 100000, min1 =100000, count = 0;
    string s;
    string q;
    while(t--){
        cin>>n;
        if(n == -1){
            cout<<count<<" "<<s<<endl;
            count = -1;
            min1 = 100000;
        }
        else if(n>0){
            if (min1>=n){
                min1 = n;     
                cin>>s;
                count = -1;
            }
            else cin>>q;
            count++;    
        }
        else if(n == 0){
            cin>>q;
        }        
    }
    //system("pause");
    return 0;
}    
