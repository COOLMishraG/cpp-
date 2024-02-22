#include<iostream>
#include<stack>
using namespace std;
class queue{
    stack<int> s1;
    stack<int> s2;
    public:
    queue(){}
    void push(int val){
     if(!s1.empty()){
        s1.push(val);
    }
    }
    int pop(){
        if(s1.empty() && s2.empty()){
            cout<<"queue is empty";
            return;
        }if(s2.empty()){
             while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }
        }
        int topvel=s2.top();
        s2.pop();
        return topvel;
    }
  

};