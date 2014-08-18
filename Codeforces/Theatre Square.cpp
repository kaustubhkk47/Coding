#include<iostream>
using namespace std;

int main(){
    int n, m, a;
    cin>>n>>m>>a;
    
    long long x1 = n/a, x2 = m/a, y1 = n%a, y2 = m%a;
    
    if (y1 == 0 && y2 == 0){cout<<x1*x2;}
    else if (y1 == 0 && y2 != 0){cout<<x1*(x2+1);}
    else if (y1 != 0 && y2 == 0){cout<<x2*(x1+1);}
    else if (y1 != 0 && y2 != 0){cout<<(x1+1)*(x2+1);}
    
    return 0;
}    
