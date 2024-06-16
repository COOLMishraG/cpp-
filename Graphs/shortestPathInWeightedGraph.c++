#include<iostream>
#include<climits>
#include<vector>
#include<stack>
#include<unordered_map>
#include<list>
#include<utility>
using namespace std;
class graph{
    public:
    unordered_map<int , list<pair<int , int>>> Adj;
    void addEdge(int u , int v , int weight){
        pair<int , int> p=make_pair(v , weight);
        Adj[u].push_back(p);
    }
    // function to print the Adj list.
    void PrintAdj(){
        for(auto i : Adj){
            cout<<i.first<<"->";
            for(auto j : i.second){
                cout<<j.first<<" "<<j.second;
            }
        }
    }
    //finding topological sort
    void TOPO(stack<int> &s1 , int src , unordered_map<int , bool> &isVisited){
        isVisited[src]=true;
        for(auto i : Adj[src]){
            if(!isVisited[i.first]){
                TOPO(s1 , i.first , isVisited);
            }
        }
        s1.push(src);
    }
    
    void getShortestPath(int src , vector<int> &dis , stack<int> &s1){
        dis[src] = 0;
        while(!s1.empty()){
            int top=s1.top();
            s1.pop();
            if(dis[top]!=INT_MAX){
                for(auto i : Adj[top]){
                    if(dis[top] + i.second < dis[i.first]){
                        dis[i.first]=dis[top] + i.second;
                    }
                }
            }
        }
    }
};
int main(){
    graph g;
    g.addEdge(1 , 2 , 2);
    g.addEdge(1 , 3 , 6);
    g.addEdge(0 , 1 , 5);
    g.addEdge(0 , 2 , 3);
    g.addEdge(2 , 3 , 7);
    g.addEdge(2 , 4 , 4);
    g.addEdge(2 , 5 , 2);
    g.addEdge(3 , 4 , -1);
    g.addEdge(4 , 5 , -2);
    int n=6;
    unordered_map<int , bool> isVisited;
    stack<int> s1;
    for(int i=0 ; i<n ; i++){
        if(!isVisited[i]){
            g.TOPO(s1 , i , isVisited);
        }
    }
    int src=1;
     vector<int> dis(n, INT_MAX);
    g.getShortestPath(src , dis , s1);
    cout<<"answer is : "<<endl;
    for(int i=0 ; i<dis.size() ; i++){
        cout<<dis[i]<<" ";
    }
    return 0;
}