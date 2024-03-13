#include<iostream>
#include<vector>
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
bool getpath(node* root , node* target , vector<int> &ans){
    if(root==NULL){
        return NULL;
    }
    ans.push_back(root->data);

    if(root==target){
        return true;
    }
    if(getpath(root->left , target  ,ans) || getpath(root->right , target , ans)){
        return true;
    }
    ans.pop_back();
    return false;
}
int getnode(node* root ,  node* p , node* q ){
    if(root==NULL){
        return -1;
    }
    vector<int> path1 ,path2;
    if(!getpath(root, p , path1) && !getpath(root , q ,path2)){
        return -1;
    }
    int i=0;
    for( i=0 ; i<path1.size()&& path2.size() ; i++){
        if(path1[i]!=path2[i]){
            break;
        }
    }
    return path1[i+1];
    
}

int main(){
    node* root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->right->right=new node(6);
    root->right->right=new node(7);
   cout << getnode(root , root->left , root->right->right);


}
