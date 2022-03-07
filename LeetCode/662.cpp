/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

void helper(TreeNode* root, int& min, int& max, int& res){
    if(root == NULL)
        return;
    helper(root->left, min, max, res);
    if(min == -1 || root->val > min)
        res++;
    min = root->val;
    max = root->val;
    helper(root->right, min, max, res);

    
}




    int widthOfBinaryTree(TreeNode* root) {


        //store the width of each level
      //use recursion to traverse the tree
        vector<int> width;
        int max_width = 0;
        int cur_width = 0;
        int cur_level = 0;
        int cur_pos = 0;
        int cur_level_width = 0;

        if(root == NULL)
            return 0;
        width.push_back(1);
        cur_level_width = 1;
        cur_pos = 0;
        cur_level = 0;
        cur_width = 1;
        max_width = 1;
        helper(root, cur_level, cur_pos, cur_width, cur_level_width, width, max_width);
        return max_width;
    }








        // if(root == NULL)
        //     return 0;

        //     //go every level and find the max width of each level and store it in a vector
        // vector<int> v;
        // queue<TreeNode*> q;
        // q.push(root);
        // q.push(NULL);
        // int max_width = 0;
        // while(!q.empty())
        // {
        //     TreeNode* curr = q.front();
        //     q.pop();
        //     if(curr == NULL)
        //     {
        //         if(!q.empty())
        //             q.push(NULL);
        //         v.push_back(q.size());
        //         max_width = max(max_width, q.size());
        //         continue;
        //     }
        //     if(curr->left)
        //         q.push(curr->left);
        //     if(curr->right)

        //         q.push(curr->right);
        // }
        // int i = 0;
        // int j = 0;
        // int max_width2 = 0;
        // while(i < v.size())
        // {
        //     j = i;
        //     while(j < v.size() && v[j] == v[i])
        //         j++;
        //     max_width2 = max(max_width2, j - i);
        //     i = j;
        // }
        // return max(max_width, max_width2);
 

        // if(root == NULL)
        //     return 0;
        // int res = 1;
        // queue<pair<TreeNode*, int>> q;
        // q.push(make_pair(root, 0));
        // while(!q.empty())
        // {
        //     int size = q.size();
        //     int start = q.front().second;
        //     int end = start;
        //     for(int i = 0; i < size; i++)
        //     {
        //         pair<TreeNode*, int> p = q.front();
        //         q.pop();
        //         if(p.first->left)
        //             q.push(make_pair(p.first->left, p.second * 2));
        //         if(p.first->right)

        //             q.push(make_pair(p.first->right, p.second * 2 + 1));
        //         end = max(end, p.second * 2);

        //     }
        //     res = max(res, end - start + 1);

        
    }
};