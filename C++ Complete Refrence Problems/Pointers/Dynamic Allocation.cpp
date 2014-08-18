#include<iostream>
using namespace std;

void foo(int *a){
    a = new int [10];
}
     
int main(){
    int *a;
    foo(a);
    cout<<a[10]<<endl;
    return 0;
}    
