#include<iostream>
using namespace std;

int min(int a, int b){
    if(a>b){return b;}
    else return a;
}

int mod(int a){
    if(a<0){return -1*a;}
    else return a;
}        

int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y,x1,y1,x2,y2;
        cin>>x>>y>>x1>>y1>>x2>>y2;
        int a = mod(x1-x), b = mod(x2-x), c = mod(y1-y), d = mod(y2-y);
        int e = min(a,min(b,min(c,d)));
        cout<<e<<endl;
    }    
    //system("pause");
    return 0;
}    
