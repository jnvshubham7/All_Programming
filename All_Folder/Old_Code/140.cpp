// Tree traversal in C++
// Problem Statement:
// Given a binary tree, design an algorithm which creates a linked list of all the nodes at each depth (e.g., if you have a tree with depth D, you'll have D linked lists).


#include <iostream>
#include <queue>
using namespace std;


struct node
{
    int data;
    struct node *left;
    struct node *right;
};


struct node *newNode(int data)
{
    struct node *temp = new struct node;
    temp->data = data;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}







// //Tree traversal in C++
// //https://www.geeksforgeeks.org/tree-traversals-inorder-preorder-and-postorder/


// #include<bits/stdc++.h>
// using namespace std;


// struct node
// {
//     int data;
//     struct node *left;
//     struct node *right;
// };


// struct node *newNode(int data)
// {
//     struct node *temp = (struct node *)malloc(sizeof(struct node));
//     temp->data = data;
//     temp->left = NULL;
//     temp->right = NULL;
//     return temp;
// }


// void inorder(struct node *root)
// {
//     if(root == NULL)
//         return;
//     inorder(root->left);
//     cout<<root->data<<" ";
//     inorder(root->right);
// }


// void preorder(struct node *root)
// {
//     if(root == NULL)
//         return;
//     cout<<root->data<<" ";
//     preorder(root->left);
//     preorder(root->right);
// }


// void postorder(struct node *root)
// {
//     if(root == NULL)
//         return;
//     postorder(root->left);
//     postorder(root->right);
//     cout<<root->data<<" ";
// }


// int main()
// {
//     struct node *root = newNode(1);
//     root->left = newNode(2);
//     root->right = newNode(3);
//     root->left->left = newNode(4);
//     root->left->right = newNode(5);
//     root->right->left = newNode(6);
//     root->right->right = newNode(7);
//     cout<<"Inorder traversal of binary tree is \n";
//     inorder(root);
//     cout<<"\nPreorder traversal of binary tree is \n";
//     preorder(root);
//     cout<<"\nPostorder traversal of binary tree is \n";
//     postorder(root);
//     return 0;
// }
