#include <iostream>
#include <vector>
#include <unordered_map>
#include <utility>
#include <list>
#include <stack>
using namespace std;

void prepAdj(unordered_map<int, list<int>> &Adj, vector<pair<int, int>> &v1) {
    for (int i = 0; i < v1.size(); i++) {
        int u = v1[i].first;
        int v = v1[i].second;
        Adj[u].push_back(v);
        // Since it's a directed graph, we don't add Adj[v].push_back(u);
    }
}

void TopoSort(unordered_map<int, list<int>> &Adj, stack<int> &s1, int node, unordered_map<int, bool> &isVisited) {
    isVisited[node] = true;
    for (auto i : Adj[node]) {
        if (!isVisited[i]) {
            TopoSort(Adj, s1, i, isVisited);
        }
    }
    s1.push(node);
}

vector<int> TOPO(vector<pair<int, int>> &v1, int v, int e) {
    unordered_map<int, list<int>> Adj;
    prepAdj(Adj, v1);
    stack<int> s1;
    unordered_map<int, bool> isVisited;
    
    // Initialize all nodes as not visited
    for (int i = 0; i < v; i++) {
        isVisited[i] = false;
    }

    for (int i = 0; i < v; i++) {
        if (!isVisited[i]) {
            TopoSort(Adj, s1, i, isVisited);
        }
    }

    vector<int> ans;
    while (!s1.empty()) {
        ans.push_back(s1.top());
        s1.pop();
    }
    return ans;
}

int main() {
    vector<pair<int, int>> v1 = {
        {1, 2}, {1, 4}, {2, 7}, {4, 7}, {7, 9}, {7, 8}
    };
    
    vector<int> ans = TOPO(v1, 6, v1.size());
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << endl;
    }

    return 0;
}
