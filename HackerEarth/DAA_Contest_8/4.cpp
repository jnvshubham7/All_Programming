// // #include<bits/stdc++.h>
// // using namespace std;
// // #define ll long long




// // TreeNode<int>* buildTreeHelper(vector<int>& postOrder, int postStart, int postEnd, vector<int>& inOrder, int inStart, int inEnd) 
// // {
// // 	if (postStart > postEnd || inStart > inEnd) 
// // 	{
// // 		return NULL;
// // 	}

// //     // Assign rootVal as postOrder[postEnd]
// // 	int rootVal = postOrder[postEnd];
    
// // 	TreeNode<int>* root = new TreeNode<int>(rootVal);

// // 	// Find parent element index from inOrder array.
// // 	int k = 0;
    
// //     // Iterate i from inStart to inEnd
// //     for (int i = inStart; i <= inEnd; i++) 
// // 	{
// // 		if (rootVal == inOrder[i]) 
// // 		{
// // 			k = i;
// // 			break;
// // 		}
// // 	}

// //     // Create recursive call for left and right subtree
// // 	root -> left = buildTreeHelper(postOrder, postStart, postStart + k - inStart - 1, inOrder, inStart, k - 1);
// // 	root -> right = buildTreeHelper(postOrder, postStart + k - inStart, postEnd - 1, inOrder, k + 1, inEnd);

// // 	return root;
// // }

// // TreeNode<int>* getTreeFromPostorderAndInorder(vector<int>& postOrder, vector<int>& inOrder) 
// // {
// // 	int n = postOrder.size();

// // 	int postStart = 0;
// // 	int postEnd = n - 1;
// // 	int inStart = 0;
// // 	int inEnd = n - 1;

// //     // Call buildTreeHelper function 
// // 	return buildTreeHelper(postOrder, postStart, postEnd, inOrder, inStart, inEnd);
// // }

// // int main(){

// // int t;
// // cin>>t;
// // while(t--){

// //     int n;
// // 	cin>>n;

// // 	//create array a,b

// // 	int a[n];
// // 	int b[n];

// // 	for(int i=0;i<n;i++){
// // 		cin>>a[i];
// // 	}

// // 	for(int i=0;i<n;i++){
// // 		cin>>b[i];
// // 	}

// // 	//sent this input in treenode function 

// // 	vector<int> postOrder;
// // 	vector<int> inOrder;

// // 	for(int i=0;i<n;i++){
// // 		postOrder.push_back(a[i]);
// // 	}

// // 	for(int i=0;i<n;i++){
// // 		inOrder.push_back(b[i]);
// // 	}

// // 	//call treenode function

// // 	TreeNode<int>* root = getTreeFromPostorderAndInorder(postOrder, inOrder);

// // 	//print the tree

// // 	cout<<root->data<<" ";

// // 	//print the tree

// // 	printInorder(root);

// // 	cout<<endl;

// // 	//delete the tree

// // 	deleteTree(root);




    

    

// // }

// //     return 0;
// // }































// #include<bits/stdc++.h>
// using namespace std;


// #include <cstdio>
// #include <cstring>
// #include <cstdlib>
// #include <string>
// #include <cctype>
// #include <climits>
// #include <cmath>
// #include <utility>
// #include <vector>
// #include <queue>
// #include <stack>
// #include <algorithm>
// #include <set>
// #include <map>

// class TreeNode{ 
//    public:
//         int data; 
//         TreeNode *left;
//         TreeNode *right;
   
//         TreeNode(int data) { 
//             this -> data = data; 
//             left = NULL; 
//             right = NULL; 
//         }
// };

// TreeNode* b_t_h(vector<int>& postOrder, int postStart, int postEnd, vector<int>& inOrder, int is, int ie) {
// 	if (postStart > postEnd || is > ie){
// 		return NULL;
// 	}

//     // Assign rootVal as postOrder[postEnd]
// 	int rootVal = postOrder[postEnd];
    
// 	TreeNode* root = new TreeNode(rootVal);

// 	// Find parent element index from inOrder array.
// 	int k = 0;
    
//     // Iterate i from inStart to inEnd
//     for (int i = is; i <= ie; i++) {
// 		if (rootVal == inOrder[i]) {
// 			k = i;
// 			break;
// 		}
// 	}

//     // Create recursive call for left and right subtree
// 	root -> left = b_t_h(postOrder, postStart, postStart + k - is - 1, inOrder, is, k - 1);
// 	root -> right = b_t_h(postOrder, postStart + k - is, postEnd - 1, inOrder, k + 1, ie);

// 	return root;
// }

// TreeNode* getTreeFromPostorderAndInorder(vector<int>& postOrder, vector<int>& inOrder) {
// 	int num_size = postOrder.size();

// 	int p_s = 0;
// 	int p_e = num_size - 1;
// 	int i_s = 0;
// 	int i_e = num_size - 1;

//     // Call buildTreeHelper function 
// 	return b_t_h(postOrder, p_s, p_e, inOrder, i_s, i_e);
// }

// bool p_l(TreeNode* root, int level){
//     if (root == nullptr) {
//         return false;
//     }
 
//     if (level == 1)
//     {
//         cout << root->data << " ";
 
//         // return true if at least one node is present at a given level
//         return true;
//     }
 
//     bool left = p_l(root->left, level - 1);
//     bool right = p_l(root->right, level - 1);
 
//     return left || right;
// }

// void levelOrderTraversal(TreeNode* root){
//     // start from level 1 — till the height of the tree
//     int level = 1;
 
//     // run till printLevel() returns false
//     while (p_l(root, level)) {
//         level++;
//     }
// }

// int main(){
//     int test_case;
//     cin >> test_case;

//     while(test_case--){
//        int num;
// 	   cin >> num;

//         vector<int> postOrder(num),inOrder(num);
        
//         for(int i=0;i<num;i++){
// 			cin >> postOrder[i];

// 		}

// 		for(int i=0;i<num;i++){
// 			cin >> inOrder[i];
// 		}


//         TreeNode* root = getTreeFromPostorderAndInorder(postOrder, inOrder);
//         levelOrderTraversal(root);
//     } 
//     return 0;
// }

























#include<bits/stdc++.h>
using namespace std;

class TreeNode{ 
   public:
        int data; 
        TreeNode *left;
        TreeNode *right;
   
        TreeNode(int data) { 
            this -> data = data; 
            left = NULL; 
            right = NULL; 
        }
};

TreeNode* buildTreeHelper(vector<int>& postOrder, int postStart, int postEnd, vector<int>& inOrder, int inStart, int inEnd) {
	if (postStart > postEnd || inStart > inEnd){
		return NULL;
	}

    // Assign rootVal as postOrder[postEnd]
	int rootVal = postOrder[postEnd];
    
	TreeNode* root = new TreeNode(rootVal);

	// Find parent element index from inOrder array.
	int k = 0;
    
    // Iterate i from inStart to inEnd
    for (int i = inStart; i <= inEnd; i++) {
		if (rootVal == inOrder[i]) {
			k = i;
			break;
		}
	}

    // Create recursive call for left and right subtree
	root -> left = buildTreeHelper(postOrder, postStart, postStart + k - inStart - 1, inOrder, inStart, k - 1);
	root -> right = buildTreeHelper(postOrder, postStart + k - inStart, postEnd - 1, inOrder, k + 1, inEnd);

	return root;
}

TreeNode* getTreeFromPostorderAndInorder(vector<int>& postOrder, vector<int>& inOrder) {
	int n = postOrder.size();

	int postStart = 0;
	int postEnd = n - 1;
	int inStart = 0;
	int inEnd = n - 1;

    // Call buildTreeHelper function 
	return buildTreeHelper(postOrder, postStart, postEnd, inOrder, inStart, inEnd);
}

bool printLevel(TreeNode* root, int level){
    if (root == nullptr) {
        return false;
    }
 
    if (level == 1)
    {
        cout << root->data << " ";
 
        // return true if at least one node is present at a given level
        return true;
    }
 
    bool left = printLevel(root->left, level - 1);
    bool right = printLevel(root->right, level - 1);
 
    return left || right;
}

void levelOrderTraversal(TreeNode* root){
    // start from level 1 — till the height of the tree
    int level = 1;
 
    // run till printLevel() returns false
    while (printLevel(root, level)) {
        level++;
    }
}

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int> postOrder(n),inOrder(n);
        
        for(int i = 0; i < n; i++){
            cin >> postOrder[i];
        }

         for(int i = 0; i < n; i++){
            cin >> inOrder[i];
        }

        TreeNode* root = getTreeFromPostorderAndInorder(postOrder, inOrder);
        levelOrderTraversal(root);
    } 
    return 0;
}