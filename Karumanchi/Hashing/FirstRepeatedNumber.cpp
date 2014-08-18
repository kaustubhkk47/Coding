#include<iostream>
using namespace std;

int main(){
    int A[100]={0};
    int B[10]={1,4,55,4,6,4,15,8,10,55};
    
    for(int i=0; i<10; i++){
        int j = B[i];
        if (A[j]==0) {A[j]=i+1;}    
        else if (A[j]>0){A[j]=A[j]*(-1);}
    }
    
    int temp = -100;
    for(int i = 0;i<100; i++){
        if(A[i]<0 && A[i]>temp){temp = A[i];}
    }
            
    cout<<temp*(-1) - 1<<"\n";        
        
    system("pause");
    return 0;
}    
