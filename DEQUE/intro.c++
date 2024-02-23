#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int> dq;
    dq.push_front(1);
    dq.push_front(2);
    dq.push_back(3);
    dq.push_back(4);
    for(auto i :dq){
        cout<<i<<endl;
    }
    dq.pop_front();
    for(auto i :dq){
        cout<<i<<endl;
    }

    return 0;

}