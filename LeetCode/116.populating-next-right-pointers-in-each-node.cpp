/*
 * @lc app=leetcode id=116 lang=cpp
 *
 * [116] Populating Next Right Pointers in Each Node
 */

// @lc code=start
/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {

        queue<Node*> q;

        if(root == nullptr) return root;

        q.push(root);

        while(!q.empty())
        {
            int size = q.size();

            for(int i = 0; i < size; i++)
            {
                Node* curr = q.front();

                q.pop();

                if(i < size - 1) curr->next = q.front();

                if(curr->left != nullptr) q.push(curr->left);

                if(curr->right != nullptr) q.push(curr->right);
            }
        }

        return root;
        
    }

    // time complexity: O(n)
    // space complexity: O(n)
};
// @lc code=end

