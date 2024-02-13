#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int val){
        data = val;
        next=NULL;
    }
};
void insert_at_tail(node* &tail , int val){
    node* n1=new node(val);
    tail->next=n1;
    tail=n1;
}
void print(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}
int main(){
    node* node1=new node(10);
    node* tail=node1;
    insert_at_tail(tail , 11);
    insert_at_tail(tail , 12);
    insert_at_tail(tail , 13);
    print(node1);
        return 0;
}