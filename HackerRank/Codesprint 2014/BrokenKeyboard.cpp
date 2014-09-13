#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s, w;
        cin>>s>>w;
        
        bool check[26];
        for(int i=0; i<26; i++){
            check[i] = false;
        }
        
        for(int i=0; i<s.length(); i++){
            check[s[i] - 97] = true;
        }
        
        int count = 0;
        
        for(int i = 0; i<w.length(); i++){
            if(check[w[i] - 97] == true){
                count ++;
                check[w[i] - 97] = false;
            }    
        }
        cout<<count<<endl;        
    }
    return 0;    
}    
