
vector<int> diagonal(Node *root)
{

  vector<int> v;
queue<Node *> q;
q.push(root);

while(!q.empty())
{
  Node* curr=q.front();
  q.pop();
  while(curr)
  {
    v.push_back(curr->data);
    if(curr->left)
    {
        q.push(curr->left);
        
    }
    
    curr=curr->right;   
  }
   
}
return v;
   // your code here
}