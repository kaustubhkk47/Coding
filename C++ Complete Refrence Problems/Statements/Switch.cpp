#include<iostream>
using namespace std;

int main(){
    int n = rand()%5 + 1;
    
    switch(n){
        case 1: cout<<"One"; break;
        case 2: cout<<"Two"; break;
        case 3: cout<<"Three"; break;
        case 4: cout<<"Four"; break;
        case 5: cout<<"Five"; break;
        case 6: cout<<"Six"; break;
    }
    
    system("pause");
    return 0;
}        
