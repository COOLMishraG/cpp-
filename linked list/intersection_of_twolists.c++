#include<iostream>
using namespace std;
class ListNode{
    public:
    int data;
    ListNode* next;
    ListNode(int val){
        data=val;
        next=NULL;
    }
};

int len(ListNode* &head){
        ListNode* temp=head;
        int count=1;
        while(temp->next!=NULL){
            temp=temp->next;
            count++;
        }
        return count;
    }
void add(ListNode* &head , int val){
    ListNode* dummy=new ListNode(val);
    ListNode* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=dummy;
}

ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA==headB){
            return headA;
        }
        ListNode* startA=headA;
        ListNode* startB=headB;
        int la=len(headA);
        int lb=len(headB);

        if(la>lb){
           
            for(int i=0 ; i< (la-lb) ; i++){
                startA=startA->next;
            }
        }
         if(len(headB)>len(headA)){
            for(int i=0 ; i< (lb-la) ; i++){
                startB=startB->next;
            }
        }
        int count =1;
        while(count!=la || count!=lb){
            if(startA==startB){
                return startA;
            }
            if(startA->next==startB->next){
                return startA->next;
            }
            startA=startA->next;
            startB=startB->next;

        
        }
        return NULL;
    }
void print(ListNode* head){
    ListNode* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
}
int main(){
    ListNode* node1=new ListNode(0);
    ListNode* headA=node1;
    add(headA, 1);
    add(headA ,2);
    add(headA ,3);
    add(headA ,4);
    add(headA ,5);
    add(headA ,6);
    add(headA ,7);
    ListNode* node2=new ListNode(17);
    ListNode* headB=node2;
    add(headB, 11);
    add(headB ,22);
    add(headB ,31);
    add(headB ,4);
    add(headB ,5);
    add(headB ,6);
    add(headB ,7);
    ListNode* ans=getIntersectionNode(headA , headB);
    print(ans);
    return 0;

}