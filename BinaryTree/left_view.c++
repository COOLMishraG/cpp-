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
    }
    cout<<root->data<<" ";
    display(root->left);
    display(root->right);
}

vector<int> leftview(node* root){
    vector<int> result;
    if(root==NULL){
        return result;
    }
    queue<node*> q1;
    q1.push(root);
    while(!q1.empty()){
        int n = q1.size();
        
        for(int i=1 ; i<=n ; i++){
        node* curr=q1.front();
        q1.pop();
            if(i==1){
                result.push_back(curr->data);
            }
            if(curr->left!=NULL){
                q1.push(curr->left);
            }
            
            if(curr->right!=NULL){
                q1.push(curr->right);
            }
        }
    }
    return result;
} 

int main(){
    node* root=new node(5);
    root->left=new node(3);
    root->right=new node(4);
    root->left->left=new node(2);
    root->left->right=new node(4);
    vector<int> ans=leftview(root);
    for(int i=0 ; i<ans.size() ; i++){
        cout<<ans[i]<<" ";
    }
    
    // display(root);
    return 0;
}