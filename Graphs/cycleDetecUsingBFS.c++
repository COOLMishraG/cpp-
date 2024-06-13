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
bool iscyclic(unordered_map<int , set<int>> &adjList , int src ,
 unordered_map<int , bool> &isVisited){
unordered_map<int , int> parent;
parent[src]=-1;
isVisited[src]=1;
queue<int> q1;
q1.push(src);
while(!q1.empty()){
    int frontnode=q1.front();
    q1.pop();
for(auto i : adjList[frontnode]){
    if(isVisited[i] == true && i!=parent[frontnode]){
        return true;
    }
    else if (!isVisited[i]){
        q1.push(i);
        isVisited[i]=true;
        parent[i]=frontnode;
    }
}}
    
}
string CycleDetect(vector<pair<int , int>> &edges , int n , int m){
    unordered_map<int , set<int>> Adjlist;
    PrepAdjList(Adjlist , edges );
    unordered_map<int , bool> isVisited;
    for(int i=0 ; i<n ; i++){
        if(!isVisited[i]){
            bool ANS=iscyclic(Adjlist , i , isVisited);
            if(ANS==1){
                return "yes";
            }
        }
    }
}