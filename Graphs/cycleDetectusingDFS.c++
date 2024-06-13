#include<iostream>
#include<vector>
#include<unordered_map>
#include<set>
#include<utility>
using namespace std;
void dfs(unordered_map<int , set<int>> &AdjList , 
unordered_map<int , bool> &isVisited , int node , vector<int> &ANS){
    ANS.push_back(node);
    isVisited[node]=true;
    for(auto i : AdjList[node]){
        if(!isVisited[i]){
            dfs(AdjList , isVisited , i , ANS);
        }
    }
}
void prepAdjList(unordered_map<int , set<int>> &AdjList ,  vector<pair<int , int>> &v1 ){
    for(int i=0 ; i<v1.size() ; i++){
        int u=v1[i].first;
        int v=v1[i].second;
        AdjList[u].insert(v);
        AdjList[v].insert(u);
    }
}
bool cycleDFS(int v , vector<pair<int , int>> &v1){
    unordered_map<int , set<int>> AdjList; 
    prepAdjList(AdjList , v1);
    vector<vector<int>> ANS;
    unordered_map<int , bool> isVisited;
    for(int i=0 ; i<v ; i++){
        if(!isVisited[i]){
            bool ans = dfs();
            if(ans==1){
                return true;
            }
            
        }
    }
  
}
int main(){
    
    vector<pair<int , int>> v1;
    pair<int , int> p1;
    p1=make_pair(0, 2);
    pair<int , int> p2;
    p2=make_pair(3, 1);
    pair<int , int> p3;
    p3=make_pair(4, 3);
    pair<int , int> p4;
    p4=make_pair(4, 2);
    pair<int , int> p5;
    p5=make_pair(2, 1);
    v1.push_back(p1);
    v1.push_back(p2);
    v1.push_back(p3);
    v1.push_back(p4);
    v1.push_back(p5);
    vector<vector<int>> ANS = DFS(1 , v1);
    for(auto i : ANS){
        for(auto j : i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
