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
void rotate(node* &head){
    node* current=head;
    node* nxt;
    node* prev=NULL;
    while(current!=NULL){
        nxt=current->next;
        current->next=prev;
        prev=current;
        current=nxt;~
    }
    head=prev;
}
void add_to_tail(node* &head , int val){
    node* dummy=new node(val);
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=dummy;
}

void print(node* &head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}
int main(){
    node* new_node=new node(0);
    node* head=new_node;
    add_to_tail(head , 1);
    add_to_tail(head , 2);
    add_to_tail(head , 3);
    add_to_tail(head , 4);
    add_to_tail(head , 5);
    add_to_tail(head , 6);
    rotate(new_node);
    print(new_node);

}