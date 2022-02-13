 
    

    
    vector<int> largestValues(Node* root)
    {

        //Given a binary tree, find the largest value in each level.
        if(root==NULL){
            return {};
        }
        vector<int> res;
        queue<Node*> q;
        q.push(root);
        q.push(NULL);
        int maxVal = INT_MIN;
        while(!q.empty()){
            Node* curr = q.front();
            q.pop();
            if(curr==NULL){
                res.push_back(maxVal);
                if(!q.empty()){
                    q.push(NULL);
                }
                maxVal = INT_MIN;
            }
            else{
                maxVal = max(maxVal, curr->data);
                if(curr->left!=NULL){
                    q.push(curr->left);
                }
                if(curr->right!=NULL){
                    q.push(curr->right);
                }
            }
        }

        return res;
        //code here
    }
    
    
    








    vector<int> largestValues(Node* root){

        if(root==NULL){
            return {};

        }

        vector<int> res;
        queue<Node*> q;
        q.push(root);
        q.push(NULL);
        int maxVal=INT_MIN;
        while(!q.empty()){
            Node* curr =q.front();
            q.pop();
            if(curr==NULL){
                res.push_back(maxVal);

                if(!q.empty()){
                    q.push(NULL);

                }

                maxVal =INT_MIN;

            }

            else {
                maxVal =max(maxVal, curr->data);
                if(curr->left!=NULL){
                    q.push(curr->left);

                }
                if(curr->right!=NULL){
                    q.push(curr->right);
                }
            }
        }

        return res;
      
    }