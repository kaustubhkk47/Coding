#include<iostream>
using namespace std;

int LinearSearch(int A[], int a, int n){
    for (int i = 0; i <n; i++){
        if (A[i]==a){return i;}
    }
    return -1;
}            
    

int main(){
    int A[5] = {4,-3,1,0,7};
    cout<<LinearSearch(A, 0, 5)<<"\n";
    cout<<LinearSearch(A, 9, 5)<<"\n";
    system("pause");
    return 0;
}    
