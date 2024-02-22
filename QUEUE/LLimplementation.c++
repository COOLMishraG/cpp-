#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int val){
        data=val;
        next=NULL;
    }
};

class queue{

    node* front;
    node* back;
    public:
    queue(){
        front=NULL;
        back=NULL;
    }
    void push(int x){
        node* node1=new node(x);
        if(front==NULL){
            back=node1;
            front=node1;
        }
        back->next=node1;
        back=node1;
    }
    void pop(){
        if(front==NULL || back==NULL){
            cout<<"nothing to print here";
            return;
        }
        node* del=front;
        front=front->next;
        delete del;
    }
    int peek(){
        if(front==NULL && back==NULL){
            cout<<"nothing to see here";
            return -1;
        }
        return front->data;
    }
    bool empty(){
        if(front==NULL){
            return true;
        }
        return false;
    }
};

int main(){
    queue q1;
    q1.push(0);
        q1.push(1);
    q1.push(2);
    q1.push(3);
    q1.push(4);
    q1.push(5);
    cout<<q1.peek()<<endl;
    q1.pop();
    q1.pop();
    cout<<q1.peek()<<endl;
    return 0;
}