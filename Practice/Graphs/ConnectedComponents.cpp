#include<iostream>
#include<iostream>
#include<queue>
using namespace std;

void BFS(vector<vector<int> > g, int s, bool a[]){
    a[s] = false;
    
    queue<int> q;
    q.push(s);
    vector<int>:: iterator i;
    while(!q.empty()){
        int v = q.front();
        q.pop();
        cout<<v<<" ";
        i = g[v].begin();
        while(i != g[v].end()){
            int temp = *i;
            if(a[temp]){
                q.push(temp);
                a[temp] = false;
            }    
            i++;
        }    
    }
    cout<<endl;    
}    

void ConnectedComponents(vector<vector<int> > g){
    bool visited[g.size()];
    for(int i = 0; i<g.size(); i++){
        visited[i] = true;
    }
    
    for(int i = 0; i<g.size(); i++){
        if(visited[i]){BFS(g, i, visited);}
    }    
}    

int main(){
    vector<int> v1;
    vector<vector<int> > graph(10, v1);
    graph[0].push_back(2);
    graph[0].push_back(4);
    graph[2].push_back(4);
    graph[2].push_back(0);
    graph[4].push_back(0);
    graph[4].push_back(2);
    graph[4].push_back(6);
    graph[4].push_back(8);
    graph[8].push_back(4);
    graph[6].push_back(4);
    graph[1].push_back(3);
    graph[3].push_back(1);
    graph[5].push_back(9);
    graph[5].push_back(7);
    graph[7].push_back(9);
    graph[7].push_back(5);
    graph[9].push_back(5);
    graph[9].push_back(7);
    
    ConnectedComponents(graph);
    
    system("pause");
    return 0;
}    
