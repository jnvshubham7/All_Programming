 class Solution {
     public:
 
 vector<string> permutation(string S){




    //  Given a string you need to print all possible strings that can 
    //  be made by placing spaces (zero or one) in between them. 
    //  The output should be printed in sorted increasing order of strings


     vector<string> ans;
        if(S.length() == 0) return ans;
        vector<string> ans1;
        ans1.push_back(S);
        ans.push_back(S);

        for(int i=0;i<S.length();i++)
        {
            if(S[i]==' ')
            {
                continue;
            }
            string s = S;
            s.erase(i,1);
            s.insert(i," ");
            ans1.push_back(s);
        }

        sort(ans1.begin(),ans1.end());
        for(int i=0;i<ans1.size();i++)
        {
            if(ans1[i]!=ans[i])
            {
                ans.push_back(ans1[i]);
            }
        }
        return ans;

        

         

    // vector<string> ans;
    // if (S.length() == 0) {
    //     return ans;
    // }


    // for(int i = 0; i < S.length(); i++) {
    //     string temp = S.substr(0, i) + " " + S.substr(i+1);
    //     ans.push_back(temp);
    // }

    // return ans;















    // vector<string> ans;
    // if(S.length() == 0) return ans;
    // if(S.length() == 1) {
    //     ans.push_back(S);
    //     return ans;
    // }
    // for(int i = 0; i < S.length(); i++) {
    //     string left = S.substr(0, i);

    //     string right = S.substr(i+1, S.length()-i-1);

    //     vector<string> left_ans = permutation(left);
    //     vector<string> right_ans = permutation(right);


    //     for(int j = 0; j < left_ans.size(); j++) {
    //         for(int k = 0; k < right_ans.size(); k++) {
    //             string temp = left_ans[j] + S[i] + right_ans[k];
    //             ans.push_back(temp);
    //         }
    //     }
    // }
    // return ans;







     
        // Code Here
    }


 };