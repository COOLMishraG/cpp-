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

void adding_to_tail(node* &head , int val){
    node* dummy = new node(val);
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=dummy;
}
node* detectCycle(node *head) {
        node* temp=head;
        node* slow=head;
        node* fast=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
                if(fast==fast->next->next){
                    return fast;
                }
                fast=head;
                while(slow->next!=fast->next){
                    slow=slow->next;
                    fast=fast->next;
                }
                return fast->next;
            }
        }
        return NULL;
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
    adding_to_tail(head , 1);
    adding_to_tail(head , 2);
        adding_to_tail(head , 3);
    adding_to_tail(head , 4);
    adding_to_tail(head , 5);
    adding_to_tail(head , 6);
    print (head);
    return 0;


}