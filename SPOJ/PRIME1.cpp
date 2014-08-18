#include<iostream>
#include<cmath>
using namespace std;         

int main(){
    ios_base::sync_with_stdio(false);
    
    int sieve[100000];
    sieve[0] = 0;
    sieve[1] = 0;
    for(int i = 2; i<100000; i++){sieve[i]=1;}
    
    for(int i = 2; i < 1000; i++){
        if(sieve[i] != 0){
            for(int j = i+1; j<100000; j++){
                if(j%i == 0){
                    sieve[j] = 0;
                }    
            }
        }
    }
    int t;
    //t = scan_d();
    cin>>t;
    while(t--){
        int n, m;
        //m = scan_d(), n = scan_d();
        cin>>m>>n;
        
        if(n < 100000){
            for(int i = m; i < n+1; i++){
                if(sieve[i] == 1){cout<<i<<endl;}
                                //print_d(i);
            }   
        }
        
        else{
            int segsieve[n-m+1];
            for(int i = 0; i<n-m+1; i++){segsieve[i]=1;}
            
            //int s = (int)(sqrt((double) n)) + 1;
            for(int i = 2; i < (int)(sqrt((double) n)) + 1; i++){
                if(sieve[i] != 0){
                    for(int j = 0; j<n-m+1; j++){
                        if((j+m)%i == 0){
                            segsieve[j] = 0;
                        }    
                    }
                }
            }
            
            for(int i = 0; i < n-m+1; i++){
                if(segsieve[i] == 1){cout<<(i+m)<<endl;}
                //print_d(i+m);
            }
        }
        cout<<endl;          
    }           
    //system("pause");
    return 0;
}    
