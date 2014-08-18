#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(1);
    cout<<v.size()<<endl;
    v.erase(v.begin()+0);
    cout<<v.size();
    system("pause");
    return 0;
}    
