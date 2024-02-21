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
void ADD_HEAD(node* &head , int val){
   
    node* n=new node(val);
     if(head==NULL){
        n->next=n;
        head=n;
        return;
    }
    node* temp=head;
    while(temp->next!=head){
        temp=temp->next;
    }
    temp->next=n;
    n->next=head;
    head=n;
}
void ADD_TAIL(node* &head , int val){

    if (head==NULL){
        ADD_HEAD(head , val);
        return;
    }
    node* dummy=new node(val);
    node* temp=head;
    while(temp->next!=head){
        temp=temp->next;
    }
    temp->next=dummy;
    dummy->next=head;
}
void print(node* &head){
    node* temp=head;
    do{
        cout<<temp->data<<" ";
        temp=temp->next;
    } while (temp!=head);
    cout<<endl;
}

int main(){
    node* head=NULL;
    ADD_TAIL(head , 0);
        ADD_TAIL(head , 1);
    ADD_TAIL(head , 2);
    ADD_TAIL(head , 3);
    ADD_TAIL(head , 4);
    ADD_TAIL(head , 5);
    ADD_TAIL(head , 6);
    print(head);
    ADD_HEAD(head , 9);
    print(head);

}