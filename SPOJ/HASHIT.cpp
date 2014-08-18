#include<iostream>
#include<string>
using namespace std;

int Hash(string key){
    int a=0;
    for(int i = 0; i<key.length(); i++){
        a+= ((int) key[i])*(i+1);
    }
    return (19*a)%101;
}    
int main(){
    int t;
    cin>>t;
    string sarray[101];
    
    int count = 0;    
    while(t--){
        int n;
        cin>>n;
        for(int i =0; i<101; i++){
        sarray[i] = " ";
    }
        for(int i=0; i<n; i++){
            string s, s1;
            cin>>s;
            s1 = s.substr(4);
            int key = Hash(s1);
            bool b = true;
            
            if(s.substr(0,1) == "A"){
                for(int k = 0; k< 20; k++){
                    int h;
                    h = (key + k*k + 23*k)%101;
                    if(sarray[h] == s1){b = false;}    
                }
                if(b == true and sarray[key] == " "){
                    sarray[key] = s1;
                    count++;
                }
                else if(b == true and sarray[key] != " "){
                    for(int k = 1; k< 20; k++){
                        int h;
                        h = (key + k*k + 23*k)%101;
                        if(sarray[h] == " "){
                            sarray[h] = s1;
                            count++;
                            break;
                        }
                    }        
                }        
                        
            }
            
            else if(s.substr(0,1) == "D"){
                if(sarray[key] == s1){
                    sarray[key] = " ";
                    count--;
                }    
                else if(sarray[key] != " "){
                    for(int k = 1; k< 20; k++){
                        int h;
                        h = (key + k*k + 23*k)%101;
                        if(sarray[h] == s1){
                            sarray[h] = " ";
                            count--;
                            break;
                        }
                    }        
                }
                
            }                             
        }
        cout<<count<<endl;
            for(int z=0; z<101;z++){
                if(sarray[z] != " "){
                    cout<<z<<":"<<sarray[z]<<endl;
                }    
            }    
    }    
    return 0;
}    
