 long long findMaxScore(Node* root)
    {
        // Your code goes here
        if(root== NULL) return 1;
        if(root->left==NULL) return (root->data)*(findMaxScore(root->right));
        else if(root->right==NULL) return (root->data)*(findMaxScore(root->left));
        else return max((root->data)*(findMaxScore(root->right)),(root->data)*(findMaxScore(root->left)));   
    }