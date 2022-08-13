
// Function to return the ceil of given number in BST.
int findCeil(Node* root, int input) {

    if(root==NULL)
    {
        return -1;
    }

    if(root->data==input)
    {
        return root->data;
    }
    else if(root->data>input)
    {
        int ceil = findCeil(root->left,input);
        if(ceil==-1)
        {
            return root->data;
        }
        else
        {
            return ceil;
        }
    }
    else
    {
        int ceil = findCeil(root->right,input);
        if(ceil==-1)
        {
            return -1;
        }
        else
        {
            return ceil;
        }
       
    }

    return -1;



   
}