#include <bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node* left, *right;
};
// Returns true if given tree is BST.
bool isBST(Node* root, Node* l=NULL, Node* r=NULL)
{
	if (root == NULL)
		return true;

	if (l != NULL and root->data <= l->data)
		return false;


	if (r != NULL and root->data >= r->data)
		return false;

	return isBST(root->left, l, root) and
		isBST(root->right, root, r);
}


struct Node* newNode(int data)
{
	struct Node* node = new Node;
	node->data = data;
	node->left = node->right = NULL;
	return (node);
}

// function to construct a BST from its level order traversal
Node *LevelOrder(Node *root , int data) 
{
     if(root==NULL)
	 {    
        root = newNode(data);
        return root;
     }

     //if(data <= root->data)
	//if(data == -1)
		//root->left = LevelOrder(root->left, NULL);

	//else
     	root->left = LevelOrder(root->left, data);
     //else
     	//root->right = LevelOrder(root->right, data);
     return root;     
}
  

Node* constructBst(int arr[], int n)
{
    if(n==0)return NULL;
    Node *root =NULL;
  
    for(int i=0;i<n;i++)
    root = LevelOrder(root , arr[i]);
      
    return root;
}
  
// function to print the inorder traversal
void inorderTraversal(Node* root)
{
    if (!root)
        return;
      
    inorderTraversal(root->left);
    cout << root->data << " ";
    inorderTraversal(root->right);    
}






// Driver program to test above
int main()
{

     freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
   //int arr[] = {7, 4, 12, 3, -1, 6, -1, 8, -1, 1, -1, 5, -1, -1, 10};
    //int arr[] = {5, 1, 4, -1, -1, 3, 6};
    int arr[] = {5, 4, 8, 3, -1, 6, 10};

    int n = sizeof(arr) / sizeof(arr[0]);
      
    Node *root = constructBst(arr, n);



	if (isBST(root,NULL,NULL))
		cout << "Is BST";
	else
		cout << "Not a BST"<<endl;

    cout << "Inorder Traversal: ";
    inorderTraversal(root);
    return 0;    
} 

/*
int main()
{
	struct Node *root = newNode(3);
	root->left	 = newNode(2);
	root->right	 = newNode(5);
	root->left->left = newNode(1);
	root->left->right = newNode(4);

	if (isBST(root,NULL,NULL))
		cout << "Is BST";
	else
		cout << "Not a BST";

	return 0;
}
*/