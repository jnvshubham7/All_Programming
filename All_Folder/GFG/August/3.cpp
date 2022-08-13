




class Solution{
public:
    //Function that constructs BST from its preorder traversal.
    Node* post_order(int pre[], int size)
    {

      vector<int> preorder;
        for(int i=0;i<size;i++)
        {
            preorder.pb(pre[i]);
        }
        return solve(preorder);

        
       
    }

    Node* solve(vector<int>& preorder)
    {
        if(preorder.size()==0)
        {
            return NULL;
        }
        
        int root=preorder[0];
        Node* root_node=new Node(root);
        
        vector<int> left_preorder;
        vector<int> right_preorder;
        
        for(int i=1;i<preorder.size();i++)
        {
            if(preorder[i]<root)
            {
                left_preorder.pb(preorder[i]);
            }
            else
            {
                right_preorder.pb(preorder[i]);
            }
        }
        
        root_node->left=solve(left_preorder);
        root_node->right=solve(right_preorder);
        
        return root_node;
    }
};


