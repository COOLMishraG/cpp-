#include<iostream>
#include<unordered_map>
#include<list>
#include<vector>
#include<utility>
#include<queue>
using namespace std;
vector<int> TOPO(vector<vector<int>> &v1 , int v , int e){
    unordered_map<int , list<int>> adjlist;
    for(int i=0 ; i<e ; i++){
        int u=v1[i][0];
        int v=v1[i][1];
    adjlist[u].push_back(v);
    }
    vector<int> InDegree(v , 0);
    for(auto i : adjlist){
        for(auto j : i.second){
            InDegree[j]++;
        }
    }
queue<int> q1;
for(int i=0 ; i<v ; i++){
    if(InDegree[i]==0){
        q1.push(i);
    }
}
vector<int> ans;
while(!q1.empty()){
    int front=q1.front();
    q1.pop();
    ans.push_back(front);
    for(auto i: adjlist[front]){
        InDegree[i]--;
        if(InDegree[i]==0){
            q1.push(i);
        }
    }
}
return ans;
     
}
int main() {
    vector<vector<int>> v1 = {
        {1, 2}, {1, 3}, {2, 4}, {4, 5}, {3, 4}
    };
    
    vector<int> ans = TOPO(v1, 5, 5);
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << endl;
    }

    return 0;
}