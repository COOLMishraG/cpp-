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
node* mergeTwoLists(node* list1, node* list2) {

        node* p1=list1;
        node* p2=list2;
        node* dummy=new node(-1);
        node* p3=dummy;
        while(p1!=NULL && p2!=NULL){
            if(p1->data>p2->data){
                p3->next=p2;
                p2=p2->next;
                p3=p3->next;
            }
            else{
                p3->next=p1;
                p1=p1->next;
                p3=p3->next;
            }
        }
        while(p1!=NULL){
            p3->next=p1;
            p1=p1->next;
            p3=p3->next;
        }
         while(p2!=NULL){
            p3->next=p2;
            p2=p2->next;
            p3=p3->next;
        }
   return dummy->next;
    }

void adding_to_tail(node* &head , int val){
    node* dummy = new node(val);
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
    adding_to_tail(head , 1);
    adding_to_tail(head , 2);
        adding_to_tail(head , 3);
    adding_to_tail(head , 4);
    adding_to_tail(head , 5);
    adding_to_tail(head , 6);
        node* node2=new node(0);
    node* hea=node2;
    adding_to_tail(hea , 1);
    adding_to_tail(hea , 2);
        adding_to_tail(hea , 3);
    adding_to_tail(hea , 4);
    adding_to_tail(hea , 5);
    adding_to_tail(hea , 6);
    node* ans=mergeTwoLists(head , hea);
    print (ans);
    return 0;


}
 
 
 
 
 
 
 
    