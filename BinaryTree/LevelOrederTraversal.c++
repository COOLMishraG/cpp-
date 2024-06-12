#include<iostream>
#include<vector>
#include<queue>
using namespace std;
struct node
{
    int data;
    node* left;
    node* right;
    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
void display(node* root){
    if(root==NULL){
        return;
t    cout<<root->data<<" ";
    display(root->left);
    display(root->right);
}
vector<int> LevelorderTraversal(node* root){
    queue<int> q1;
    q1.push(root->data);
    q1.push(NULL);
    if(root->left!=NULL){
        q1.push(root->left->data);
    }
    if(root->right!=NULL){
        q1.push(root->right->data);
    }
}
int main(){
    node* root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->right->left=new node(6);
    root->right->right=new node(7);
}