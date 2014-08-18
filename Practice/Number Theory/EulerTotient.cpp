#include<iostream>
using namespace std;

int totient(int n){
    int c = n;
    for(int i = 2; i*i <= n; i++){
        if(n%i == 0){c -= c/i;}
        while(n%i == 0){n /= i;}
    }
    if(n > 1){c -= c/n;}
    return c;     
}    

int main(){
    cout<<totient(50);
    system("pause");
    return 0;
}    
