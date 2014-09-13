#include<iostream>
using namespace std;

int countActiveBits(int n){
    int count = 0;
    while(n != 0){
        if (n%2 == 1) count++;
        n /= 2;
    }
    return count;    
}        

int main(){
    int n;
    cin>>n;
    int array[n];
    for(int i = 0; i<n; i++){
        int a;
        cin>>a;
        array[i] = countActiveBits(a);
    }
    int bitxor = array[0];
    for(int i = 1; i<n; i++){
        bitxor ^= array[i];
    }    
    if(bitxor%2 == 1) cout<<"Shaka :)"<<endl;
    else cout<<"The other player :("<<endl;    
    //system("pause");
    return 0;
}    
