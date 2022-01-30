

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
    void inOrderTraverse(TreeNode *root, vector<int>& vec)
    {
        if(root)
	    {
		    inOrderTraverse(root->left, vec);
		    vec.push_back(root->val);
		    inOrderTraverse(root->right, vec);

	    }
    }
    
    
    void mergeVectors(vector<int> vec1, vector<int> vec2, vector<int>& mergedVectors)
    {
        int i = 0, j = 0, k = 0; 

        while (i < vec1.size() && j < vec2.size()) 
        { 
        
            if (vec1[i] < vec2[j]) {
                mergedVectors[k] = vec1[i]; 
                k++;
                i++;
            } else{
                mergedVectors[k] = vec2[j];
                k++;
                j++;
            }    
        } 
  
    
        while (i < vec1.size()) {
            mergedVectors[k] = vec1[i];
            k++;
            i++;
        }    
  
    
        while (j < vec2.size()) {
            mergedVectors[k] = vec2[j];
            k++;
            j++;
        }
        
    } 
    
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2)
    {
        vector<int> tree1, tree2;
        inOrderTraverse(root1, tree1);
        inOrderTraverse(root2, tree2);
        
        vector<int> mergedVectors(tree1.size() + tree2.size());
        mergeVectors(tree1, tree2, mergedVectors);
        return  mergedVectors;
        
    }
};




























// /**
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//  * };
//  */
// class Solution {
// public:
//     vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {

//     //   if(root1!=NULL){
//     //     return getAllElements(root1->left,root1->right);
//     //   }
//     //   if(root2!=NULL){
//     //     return getAllElements(root2->left,root2->right);
//     //   }

//       //all the elements in the tree are stored in a vector
//         // vector<int> v;
//         // if(root1!=NULL){
//         //     v=getAllElements(root1->left,root1->right);
//         // }
//         // if(root2!=NULL){
//         //     v=getAllElements(root2->left,root2->right);
//         // }
//       //  return v;
//       //store all root1->left->val and root1->right->val 
//         //store all root2->left->val and root2->right->val
//         //merge the two vectors
//         //return the merged vector
//         vector<int> v1;
//         vector<int> v2;
//         if(root1!=NULL){
//             v1=getAllElements(root1->left->val,root1->right->val);
//         v1.push_back(root1->val);

//         }
//         if(root2!=NULL){
//             v2=getAllElements(root2->left,root2->right);
//         v2.push_back(root2->val);
//         }
//         vector<int> v;
//         v.reserve(v1.size()+v2.size());
//         v.insert(v.end(),v1.begin(),v1.end());
//         return v;



//         // vector<int> v3;
//         // v3.reserve(v1.size()+v2.size());
//         // v3.insert(v3.end(),v1.begin(),v1.end());


//           //  return v3;

// //store all left->val and right->val
//         //merge the two vectors
//         //return the merged

//          vector<int> v3;
//         vector<int> v4;
//         if(root1->left!=NULL){
//             v3=getAllElements(root1->left->right,root1->left->left);
           
//             v3.push_back(root1->left->val);
            
//         }
//         if(root2->left!=NULL){
//             v4=getAllElements(root2->left->right,root2->left->left);
//             v4.push_back(root2->left->val);
//         }
           
//         vector<int> v5;
//         v5.reserve(v3.size()+v4.size());
//         v5.insert(v5.end(),v3.begin(),v3.end());
//         v5.insert(v5.end(),v4.begin(),v4.end());
//        // return v5;


       





     



       




       








           
           
          

        
//     }
// };