#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    int con=1;
    int a[53][53];
    int b[53][53];
    int h, w;
    
    cin>>h>>w;
    
    while(h!=0 and w!=0) {
        
        for(int i=0; i < h+2; i++){
            for(int j=0; j < w+2; j++){
                a[i][j] = 0;
                b[i][j] = 0;
            }
        } 
        
        char c;
        for(int i=1; i < h+1; i++){
            c = getchar();
            for(int j=1; j < w+1; j++){
                a[i][j] = (int) getchar();
            }
        }
        
        for(int i=1; i < h+1; i++){
            for(int j=1; j < w+1; j++){
                if(a[i][j] == 65){
                    b[i][j]+=1;
                }    
            }
        }
        
        int counter = 1;
        while(counter<27){
            for(int i=1; i < h+1; i++){
                for(int j=1; j < w+1; j++){
                    if(b[i][j] == counter){
                        for(int k = -1; k <2; k++){
                            for(int l =-1; l<2;l++){
                                if(a[i+k][j+l] - a[i][j] == 1){
                                    b[i+k][j+l] = 1 + counter;
                                }    
                            }
                        }        
                    }    
                }
            }
            counter++;
        }    
         
        int max =0;
        for(int i=1; i < h+1; i++){
            for(int j=1; j < w+1; j++){
                if(b[i][j]>max){max=b[i][j];}
            }
        }
        cout<<"Case "<<con++<<": "<<max<<endl;
        cin>>h>>w;
    }    
                     
    return 0;
}
    
