#include<iostream>
using namespace std;

void merge(int a[], int low, int high, int mid){
    int i = low, j = mid+1, k = low;
    int c[20];
    while(i <= mid and j <= high){
        if(a[i]<a[j]){
            c[k] = a[i];
            i++;
            k++;
        }
        else{
            c[k] = a[j];
            j++;
            k++;
        }
    }
    while(i <= mid){
        c[k] = a[i];
        i++;
        k++;
    }
    while(j <= high){
        c[k] = a[j];
        j++;
        k++;
    }
    for(int i = low; i <= high; i++){
        a[i] = c[i];
    }                   
}    

void mergeSort(int a[], int low, int high){
    
    int mid = (low+high)/2;
    
    if(low<high){
        mergeSort(a,low,mid);
        mergeSort(a,mid+1,high);
        merge(a,low,high,mid);
    }    
}    

int main(){
    int a[10]={5,64,12,3,-8,48,5,11,-11,21};
    
    mergeSort(a,0,9);
    
    for(int i = 0; i<10; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    
    system("pause");
    return 0;
}        
