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
    node* headA=node1;
    add(headA, 1);
    add(headA ,2);
    add(headA ,3);
    add(headA ,4);
    add(headA ,5);
    add(headA ,6);
    add(headA ,7);
    node* ans=append(headA , 3);
    print(ans);
    return 0;

}