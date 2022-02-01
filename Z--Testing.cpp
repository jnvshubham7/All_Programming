//  vector<int> printCousins(Node* root, Node* node_to_find)
//     {








// vector<int> printCousins(Node* root, Node* node_to_find)
//     {
//        //level
//        //O(N)
       
//        queue<Node*>q;
//        q.push(root);
//        bool marker = true;
//        while(!q.empty() && marker)
//        {
//            int n = q.size();
           
//            for(int i=0;i<n;i++)
//            {
//                Node* node = q.front();
//                q.pop();
//                if(node->left==node_to_find || node->right ==node_to_find)
//                marker = false;
//                else
//                { //push the children
//                if(node->left)q.push(node->left);
//                if(node->right)q.push(node->right);
//                }
//            }
//        }
       
//        if(q.empty())return {-1};
//        else
//        {
//             vector<int>ans;
//             while(!q.empty())
//             {
//                 ans.push_back(q.front()->data);
//                 q.pop();
//             }
            
//             return ans;
//        }

//     }










//         // vector<int> ans;
//         // if(root==NULL)
//         //     return ans;
//         // queue<Node*> q;

//         // q.push(root);
//         // q.push(NULL);
//         // while(!q.empty())
//         // {
//         //     Node* temp = q.front();
//         //     q.pop();
//         //     if(temp==NULL)
//         //     {
//         //         if(q.size()==1)
//         //             break;
//         //         q.push(NULL);
//         //         continue;
//         //     }
//         //     if(temp->left!=NULL)
//         //         q.push(temp->left);
//         //     if(temp->right!=NULL)
//         //         q.push(temp->right);
//         // }
//         // while(!q.empty())
//         // {
//         //     Node* temp = q.front();
//         //     q.pop();
//         //     if(temp==NULL)
//         //         continue;
//         //     if(temp->data==node_to_find->data)
//         //     {
//         //         if(temp->left!=NULL)
//         //             ans.push_back(temp->left->data);
//         //         if(temp->right!=NULL)
//         //             ans.push_back(temp->right->data);
//         //     }
//         // }
//         // return ans;


        





//         //code here
//     }
















 string reverseWords(string S) 
    { 


       // function 
        reverse (S) {
    S = word.split('.').reverse().join('.');
    
    return S;

}
// word = 'i.like.this.program.very.much'
// word = 'pqr.mno'
// console.log(reverse(word))


        //reverse the whole string not char 
        //store the word in vector which . is provided by the user
        //reverse the word and store it in the vector
        //convert the vector to string
        //return the string
//assume . is the space
//then store all words in vector
//reverse the words and store it in the vector
//convert the vector to string
//return the string
        // vector<string> v;
        // stringstream ss(S);
        // string temp;
        // while(ss>>temp)
        // {
        //     v.push_back(temp);
        // }
        // for(int i=0;i<v.size();i++)
        // {
        //     reverse(v[i].begin(),v[i].end());
        // }











        // string ans;
        // vector<string> v;
        // stringstream ss(S);
        // string temp;
        // while(ss>>temp)
        // {
        //     v.push_back(temp);
        // }
        // for(int i=v.size()-1;i>=0;i--)
        // {
        //     ans+=v[i];
        //     if(i!=0)
        //     ans+=" ";
        // }   
        // return ans;






        //reverse each word

        // code here 
    } 













