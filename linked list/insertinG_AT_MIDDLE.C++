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
void insert_at_tail(node* &tail , int val){
        node* temp= new node(val);
            tail->next=temp;
            tail=temp;}


void insert_at_any_index(node* &head , int index , int value){
    node* temp=head;
    int k=0;
    while(k!=index-1){
        k++;  
        temp=temp->next;
    }
        node* imp=new node(value);

    imp->next=temp->next;
    temp->next=imp;
    
    }
void print (node* &head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data;
        temp=temp->next;
    }
}
int main(){
    node* node1=new node(1);
    node* head=node1;
    node* tail=node1;
    insert_at_tail(tail , 2);
    insert_at_tail(tail , 3);
    insert_at_tail(tail , 4);
    insert_at_tail(tail , 6);
    insert_at_tail(tail , 7);
    insert_at_any_index(head , 4 , 5);
    print (head);
    cout<<"helllo";
return 0;

    
}