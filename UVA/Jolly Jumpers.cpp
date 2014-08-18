#include<iostream>
using namespace std;

int mod(int a,int b){
    if(a-b >= b-a) return a-b;
    else return b-a;
}    

bool jolly(int a[], int n) {
    for(int j=1; j<n; j++){
        if(a[j] != 1) {
            return false;
        }
    }
    return true;
}       

int main(){
    int a;
    while(cin>>a){
        if(a == 1) {cout<<"Jolly"<<endl;}
        else {
            int array[a];
            for(int i = 0; i<a; i++){array[i]=0;}
            
            int m,n;
            cin>>m;    
            for(int i=1; i<a; i++){
                cin>>n;
                int c = abs(m-n);
                if(c<a) array[c]++;
                m=n;
            }
        
            if(jolly(array,a)) cout<<"Jolly"<<endl;
            else cout<<"Not jolly"<<endl;
        }            
    }    
    return 0;
}    
