#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

void print(string s, int a[], int b){
    for(int i = 0; i<s.length()-b; i++){
        cout<<s[i];
    }
    for(int i = 0; i < b; i++){
        if(s[s.length()-b+1]>a[i]){
            cout<<a[i];
            a[i] = 0;
            break;
        }    
    }
    sort(a, a+b);
    for(int i = 1; i<b; i++){
        cout<<(char) a[i];
    }
    cout<<endl;
    return;            
}        

void output(string s, int a[], int b){
    if(b == s.length()+1){
        cout<<"no answer"<<endl;
        return;
    }    
    a[b] = (int) s[s.length()-1-b];
    sort(a, a+b);
    if(s[s.length()-1-b] == a[b]){
        output(s, a, b+1);
    }
    else {
        print(s, a, b);
        return;
    }            
}    

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int array[s.length()];
        for(int i = 0; i<s.length(); i++){
            array[i] = -1;
        }
        output(s, array, 0);                
    }
    system("pause");
    return 0;    
}    
