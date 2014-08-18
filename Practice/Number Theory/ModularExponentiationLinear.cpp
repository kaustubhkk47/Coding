#include<iostream>
using namespace std;
int mod(int b, int e, int m){
    int c = 1;
    for(int i = 0; i<e; i++){
        c = c % m;
        c *= b;
    }
    return c%m;    
}    
int main(){
    cout<<mod(4, 13, 497);
    system("pause");
    return 0;
}    
