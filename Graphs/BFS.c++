#include<iostream>
#include<unordered_map>
#include<set>
#include<vector>
#include<queue>
#include<utility>
using namespace std;
void PrepAdjList(unordered_map<int , set<int>> &adjList , 
vector<pair<int , int>> &edges){
    for(int i=0 ; i<edges.size() ; i++){
        int u=edges[i].first;
        int v=edges[i].second;
        adjList[u].insert(v);
        adjList[v].insert(u);
    }
}
void bfs(unordered_map<int , set<int>> &adjList ,
 unordered_map<int , bool> &visited , vector<int> &ANS , int node){
    queue<int> q1;
    q1.push(node);
    visited[node]=1;
    while(!q1.empty()){
        int frontnode  = q1.front();
        q1.pop();
        ANS.push_back(frontnode);
        for(auto i : adjList[frontnode]){
            if(!visited[i]){
                q1.push(i);
                visited[i]=1;
            }
        }
    }
 }
vector<int> BFS(int vertex , vector<pair<int , int>> edges){
    unordered_map<int , set<int>> adjList;
    PrepAdjList(adjList , edges);
    vector<int> ANS;
    unordered_map<int , bool> visited;
    for(int i=0 ; i<vertex ; i++){
        if(!visited[i]){
            bfs(adjList , visited , ANS , i);
        }
    }
    return ANS;

}
int main(){
    vector<pair<int , int>> v1;
    pair<int , int> p1;
    p1=make_pair(4, 4);
    pair<int , int> p2;
    p2=make_pair(0, 1);
    pair<int , int> p3;
    p3=make_pair(0, 3);
    pair<int , int> p4;
    p4=make_pair(1, 2);
    pair<int , int> p5;
    p5=make_pair(2, 3);
   
    v1.push_back(p1);
    v1.push_back(p2);
    v1.push_back(p3);
    v1.push_back(p4);
    v1.push_back(p5);
    vector<int> ans = BFS(1 , v1);
    for(int i=0 ; i<ans.size() ; i++){
        cout<<ans[i]<<endl;
    }

    return 0;
}