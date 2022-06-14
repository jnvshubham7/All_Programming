/*
 * @lc app=leetcode id=429 lang=cpp
 *
 * [429] N-ary Tree Level Order Traversal
 */

// @lc code=start
/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:

vector<vector<int>> ans;

void bfs(Node* root)
{
    if(root==NULL)
    return;

    queue<Node*> q;
    q.push(root);

    while(!q.empty())
    {
        int n=root->children.size();
         vector<int> temp;

        for(int i=0;i<n;i++)
        {
         Node* curr=q.front();
        q.pop();


       
        temp.push_back(curr->val);
       // q.push(curr->children);

        //if(curr->left)
       // q.push(curr->left);

       // if(curr->right)
       // q.push(curr->right);

        





        }
        ans.push_back(temp);


        
       

    }
}

    vector<vector<int>> levelOrder(Node* root) {

        bfs(root);

        return ans;

        
    }
};
// @lc code=end

