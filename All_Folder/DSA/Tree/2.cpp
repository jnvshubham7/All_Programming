#include <iostream>
using namespace std;
 
class node {
public:
    int data;
    node *left, *right;
};
node* newNode(int data);
node* newNode(int data)
{
    node* Node = new node();
    Node->data = data;
    Node->left = NULL;
    Node->right = NULL;
 
    return (Node);
}
 
int height(node* node) {
    if (node == NULL)
        return 0;
    else {
        int lheight = height(node->left);
        int rheight = height(node->right);
        if (lheight > rheight) {
            return(lheight + 1);
        }
        else {
          return(rheight + 1);
        }
    }
}
 
void CurrentLevel(node* root, int level) {
    if (root == NULL)
        return;
    if (level == 1)
        cout << root->data << " ";
    else if (level > 1) {
       CurrentLevel(root->left, level-1);
       CurrentLevel(root->right, level-1);
    }
}
 
void LevelOrder(node* root) {
    int h = height(root);
    int i;
    for (i = 1; i <= h; i++)
     CurrentLevel(root, i);
}
 
 
 
int main() {
	node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    
    LevelOrder(root);
	return 0;
}