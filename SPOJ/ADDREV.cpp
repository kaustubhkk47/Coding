#include<iostream>
using namespace std;

int power(int a, int b){
    int c = 1;
    for (int i = 0; i<b; i++){
        c *=a;
    }
    return c;    
}

int rev(int a){
    int n=-1, rev=0, quo = a, rem = 0;
    while(quo != 0){
        quo /= 10;
        n++;
    }
    
    quo = a;    
    while(n>=0){
        rem = quo%10;
        quo /= 10;
        rev += rem*power(10,n);
        n--; 
    }    
    return rev;
}        

int main(){
    int t;
    cin>>t;
    while(t--){
        int a, b, c;
        cin>>a>>b;
        c = rev(a) + rev(b);
        cout<<rev(c)<<endl;   
    }
    return 0;
}        
