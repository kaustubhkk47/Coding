#include<iostream>
#include<vector>
using namespace std;


int main(){
    
    vector<int> v;

    int sieve[1000000];
    
    for(int i = 0; i < 1000; i++){sieve[i] = 1;}

    for(int i = 2; i < 1000; i++){
        if(sieve[i] != 0){
            v.push_back(i);
            for(int j = i+1; j<1000; j++){
                if(j%i == 0){
                    sieve[j] = 0;
                }    
            }
        }
    }
    
    for(int i = 0; i < v.size(); i++){cout<<v[i]<<" ";}
    
    return 0;
}    
    
/*
int NoOfDivisors(unsigned int n){
    unsigned int count = 0;
    for(unsigned int i = 1; i <= n; i++){
        if(n%i == 0){count++;}
    }
    return count;    
}    

int main(){
    int unsigned n;
    cin>>n;
    while(n != 0){
        unsigned int count = NoOfDivisors(n);
        if(count%2 == 0){cout<<"no"<<endl;}
        else cout<<"yes"<<endl;
        cin>>n;
    }
    system("pause");
    return 0;    
}
*/    
