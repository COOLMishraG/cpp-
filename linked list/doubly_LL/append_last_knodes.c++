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

void add(node* &head , int val){
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

node* append(node* &head , int index){
    node* temp=head;
    node* newhead;
    node* newtail;
    int count =1;
while(temp->next!=NULL){
    if(count==index){
        newtail=temp;
    }
    if(count==index+1){
        newhead=temp;
    }
    temp=temp->next;
    count++;
}
    newtail->next=NULL;
    temp->next=head;
    return newhead;
}
//printing the emelmentas
void print(node* &head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
}
int main(){
    node* node1 = new node(0);
    node* head=node1;
    add(head, 1);
    add(head ,2);
    add(head ,3);
    add(head ,4);
    add(head ,5);
    add(head ,6);
    add(head ,7);
    node* ans=append(head , 3);
    print(ans);
    return 0;

}