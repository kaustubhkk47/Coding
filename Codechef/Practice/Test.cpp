#include<iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    
    int n;
    cin>>n;
    
    while(n != 42){
        cout<<n<<"\n";
        cin>>n;
    }

    return 0;
}        
