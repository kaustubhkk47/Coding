#include<iostream>
#include<vector>
using namespace std;
      

int main(){
    int size = 6;
    char array[size][size];
    
    //initialize array
    for (int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            array[i][j] = ' ';
        }
    }
    
    for(int n = 0; n < size/2; n += 2){
        for(int i = 0; i < size-n; i++){
            array[n][i+n]   = '*'; //rows
            array[size-1-n][i+n] = '*';
            array[i+n][2*n]   = '*';  //columns
            array[i+n][size-1-n] = '*';
        }    
    }    
    
    //display array
    for (int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            cout<<array[i][j]<<" ";
        }
        cout<<endl;
    }
    
    system("pause");
    return 0;         
}     
