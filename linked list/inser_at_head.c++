#include<iostream>
using namespace std;
class listnode{
    public:
    int data;
    listnode* next;
    listnode(int n){
       this -> data=n;
       this -> next=NULL;}
};
void insert_at_head(listnode* &head , int val){
    listnode* temp=new listnode(val);
    temp->next=head;
    head=temp;
}

void print(listnode* head){
    listnode* temp=head;
    while(temp!= NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
    
}
int main(){
    listnode* take=new listnode(11);
    listnode* head=take;
    insert_at_head(head , 12);
    cout<<"hello"<<endl;
        insert_at_head(head , 13);

    insert_at_head(head , 14);

    insert_at_head(head , 15);
    print(head);
   
    return 0;
}
