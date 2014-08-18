#include<iostream>
using namespace std;

int BubbleSort(int A[],int n){
    for(int i = 0; i<n; i++){
        for(int j = 0; j<=i; j++){
            if(A[j]>A[j+1]){
                int temp = A [j+1];
                A[j+1] = A[j];
                A[j] = temp;
            }
        }
    }
    return 0;
}

int BinarySearch(int A[], int data, int low, int high){
    int mid;        
    while(low<=high){
        mid = low + (high - low)/2;
        if(A[mid]==data){
            return mid;
        }
        else if (A[mid]>data){
            high = mid - 1;
        }
        else low = mid + 1;
    }
    return -1;
}            
                    
                
int main(){
    int a, x;
    cout<<"Enter number of characters in array\n";
    cin>>x;
    int A[x];
    cout<<"Enter characters in array\n";
    
    for(int i=0; i<x; i++){
        cin>>A[i];
    }
    cout<<"Enter character to find in array\n";
    cin>>a;  
    
    BubbleSort(A,x);               
    
    for(int i=0; i<x; i++){
        cout<<A[i]<<" ";
    }                
    
    cout<<BinarySearch(A, a, 0, x-1)<<"\n";            
                
    system("pause");
    return 0;
}            
            
