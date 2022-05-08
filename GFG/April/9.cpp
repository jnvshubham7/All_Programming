
class Solution{
public:



    // int sum_at_distK(Node* root, int target, int k)
    // {

    //     if(root==NULL)
    //     {
    //         return 0;
    //     }

    //     if(k==0)
    //     {
    //         return root->data;
    //     }
    //     //also add that node
    //      return sum_at_distK(root->left, target, k-1) + sum_at_distK(root->right, target, k-1) + root->data;




unordered_map<Node*,Node*> mp;
Node *start;
int sum;
set<Node*> s;
void findParent(Node *root,Node *par,int target)
{
   if(!root) return;
   if(root->data==target) start=root;
   mp[root]=par;
   findParent(root->left,root,target);
   findParent(root->right,root,target);
}
void solve(Node *root,int k)
{
   if(!root) return;
   if(k<0) return;
   if(s.count(root)) return;
   sum+=root->data;
   s.insert(root);
   solve(root->left,k-1);
   solve(root->right,k-1);
   solve(mp[root],k-1);
}


















//    int sum_at_distK(Node* root, int target, int k)
//    {
//        // code here
//        start=NULL;
//        Node *par=NULL;
//        findParent(root,par,target);
//        sum=0;
//        solve(start,k);
//        return sum;


//         int left=sum_at_distK(root->left,target,k-1);
//         int right=sum_at_distK(root->right,target,k-1);
//         int curr=root->data;
//         if(root->data==target)
//         {
//             curr+=sum_at_distK(root->left,target,k);
//             curr+=sum_at_distK(root->right,target,k);
//         }
//         return left+right+curr;
    
        























        // if(root==NULL)
        //     return 0;
        // if(k==0)
        //     return root->data;
        // return sum_at_distK(root->left, target, k-1) + sum_at_distK(root->right, target, k-1);

        //sum of all node within distance k from target node
        // if(root==NULL)
        //     return 0;
        // if(k==0)

        //     return root->data;
        // else
        //     return sum_at_distK(root->left, target, k-1) + sum_at_distK(root->right, target, k-1);
    


        // code here
    }
};
