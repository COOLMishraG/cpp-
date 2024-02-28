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







int main(){
    node* root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->right->right=new node(6);
    root->right->right=new node(7);


}
