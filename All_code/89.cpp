#include<iostream>
#include<climits>
#include<queue>
using namespace std;

class BinaryTreeNode{
public:
    int data;
	BinaryTreeNode* left;
	BinaryTreeNode* right;

	BinaryTreeNode(int data){
		
		this->data = data;
		left = NULL;
		right = NULL;
	}
};

bool isBST(BinaryTreeNode *root , int min = INT_MIN , int max = INT_MAX){
	if(root == NULL){
		return true;
	}

	if(root->data < min || root->data > max){
		return false;
	}

	bool left = isBST(root->left,min,root->data-1);
	bool right = isBST(root->right,root->data,max);

	return left && right;
}


BinaryTreeNode* takeInput(){
	int rootData;
	cin>>rootData;

	if(rootData == -1){
		return NULL;
	}
	BinaryTreeNode* root = new BinaryTreeNode(rootData);
	queue<BinaryTreeNode*> q;
	q.push(root);
    
	while(!q.empty()){
	BinaryTreeNode* currentNode = q.front();
	q.pop();
	int leftChild,rightChild;

	cin>>leftChild;
	if(leftChild != -1){
		BinaryTreeNode* leftNode = new BinaryTreeNode(leftChild);
		currentNode->left = leftNode;
		q.push(leftNode);
	}
	cin>>rightChild;
	if(rightChild != -1){
		BinaryTreeNode* rightNode = new BinaryTreeNode(rightChild);
		currentNode->right = rightNode;
		q.push(rightNode);
	}
  }
  return root;
}

int main(){

     freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	BinaryTreeNode* root = takeInput();
	cout<<(isBST(root) ? "true" : "false");
	return 0;
}