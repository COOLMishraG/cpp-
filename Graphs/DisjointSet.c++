#include<bits/stdc++.h>
using namespace std;
bool cmp(vector<int> &a , vector<int> &b ){
    return a[2]<b[2];
}
void makeset(vector<int> &parents , vector<int> & ranks , int n){
    for(int i=0 ; i<n ; i++){
        parents[i]=i;
        ranks[i]=0;
    }
}
int parent(vector<int> &parents , int node){
    if(parents[node]==node){
        return node;
    }
    return parents[node]= parent(parents ,  parents[node]);
} 
void unionset(int u , int v , vector<int> &parents , vector<int> &ranks){
    u= parent(parents , u);
    v= parent(parents , v);
    if(ranks[u]<ranks[v]){
        parents[u]=v;
    }else if(ranks[v]<ranks[u]){
        parents[v]=u;
    } else {
        parents[u]=v;
        ranks[v]++;
    }

}
int minimumSpanningTree(vector<vector<int>> &edges , int n){
    int miniWeight=0;
    sort(edges.begin() , edges.end() , cmp);
    vector<int> parents(n);
    vector<int> ranks(n);
    makeset(parents , ranks , n);
    for(int i=0 ; i<edges.size() ; i++){
        int u = parent(parents , edges[i][0]);
        int v = parent(parents , edges[i][1]);
        if(u!=v){
            miniWeight+=edges[i][2];
            unionset(u , v , parents , ranks);
        }
    }
    return miniWeight;
}
int main(){
    vector<vector<int>>  vec = {{4,5,9} , {3,6,8} , {6,2,7} , {4,3,5} , {1,5,4} ,{2,4,3} , {3,2,3} , {1,2,2} , {1,4,1}};
    int vertex=7;
    int edges=9;
    int ans = minimumSpanningTree(vec,vertex);
    cout<<ans<<endl;
    return 0;
}
