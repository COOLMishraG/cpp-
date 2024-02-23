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
        N++;
    }
    void pop(){
        if(q1.empty()){
            cout<<"nothingot pop";
            return;
        }
        while(q1.size() != 1){
            q2.push(q1.front());
            q1.pop();
        }
        q1.pop();
        N--;
        queue<int> temp;
        temp=q1;
        q1=q2;
        q2=temp;
    }
    int top(){
        if(q1.empty()){
            return NULL;
        }
        while(q1.size()!=1){
            q2.push(q1.front());
            q1.pop();
        }
        int ans=q1.front();
        queue<int> temp=q1;
        q1=q2;
        q2=temp;
        return ans;
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