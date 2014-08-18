#include<iostream>
using namespace std;

void ExtendedGcd(int a, int b, int arr[]){
    int s = 0, t = 1, r = b, old_s = 1, old_t = 0, old_r = a;
    while(r > 0){
        int quotient = old_r/r;
        int temp;
        temp = old_r;
        old_r = r;
        r = temp - quotient*r;
        temp = old_s;
        old_s = s;
        s = temp - quotient*s;
        temp = old_t;
        old_t = t;
        t = temp - quotient*t;       
    }
    arr[0] = old_r;  //gcd
    arr[1] = old_s;  //Bezout coefficients
    arr[2] = old_t;
    arr[3] = t;      //quotients by the gcd
    arr[4] = s;
    return;   
}    

int main(){
    int output[5];
    ExtendedGcd(240, 46, output);
    for(int i = 0; i<5; i++){cout<<output[i]<<" ";}
    system("pause");
    return 0;    
}    
