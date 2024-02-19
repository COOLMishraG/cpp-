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
void add_to_tail(node* &tail , int val){
    node* n=new node(val);
    tail->next=n;
    tail=tail->next;
}
void delete_node(node* &head , int index){
    node* temp=head;
    node* prev=nullptr;
    while(temp!=nullptr && temp->data!=index){
        temp=temp->next;
        prev=temp;
    }
    delete temp;
}
void print(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}
int main(){
    node* node1= new node(1);
    node* head=node1;
    
    node* tail=node1;
    add_to_tail(tail , 2);
        add_to_tail(tail , 3);
    add_to_tail(tail , 4);
    add_to_tail(tail , 5);
    add_to_tail(tail , 6);
    delete_node(head , 3);
    print(head);
}
