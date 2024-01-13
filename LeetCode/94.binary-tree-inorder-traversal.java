/*
 * @lc app=leetcode id=94 lang=java
 *
 * [94] Binary Tree Inorder Traversal
 */

// @lc code=start

import java.util.Stack;

import javax.swing.tree.TreeNode;

/**
 * Definition for a binary tree node.
 * public class TreeNode {
 * int val;
 * TreeNode left;
 * TreeNode right;
 * TreeNode() {}
 * TreeNode(int val) { this.val = val; }
 * TreeNode(int val, TreeNode left, TreeNode right) {
 * this.val = val;
 * this.left = left;
 * this.right = right;
 * }
 * }
 */
class Solution {
    public List<Integer> inorderTraversal(TreeNode root) {

        List<Integer> ls = new ArrayList<>();

        if (root == null)
            return ls;

            //use iterative method

     

        return ls; 

        


    // void inorder(List<Integer> ls, TreeNode root) {
    //     if (root == null) {
    //         return;

    //     }

    //     inorder(ls, root.left);
    //     ls.add(root.val);
    //     inorder(ls, root.right);

    // }

}
// @lc code=end
