#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int x, y;
        cin>>x>>y;
        
        if (x >= 0 and x<=1 and y == 0){cout<<"YES\n";}
        else if (y%2 == 0 and y<0 and x <= (((-1)*y) + 1) and x >= y){cout<<"YES\n";}
        else if (x%2 == 1 and x>0 and y >= ((-1)*(x-1)) and y <= x+1){cout<<"YES\n";}
        else if (y%2 == 0 and y>0 and x >= (-1)*y and x <= y-1){cout<<"YES\n";}
        else if (x%2 == 0 and x<0 and y >= x and y <= (-1)*x){cout<<"YES\n";}
        else cout<<"NO\n";
        
    }    
    return 0;
}    
