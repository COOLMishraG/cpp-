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
// print all the elements of the tree
void PostOrder(node* root){
    if(root==NULL){
        return;
    }
    
    PostOrder(root->left);
    PostOrder(root->right);
    cout<<root->data<<" ";
}
int main(){
    node* root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->right->left=new node(6);
    root->right->right=new node(7);
    PostOrder(root);
    return 0;
}