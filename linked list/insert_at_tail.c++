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
        

    
void print(node* &head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data;
        temp=temp->next;
    }
}
int main(){
    cout<<"hello";
    node* n=new node(5);
    node* tail=n;
    node* head=n;
    insert_at_tail(tail , 6);
        insert_at_tail(tail , 7);

    insert_at_tail(tail , 8);

    insert_at_tail(tail , 9);
    print(head);
    return 0;

}