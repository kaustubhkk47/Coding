#include<iostream>
using namespace std;

int a[10];

/*
void generate(int *i);
*/

void modify(int a[]);

int main(){
    
/*    
    for(int i=0;i<10;i++,p++){
        a[i]=1001+i;
        cout<<a[i]<<" "<<p<<"\n";
    }
*/

/*  
    int *p;
    p = a;  
    while(p<a+10){
        (*p)=1001+(*p);
        cout<<*p<<" "<<p<<"\n";
        p++;
    }
*/
    
//    generate(a);

    modify(a);
                        
    system("pause");
    return 0;
}

/*
void generate(int *i){
    int *p;    
    p=i;
        
    while(p<i+10){
        (*p)+=1001;
        cout<<*p<<" "<<p<<"\n";
        p++;
    }    
}
*/

void modify(int a[]){
    
    int *p;
    p = a;
    
    for(int i=0;i<10;i++,p++){
        a[i]=1001+i;
        cout<<a[i]<<" "<<p<<"\n";
    }
}             
