#include<iostream>
#include<string>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        long long n = 1;
        cin>>s;    
        for(int i = 0; i<s.length(); i++){
            if(s[i] == 'l' && i%2 == 0){
                n = (n*2)%1000000007;
            }
            else if(s[i] == 'l' && i%2 == 1){
                n = (n*2-1)%1000000007;
            }
            else if (s[i] == 'r' && i%2 == 0){
                n = (n*2+2)%1000000007;
            }
            else if (s[i] == 'r' && i%2 == 1){
                n = (n*2+1)%1000000007;
            }              
        }
        cout<<n<<endl;    
    }    
    system("pause");
    return 0;
}    
