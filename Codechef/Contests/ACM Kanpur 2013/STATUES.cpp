#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n != 0){
        int a[n];
        int sum = 0;
        for(int i = 0; i < n; i++){
            cin>>a[i];
            sum += a[i];
        }
        int avg = sum/n;
        int result = 0;
        for(int i = 0; i < n; i++){
            if(a[i]>avg){
                result += (a[i]-avg);
            }    
        }
        cout<<result;    
        cin>>n;
    }
    
    system("pause");    
    return 0;
}    
