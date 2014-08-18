#include<iostream>
using namespace std;

int gcd(int a, int b){
    int c = 0;
    while(b > 0){
        c = b;
        b = a%b;
        a = c;
    }
    return c;    
}    

int main(){
    cout<<gcd(91, 63)<<endl;
    system("pause");
    return 0;    
}    
