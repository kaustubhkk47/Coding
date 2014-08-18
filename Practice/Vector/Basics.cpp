#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    cout<<v.size()<<" "<<v.max_size()<<endl;
    v.push_back(1);
    v[3] = 2;
    for(int i = 0; i<v.size(); i++){
        cout<<v[i]<<endl;
    }
    cout<<v.size()<<" "<<v.max_size()<<endl;
    vector<int> v1(10);
    cout<<v1.size()<<" "<<v1.max_size()<<endl;;
    v1[0] = 1;
    for(int i = 0; i<v.size(); i++){
        cout<<v[i]<<endl;
    }    
    system("pause");
    return 0;
}    
