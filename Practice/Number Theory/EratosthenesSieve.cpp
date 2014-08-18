#include<iostream>
using namespace std;

void GenerateSieve(int sieve[], int size){
    
    for(int i = 0; i<size; i++){sieve[i]=1;}
    
    for(int i = 2; i < size; i++){
        if(sieve[i] != 0){
            for(int j = 2*i; j<size; j+=i){
                sieve[j] = 0;
            }
        }
    }
    return;
}

int main(){
    int sieve[100002];
    for(int i = 0; i<100002; i++){sieve[i]=1;}
    
    for(int i = 2; i < 100002; i++){
        if(sieve[i] != 0){
            for(int j = i+1; j<100002; j++){
                if(j%i == 0){
                    sieve[j] = 0;
                }    
            }
        }
    }
    /*
    for(int i = 2; i < 200; i++){
        if(sieve[i] != 0){cout<<i<<" ";}
    }
    */
    
    if (sieve[11]) cout<<"1yes"<<endl;
    if (sieve[101]) cout<<"2yes"<<endl;
    if (sieve[1001]) cout<<"3yes"<<endl;
    if (sieve[10001]) cout<<"4yes"<<endl;
    if (sieve[100001]) cout<<"5yes"<<endl;
    system("pause");
    return 0;                
}    
