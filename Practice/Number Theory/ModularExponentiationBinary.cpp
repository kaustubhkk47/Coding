#include<iostream>
using namespace std;

int binmod(int b, int e, int m){
    int c = 1;
    b = b%m;
    while(e > 0){
        if(e%2 == 1){c = (c*b)%m;}
        e = e>>1;
        b = (b*b)%m;
    }
    return c;    
}
    
int main(){
    cout<<binmod(8, 0, 497);
    system("pause");
    return 0;
}    
