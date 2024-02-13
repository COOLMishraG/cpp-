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
 void insert_at_tail(node* &head , int val){
    node* imp=new node(val);
    head->next=imp;
    head=imp;
 }

 void print(node* &head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
 }

 int main(){
    node* node1=new node(10);
    node* head =node1;
    node* tail=node1;
    insert_at_tail(tail , 11);
        insert_at_tail(tail , 12);
    insert_at_tail(tail, 13);
    insert_at_tail(tail , 14);
    print(head);
    return 0;


 }


