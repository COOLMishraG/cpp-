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
int main(){
    node* root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    cout<<root->right->left<<"ok?";
    return 0;
}