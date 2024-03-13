#include<iostream>
#include<vector>
using namespace std;
struct TreeNode
{
    int data;
    TreeNode *left,*right;
    TreeNode(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
void printPreorder(TreeNode *root){
    if(root==NULL){
        return ;
    }
    cout<<root->data<<" ";
    printPreorder(root->left);
    printPreorder(root->right);
} 
TreeNode* treefrombst(TreeNode* root , int num){
    if(root == NULL) {
        return new TreeNode(num);
}
if(num<root->data ) {
    root->left= treefrombst(root->left,num);
}else {
    root->right=treefrombst(root->right,num);
}
return root;
}

int main(){
    TreeNode* root=NULL;
    root=treefrombst(root,5);
    treefrombst(root,1);
    treefrombst(root,7);
    treefrombst(root,4);
    treefrombst(root,2);
    treefrombst(root,3);
    printPreorder(root);
    return 0;

}