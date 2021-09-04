#include<bits/stdc++.h>
using namespace std;
 
struct Node
{
    int data;
    struct Node* left, *right;
};
 
int minDepth(Node *root)
{
    
    if (root == NULL)
        return -1;
 
   
    if (root->left == NULL && root->right == NULL)
    return 0;
   
    int l = INT_MAX, r = INT_MAX;
    
    if (root->left)
    l = minDepth(root->left);
 
  
    r =  minDepth(root->right);
 
  
    return min(l , r) +1;
}

Node *newNode(int data)
{
    Node *temp = new Node;
    temp->data = data;
    temp->left = temp->right = NULL;
    return (temp);
}
 
int main()
{
   
    Node *root     = newNode(3);
    root->left     = newNode(9);
    root->right     = newNode(20);
    root->left->left = newNode(-1);
    root->left->right = newNode(-1);
     root->right->left = newNode(15);
    root->right->right = newNode(7);
    cout <<minDepth(root);
    return 0;
}