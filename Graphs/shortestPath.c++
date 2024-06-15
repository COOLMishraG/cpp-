#include<iostream>
#include<vector>
#include<queue>
#include<unordered_map>
#include<list>
#include<algorithm>
using namespace std;
vector<int> SHPath(vector<vector<int>> &v1 , int vertex , int edge , int src , int target){
    unordered_map<int , list<int>> adjlist;
    for(int i=0 ; i<edge ; i++){
        int u=v1[i][0];
        int v=v1[i][1];
        adjlist[u].push_back(v);
    }
    unordered_map<int , bool> isVisited;
    unordered_map<int , int> pareants;
    queue<int> q1;
    q1.push(src);
    isVisited[src]=true;
    pareants[src]=-1;
    while(!q1.empty()){
        int front = q1.front();
        q1.pop();
        for(auto i : adjlist[front]){
            if(!isVisited[i]){
                isVisited[i]=true;
                pareants[i]=front;
                q1.push(i);

            }
        }
    }
    vector<int> ans;
    int currnode =target ;
    while(currnode!=src){
        currnode=pareants[currnode];
        ans.push_back(currnode);
    }
    reverse(ans.begin() , ans.end());
    return ans;
    }
int main() {
    vector<vector<int>> v1 = {
        {1, 2}, {1, 3}, {1, 4}, {4, 6}, {3, 8}, {2, 5}, {6, 7}, {7, 8}, {5, 8}
    };
    
    vector<int> ans = SHPath(v1, 8 , 9 , 1  , 8);
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << endl;
    }

    return 0;
}