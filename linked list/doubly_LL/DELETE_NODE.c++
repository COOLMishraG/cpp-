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

void ADD_HEAD(node* &head , int val){
    node* node1=new node(val);
    node* temp=head;
    temp->prev=node1;
    node1->next=temp;
    head=node1;}

void print(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
}

void delete_node(node* &head , int val){
    node* temp=head;
    for(int i=1 ; i<val ; i++){
        temp=temp->next;
    }
    temp->next->prev=temp->prev;
    temp->prev->next=temp->next;
    delete temp;
}

int main(){
    node* node1=new node(0);
    node* head=node1;
    ADD_HEAD(head,1);
    ADD_HEAD(head,2);
    ADD_HEAD(head,3);
    ADD_HEAD(head,4);
    ADD_HEAD(head,5);
    ADD_HEAD(head,6);
    delete_node(head , 3);

    print(head);

}