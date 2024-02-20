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

void add_to_tail(node* &head , int val){
    node* dummy=new node(val);
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=dummy;
}

void print(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
bool detect_cycle(node* &head){
    node* slow=head;
    node* fast=head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
            return true;
        } 
    }
    return false;
}

void make_cycle(node* &head, int index){
    node* startnode;
    node* temp=head;
    int k=0;
    while(temp->next!=NULL){
        if(index==k){
            startnode=temp;
        }
        temp=temp->next;
        k++;
    }
    temp->next=startnode;
}
int main(){
    node* node1=new node(0);
    node* head=node1;
    add_to_tail(head , 1);
        add_to_tail(head , 2);

    add_to_tail(head , 3);

    add_to_tail(head , 4);
    add_to_tail(head , 5);
    add_to_tail(head , 6);
    add_to_tail(head , 7);
    // make_cycle(head , 4);
    if(detect_cycle(head)){
        cout<<"worked";
    }else
    {print(head);}
    return 0;

}