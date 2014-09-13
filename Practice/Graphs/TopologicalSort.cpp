#include<iostream>
#include<stack>
#include<vector>
using namespace std;

void TopologicalSortUtil(vector<vector<int> > g, int v, bool visited[], stack<int> &st){
    visited[v] = false;
    vector<int>:: iterator i;
    i  = g[v].begin();
    while(i != g[v].end()){
        if(visited[*i]){
            TopologicalSortUtil(g, *i, visited, st);
        }
        i++;    
    }
    st.push(v);    
}    

void TopologicalSort(vector<vector<int> > g){
    bool visited[g.size()];
    for(int i = 0; i < g.size(); i++){
        visited[i] = true;
    }

    stack<int> st;
    
    for(int i = 0; i < g.size(); i++){
        if(visited[i]){
            TopologicalSortUtil(g, i, visited, st);
        }    
    }    
    
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }        
}       

int main(){
    vector<int> v;
    vector<vector<int> > graph(4, v);
    
    graph[0].push_back(1);
    graph[0].push_back(2);
    graph[1].push_back(3);
    graph[2].push_back(3);
    
    TopologicalSort(graph);
    
    system("pause");
    return 0;
}    
