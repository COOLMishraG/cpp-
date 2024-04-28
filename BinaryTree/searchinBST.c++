#include<iostream>
using namespace std;
struct node{
    int val;
    node* left;
    node* right;
    node(int data){
        val=data;
        left=NULL;
        right=NULL;
    }
};
node* bst(node*  root,int key) { 
     if (root == NULL) return new node(key);    
     else {   
         if (root->val < key)
             root->right = bst(root->right, key);    
         else if (root->val > key)    
             root->left = bst(root->left, key);    
          return root;       
      }    
} 
node* search(node*  root,int key)  {
    if(root==NULL){
        return NULL;
    }
    if(root->val==key){
        return  root;
        cout<<root->val;
    }else if(root->val<key){
        return search(root->right,key);
    }
    return search(root->left,key);
}
void printinorder(node* root){
    if(root==NULL){
        return;
    }
    printinorder(root->left);
    cout<<root->val<<" ";
    printinorder(root->right);

}
int main (){
    node* root=NULL;
    root=bst(root,5);
    bst(root,1);
    bst(root,7);
    bst(root,4);
    bst(root,2);
    bst(root,3);
    printinorder(root);
    cout<<endl<<endl;
    node* temp=search(root,5);
    cout<<endl;
    cout<<temp->val;
    
    return 0;
}