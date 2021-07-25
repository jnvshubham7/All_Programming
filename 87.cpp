#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node *left,*right;
    }typedef n;

n*create(int data)
{
    n*vpn=new node;
    vpn->data = data;
    vpn->left = NULL;
    vpn->right=NULL;
    return vpn;
}
void preorder(n*root){
    if(root==NULL)return;
    cout<<root->data<<" ";
    preorder(root->right);
    preorder(root->left);
}
int main()
{
    n*root = new node;
    root->data = 1;
    root->left=create(2);
    root->left->left = create(4);
    root->left->right = create(5);
    root->right = create(3);
    root->right->left = create(6);
    root->right->right = create(7);
    preorder(root);


}