#include<iostream>
using namespace std;

int gcd(int a, int b){
    if(b == 0){
        return a;
    }
    else return gcd(b, a%b);        
}    

int main(){
    cout<<gcd(gcd(105, 63), 28)<<endl;
    system("pause");
    return 0;    
}    
