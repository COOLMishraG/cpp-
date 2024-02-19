//radhe radhe
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
node* reccur(node* &head){
    if(head==NULL || head->next==NULL ){
        return head;
    }
     node* newhead=reccur(head->next);
     node* headnext= head->next;
     headnext->next=head;
     head->next=NULL;
     return newhead;

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
        cout<<temp->data<<"->";
        temp=temp->next;
    }
}
int main(){
    node* node1=new node(0);
    node* head=node1;
    add_to_tail(head , 1);
        add_to_tail(head , 2);
    add_to_tail(head , 3);
    add_to_tail(head , 4);
    add_to_tail(head , 5);
   // print(head);
    node* ans=reccur(head);
    print(ans);
    

}