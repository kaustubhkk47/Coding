#include<iostream>
#include<cstdlib>
#include<vector>
using namespace std;

int novertex(vector<vector<int> > v){
    
    vector<int> check;
    
    check.push_back(v[0][0]);
    check.push_back(v[0][1]);
    
    for(int i = 1; i < v.size(); i++){
        bool b1 = 1, b2 = 1;
        for(int j = 0; j<check.size(); j++){
            if (v[i][0] == check[j]){b1 = 0;} 
            if (v[i][1] == check[j]){b2 = 0;}
        }
        if(b1 == 1){check.push_back(v[i][0]);}
        if(b2 == 1){check.push_back(v[i][1]);}       
    }
    
    return check.size();    
}    

int cuts(vector < vector <int> > v){
    
    int no = novertex(v);
    
    while(no > 2){
        int tempedge = rand() % v.size();
        int a = v[tempedge][0], b = v[tempedge][1];
        
        vector <int> check;
        
        for(int i = 0; i< v.size(); i++){
            if(v[i][0] == a && i != tempedge){check.push_back(i);}
            if(v[i][1] == a && i != tempedge){check.push_back(i);}
        }
        
        for(int i = 0; i<check.size(); i++){
            if (v[(check[i])][0] == a){v[(check[i])][0] = b;}
            if (v[(check[i])][1] == a){v[(check[i])][1] = b;}
        }        
        
        v.erase(v.begin()+tempedge);
        
        for(int i = 0; i< v.size(); i++){
            if( v[i][0] == v[i][1] ){
                v.erase(v.begin()+i);
            }    
        }
        
        no = novertex(v);
        return cuts(v);
    }        
    return v.size(); 
}    

int main() {
    
    vector<vector<int> > v1(5, vector <int>() );    
    v1[0].push_back(0);
    v1[0].push_back(1);
    v1[1].push_back(0);
    v1[1].push_back(2);
    v1[2].push_back(1);
    v1[2].push_back(2);
    v1[3].push_back(1);
    v1[3].push_back(3);
    v1[4].push_back(2);
    v1[4].push_back(3);
    
    vector<vector<int> > v2(4, vector <int>() );
    v2[0].push_back(0);
    v2[0].push_back(1);
    v2[1].push_back(0);
    v2[1].push_back(2);
    v2[2].push_back(1);
    v2[2].push_back(3);
    v2[3].push_back(2);
    v2[3].push_back(3);
    
    vector<vector<int> > v3(2, vector <int>() );
    v3[0].push_back(0);
    v3[0].push_back(1);
    v3[1].push_back(1);
    v3[1].push_back(2);
        
    cout<<cuts(v3)<<endl;
    
    system("pause");
    return 0;
}
