#include<iostream>
using namespace std;

int main(){
    int i = -7;
    
    cout<<i<<"\n";
//    cout<<i&32767<<"\n";
    
    for(int j=0;j<4;j++){
        i=i<<1;
        cout<<i<<"\n";
    }    
    
    i = -7;
    cout<<i<<"\n";
    
    for(int j=0;j<4;j++){
        i=i>>1;
        cout<<i<<"\n";
    }
    
    system("pause");
    return 0;
}               
