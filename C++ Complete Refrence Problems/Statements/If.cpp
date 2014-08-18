#include<iostream>
#include<cstdlib>
using namespace std;

int main(){
    int n = rand()%5 + 1;
    int guess;
    
    while(n>0){
        cin>>guess;
    
        if (n==guess){cout<<"Correct\n"; break;}
        else {cout<<"Wrong\n";}
    }    
    
    system("pause");
    return 0;
}    
