#include<iostream>
#include<vector>
#include<queue>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;
    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
void Level_order(node* root){
    vector<vector<int>> ans;
    if(root==NULL){
        return ;
    }
    queue<node*> q1;
    q1.push(root);
    while(!q1.empty()){
        int size=q1.size();
        vector<int> level;
        for(int i=0 ; i<size ; i++){
            node* temp=q1.front();
            q1.pop();
            if(temp->left!=NULL){
                q1.push(temp->left);
            }
            if(temp->right!=NULL){
                q1.push(temp->right);
            }
            cout<<temp->data<<" ";
        }
        cout<<endl;
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
    Level_order(root);
   
    return 0;
        }