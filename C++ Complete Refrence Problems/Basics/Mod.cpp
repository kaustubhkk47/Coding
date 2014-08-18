#include<iostream>
using namespace std;

int mod(int a,int b){
    if(a-b >= b-a) return a-b;
    else return b-a;
}    

int main(){
    cout<<mod(2, -3);
    cout<<mod(1, 3);
    cout<<mod(5, 5);
    cout<<mod(5, -5);
    system("pause");
    return 0;
}    
