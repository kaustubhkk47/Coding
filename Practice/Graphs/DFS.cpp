#include<iostream>
#include<vector>
#include<stack>
using namespace std;

void DFS(vector<vector<int> > g, int s){
    bool visited[g.size()];
    for(int i = 0; i<g.size(); i++){
        visited[i] = true;
    }
    
    stack<int> st;
    st.push(s);
    
    vector<int>:: iterator i;
    while(!st.empty()){
        int v = st.top();
        st.pop();
        i = g[v].begin();
        if(visited[v]){
            cout<<v<<" ";
            visited[v] = false;
            for(i = g[v].begin(); i != g[v].end(); i++){
                st.push(*i);
            }    
        }    
    }      
}    

int main(){
    vector<int> v;
    vector<vector<int> > graph(6, v);
    
    graph[0].push_back(2);
    graph[0].push_back(1);
    graph[1].push_back(0);
    graph[1].push_back(3);
    graph[2].push_back(4);
    graph[2].push_back(1);
    graph[2].push_back(3);
    graph[2].push_back(1);
    graph[3].push_back(0);
    graph[3].push_back(2);
    graph[3].push_back(4);
    graph[3].push_back(5);
    graph[4].push_back(2);
    graph[4].push_back(3);
    graph[4].push_back(5);
    graph[5].push_back(4);
    graph[5].push_back(3);
    
    DFS(graph, 0);
    
    system("pause");
    return 0;
}    
