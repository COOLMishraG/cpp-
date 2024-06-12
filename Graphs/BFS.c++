#include<iostream>
#include<unordered_map>
#include<list>
using namespace std;
class graph{
    public:
    unordered_map<int ,list<int>> m1;
    void addEdge(int u , int v , bool dir){
        m1[u].push_back(v);
        if(dir==0){
            m1[v].push_back(u);
        }
    }
    
};
int main(){

}