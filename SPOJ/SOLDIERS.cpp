#include<iostream>
#include<string>
using namespace std;

bool checklength(string a, string b){
    if(a.length()<b.length()){return true;}
    else for()
}    
int main(){
    int t;
    cin>>t;
    while(t--){
        int a[65], b[65];
        for()
        if(checklength(a,b)){
            string temp;
            temp = b;
            b = a;
            a = temp;
        }
        if(a%2 == 0 and b%2 == 1){cout<<(a-1)*b<<endl;}
        else if(a%2 == 1 and b%2 == 0){cout<<a*(b-1)<<endl;}
        else if(a%2 == 0 and b%2 == 0){cout<<(a*b/2<<endl;}
        else if(a%2 == 1 and b%2 == 1){int c = b/2; cout<<a*(c+1)<<endl;}    
    }
    system("pause");
    return 0;    
}    
