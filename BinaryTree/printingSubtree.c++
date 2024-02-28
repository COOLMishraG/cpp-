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
void printSubTree(node* root , int k , vector<int> &ans){

    if(root==NULL || k<0){
        return ;
    }
   if(k==0){
     ans.push_back(root->data);
   }
    printSubTree(root->left ,k-1 , ans);
    printSubTree(root->right ,k-1 , ans);
    return ;
}
// int Ancestor(node* root , node* target , int k , vector<int> &ans){
//     if(root==NULL){
//         return -1;
//     }
//     if(root==target){
//         return 
//     }
int main(){
    vector<int> ans;
    node* root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->right->left=new node(6);
    root->right->right=new node(7);
         printSubTree(root , 1  , ans);
    for(int i=0 ; i<ans.size() ; i++){
        cout<<ans[i]<<endl;
     }


}