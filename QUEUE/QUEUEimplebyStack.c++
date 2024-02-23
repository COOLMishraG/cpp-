#include<iostream>
#include<queue>
using namespace std;
class stack{
    int N;
    queue<int> q1;
    queue<int> q2;
    public:
    stack(){
        N=0;
    }
    void push(int val){
        q1.push(val);
        while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
        }
        queue<int> temp;
        temp=q1;
        q1=q2;
        q2=temp;
    }
    void pop(){
        if(q1.front()==-1){
            cout<<"nothing here"<<endl;
            return;
        }
        q1.pop();
    }
    int top(){
        if(q1.front()==-1){
            cout<<"nothing here"<<endl;
            return -1;
        }
        return q1.front();
    }
    bool empty(){
        if(q1.empty()){
            return true;
        }
        return false;
    }

};
int main(){
    stack s;
    s.push(0);
        s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    cout<<s.top()<<endl;
    s.pop();
    s.pop();
    cout<<s.top()<<endl;
    return 0;

}