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
    ~node(){
        int value =this->data;
        if(this->next!=NULL){
            delete next;
            this -> next=NULL;
        }
        cout<<"memoery freed at"<<value<<endl;
    }
};
void deleter_node(node* &start , int index){
    if(index!=0){
           node* temp=start;
    node* curr=temp->next;
    int k=0;
    while(k<index-1){
        temp=temp->next;
        curr=temp->next;
        k++;
    }
    temp->next=curr->next;
    } else {
        node* temp=start;
        temp=temp->next;
    }
 
    
}
void insert_at_tail(node* &tail , int val){
    node* imp=new node(val);
    tail->next=imp;
    tail=imp;
}
void print (node* &head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}



int main(){
    node* node1=new node(1);
    node* tail=node1;
    node* start=node1;
    insert_at_tail(tail , 2);
        insert_at_tail(tail , 3);
    insert_at_tail(tail , 4);
    insert_at_tail(tail , 5);
    insert_at_tail(tail , 6);
    insert_at_tail(tail , 7);
    insert_at_tail(tail , 8);
    deleter_node(start , 0);
    print (node1);
    return 0;
    
}