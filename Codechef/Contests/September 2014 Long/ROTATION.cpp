#include<iostream>
using namespace std;

int main(){
    int n, m;
    cin>>n>>m;
    int array[n];
    for(int i = 0; i<n; i++){
        cin>>array[i];
    }
    int index = 0;
    for(int i = 0; i<m; i++){
        char s;
        int change;
        cin>>s>>change;
        if(s == 'C'){
            index = (index+change)%n;
        }
        else if(s == 'A'){
            if(index >= change){
                index = index - change; 
            }
            else index = index - change + n;    
        }
        else if(s == 'R'){
            cout<<array[(index+change-1)%n]<<endl;
        }            
    }
    return 0;        
}    
