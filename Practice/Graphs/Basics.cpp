#include<iostream>
#include<vector>
using namespace std;

int UndirectedSize(vector< vector <int> > graph){
    int edges = 0;
    for(int i=0; i<graph.size(); i++){
        edges += (graph[i]).size();    
    }
    edges /= 2;
    return edges;
}    

int main(){
    vector< vector <int> > graph;
    for(int i=0; i<3; i++){
        vector<int> node;
        graph.push_back(node);
    }    
        
    graph[0].push_back(1);
    graph[0].push_back(2);
    graph[1].push_back(0);
    graph[2].push_back(0);
    
    cout<<UndirectedSize(graph)<<endl;
    system("pause");
    return 0;    
}    
