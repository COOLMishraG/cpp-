#include<iostream>
using namespace std;

struct node
{
    int data;
    node* right;
    node* left;
    node(int val){
        data=val;
        right=NULL;
        left=NULL;
    }
};
int search(int InOrder[] , int start , int end , int curr){
    for(int i=start ; i<=end ; i++){
        if(InOrder[i]==curr){
            return i;
        }
    }
    return -1;
}
node* BuildTree(int PreOrder[] , int InOrder[] , int start , int end){
        static int idx=4;
        if(start>end){
            return NULL;
        }
        
        int curr=PreOrder[idx];
        idx--;
        node* newnode1=new node(curr);
        if(start==end){
            return newnode1;
        }
        int pos=search(InOrder , start , end , curr);
        newnode1->right=BuildTree(PreOrder , InOrder , pos+1 , end );
        newnode1->left=BuildTree(PreOrder , InOrder , start , pos-1 );
        return newnode1;
}
void displayInOrder(node* root){
    if(root==NULL){
        return;
    }
    displayInOrder(root->left);
    cout<<root->data<<" ";
    displayInOrder(root->right);
}
int main(){
    int PostOrder[]={4 , 2 , 5 , 3 , 1};
    int InOrder[]={4 , 2 , 1 , 5 , 3};
    node* root=BuildTree(PostOrder , InOrder , 0 , 4);
    displayInOrder(root);
    return 0;
}
