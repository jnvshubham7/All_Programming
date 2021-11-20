#include<bits/stdc++.h>
using namespace std;
#define fileio freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout)


struct Node
{
    int data;
    struct Node *left, *right;
    Node (int data)
    {
        this->data = data;
        left = right = NULL;

    }; 
    
    //Preorder traversal
    void preoderTraversal(Node *root)
    {
        if(root == NULL)
            return;
        cout<<root->data<<" ";
        preoderTraversal(root->left);
        preoderTraversal(root->right);
    }

    //Inorder traversal
    void inorderTraversal(Node *root)
    {
        if(root == NULL)
            return;
        inorderTraversal(root->left);
        cout<<root->data<<" ";
        inorderTraversal(root->right);
    }

    //Postorder traversal
    void postorderTraversal(Node *root)
    {
        if(root == NULL)
            return;
        postorderTraversal(root->left);
        postorderTraversal(root->right);
        cout<<root->data<<" ";
    }

    //Level order traversal
    void levelOrderTraversal(Node *root)
    {
        queue<Node *> q;
        q.push(root);
        while(!q.empty())
        {
            Node *temp = q.front();
            q.pop();
            cout<<temp->data<<" ";
            if(temp->left)
                q.push(temp->left);
            if(temp->right)
                q.push(temp->right);
        }
    }



int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
   

    cout<<"Preorder traversal of binary tree is \n";
    preoderTraversal(root);
    cout<<endl;

    cout<<"Inorder traversal of binary tree is \n";
    inorderTraversal(root);
    cout<<endl;

    cout<<"Postorder traversal of binary tree is \n";
    postorderTraversal(root);
    cout<<endl;

    cout<<"Level order traversal of binary tree is \n";
    levelOrderTraversal(root);
    cout<<endl;

    return 0;






// struct Node
// {
//     int data;
//     struct Node  *left, *right;
//     Node(int data)
//     {
//         this->data = data;
//         left = right = NULL;
//     }
// };

// // Preorder traversal 
// void preorderTraversal(struct Node* node)
// {
//     if (node == NULL)
//         return;
//     cout << node->data << "->";
//     preorderTraversal(node->left);
//     preorderTraversal(node->right);
// }

// //Postorder traversal
// void postorderTraversal(struct Node* node)
// {
//     if (node == NULL)
//         return;
//     postorderTraversal(node->left);
//     postorderTraversal(node->right);
//     cout << node->data << "->";
// }
// //Inorder traversal
// void inorderTraversal(struct Node* node)
// {
//     if (node == NULL)
//         return;
//     inorderTraversal(node->left);
//     cout << node->data << "->";
//     inorderTraversal(node->right);
// }



// int main(){
//     //fileio;


//     struct Node *root = new Node(1);
//     root->left = new Node(12);
//     root->right = new Node(9);
//     root->left->left = new Node(5);
//     root->left->right = new Node(7);

//     cout << "Preorder traversal of binary tree is \n";
//     preorderTraversal(root);

//     cout << "\nInorder traversal of binary tree is \n";
//     inorderTraversal(root);

//     cout << "\nPostorder traversal of binary tree is \n";
//     postorderTraversal(root);

//     return 0;





    // struct Node *root = new Node(1);
    // root->left = new Node(12);
    // root->right = new Node(9);
    // root->left->left = new Node(5);
    // root->left->right = new Node(6);
    
    // cout << "Preorder traversal of binary tree is \n";
    // preorderTraversal(root);
    // cout << "\n";
    // cout << "Postorder traversal of binary tree is \n";
    // postorderTraversal(root);
    // cout << "\n";
    // cout << "Inorder traversal of binary tree is \n";
    // inorderTraversal(root);
    // cout << "\n";
    // return 0;

    

    

   // return 0;
}