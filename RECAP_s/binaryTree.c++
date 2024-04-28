#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* left=NULL;
    node* right=NULL;
    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
void inorder_traversal(node* root){
    if(root==NULL){
        return ;
    }
    inorder_traversal(root->left);
    cout<<root->data<<"->";
    inorder_traversal(root->right);
}
int main(){
    node* root = new node(1);
    root->left=new node(2);
    root->right=new node(3);
    inorder_traversal(root);
    return 0;
}