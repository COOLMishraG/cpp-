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
void ADD(node* &head , int val){
    node* dummy=new node(val);
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=dummy;
}
node* reverseK(node* &head , int k){
    node* curr=head;
    node* prev=NULL;
    node* nxt;
    int count =0;

    while(curr!=NULL && count<k){
        nxt=curr->next;
        curr->next=prev;
        count++;
        prev=curr;
        curr=nxt;
    }
    if(nxt!=NULL){
      
    head->next = reverseK(nxt , k);}
    return prev;
}
void print(node* &head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
int main(){
    node* node1=new node(0);
    node* head=node1;
    ADD(head , 1);
    ADD(head , 2);
    ADD(head , 3);
    ADD(head , 4);
    ADD(head , 5);
    print(head);
    node* tr=reverseK(head , 2);
    print(tr);
}