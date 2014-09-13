#include<iostream>
#include<vector>
using namespace std;

void DFS( vector<vector<int> > g, int s, bool array[]) {   
    array[s] = false;
    cout<<s<<" ";
    vector<int>:: iterator i;
    for(i = g[s].begin(); i<g[s].end(); i++){
        if(array[*i]){
            DFS(g, *i, array);
        }    
    }
    return;        
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
    
    bool visited[6];
    for(int j = 0;j < 6; j++){
        visited[j] = true;
    }
    
    DFS(graph, 0, visited);
    
    system("pause");
    return 0;
}    
