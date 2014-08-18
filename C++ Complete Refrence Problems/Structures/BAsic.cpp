#include<iostream>
using namespace std;

struct node{
    int a,b;
    node(int x, int y){
        a = x;
        b = y;
    }    
};

void increment_node(struct node n){
    n.a += 1;
    n.b += 1;
}

int main(){
    node n1(5,6);
    increment_node(n1);
    cout<<n1.a<<" "<<n1.b;
    system("pause");
    return 0;
}             
