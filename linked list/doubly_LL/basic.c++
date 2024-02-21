#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node* prev;
    node(int val){
        data=val;
        next=NULL;
        prev=NULL;
    }
};

void ADD_TAIL(node* &head , int val){
    node* node1=new node(val);
    node* temp=head;
    node* prev1;
    while(temp->next!=NULL){
        prev1=temp;
        temp=temp->next;
    }
    temp->next=node1;
    node1->prev=prev1;
}

void print(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
}

int main(){
    node* node1=new node(0);
    node* head=node1;
    ADD_TAIL(head,1);
        ADD_TAIL(head,2);
    ADD_TAIL(head,3);
    ADD_TAIL(head,4);
    ADD_TAIL(head,5);
    ADD_TAIL(head,6);
    print(head);

}