#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

vector<long long> v;

void GenerateSieve(int sieve[], int size){
    
    for(int i = 0; i<size; i++){sieve[i]=1;}
    sieve[0] = sieve[1] = 0;
    for(int i = 2; i < size; i++){
        if(sieve[i] != 0){
            v.push_back((long long)i*(long long)i);
            for(int j = 2*i; j<size; j+=i){
                sieve[j] = 0;
            }
        }
    }
    return
}    

int main(){
    int sieve[1000001];
    GenerateSieve(sieve, 1000001);       
    int n;
    cin>>n;
    while(n--){
        long long a;
        cin>>a;
        
        if(binary_search (v.begin(), v.end(), a)){cout<<"YES"<<endl;}
        else cout<<"NO"<<endl;
    }    
    
    return 0;
}    
