#include<iostream>
#include<vector>
#include<queue>
#include<list>
using namespace std;

int ShortestPath(vector<vector<int> > g, int s, int a){
    bool visited[g.size()];
    int dist[g.size()];
    
    for(int i = 0; i < g.size(); i++){
        visited[i] == true;
        dist[i] == -1;
    }
    
    visited[s] = false;
    dist[s] = 0;
    
    queue<int> q;
    q.push(s);
    vector<int>::iterator i;
    while(!q.empty()){
        int v = q.front();
        q.pop();
        for(i= g[v].begin(); i != g[v].end(); i++){
            int temp =*i;
            if (visited[temp]){
                visited[temp] = false;
                q.push(temp);
                dist[temp] = dist[v] + 1;
                                
            }    
        }    
    }
    return dist[a];  
}
       
int main(){
    vector<int> v;
    vector<vector<int> > graph(6, v);
    
    graph[0].push_back(2);
    graph[0].push_back(1);
    graph[1].push_back(0);
    graph[1].push_back(3);
    graph[2].push_back(0);
    graph[2].push_back(1);
    graph[2].push_back(3);
    graph[2].push_back(4);
    graph[3].push_back(1);
    graph[3].push_back(2);
    graph[3].push_back(4);
    graph[3].push_back(5);
    graph[4].push_back(2);
    graph[4].push_back(3);
    graph[4].push_back(5);
    graph[5].push_back(4);
    graph[5].push_back(3);
    
    cout<<ShortestPath(graph, 0, 5)<<endl;
    
    system("pause");
    return 0;
}    
