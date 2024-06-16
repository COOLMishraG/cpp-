#include<iostream>
#include<vector>
#include<unordered_map>
#include<set>
#include<climits>
#include<utility>
#include<list>
using namespace std;
vector<int> dijkstra(vector<vector<int>> & vec , int vertex , int edges , int source){
    //creating ADjlist
    unordered_map<int , list<pair<int , int>>> Adj;
    for(int i=0 ; i<edges ; i++){
        int u=vec[i][0];
        int v=vec[i][1];
        int w=vec[i][2];
        pair<int , int> p=make_pair(v , w);
        Adj[u].push_back(p);
        pair<int , int> p1=make_pair(u , w);
        Adj[v].push_back(p1);
    }
    vector<int> dis(vertex , INT_MAX);
    dis[source]=0;
    pair<int , int> p=make_pair(0 , source);
    set<pair<int , int>> least;
    least.insert(p);
    while(!least.empty()){
        auto top = *(least.begin());
        int disT = top.first;
        int node = top.second;
        least.erase(least.begin());
        for(auto i : Adj[node]){
            if(disT + i.second<dis[i.first]){
                auto record = least.find(make_pair(dis[i.first] , i.first));
                if(record!=least.end()){
                    least.erase(record);
                }
                dis[i.first]=disT + i.second;
                least.insert(make_pair(dis[i.first] , i.first));
            }
        }
    }
    return dis;
}
int main(){
    vector<vector<int>>  vec = {{0,2,1} , {0,3,2} , {10,1,7} , {2,1,3} , {1,3,5} , {1,4,1} , {3,4,7}};
    int vertex=6;
    int edges=7;
    vector<int> ans = dijkstra(vec , vertex  , edges , 0);
    for(int i=0 ; i<ans.size() ; i++){
        cout<<ans[i]<<endl;
    }
    return 0;
}