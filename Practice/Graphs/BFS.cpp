#include<iostream>
#include<vector>
#include<queue>
using namespace std;

void BFS(vector<vector<int> > g, int s){
    bool visited[g.size()];
    
    for(int i = 0; i < g.size(); i++){
        visited[i] == true;
    }
    visited[s] = false;
    queue<int> q;
    q.push(s);
    vector<int>::iterator i;
    
    while(!q.empty()){
        int v = q.front();
        cout<<v<<" ";
        q.pop();
        for(i= g[v].begin(); i != g[v].end(); ++i){
            int temp =*i;
            if (visited[temp]){
                q.push(temp);
                visited[temp] = false;                   
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
    
    BFS(graph, 0);
    
    system("pause");
    return 0;
}    
