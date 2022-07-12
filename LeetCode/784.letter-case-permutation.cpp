/*
 * @lc app=leetcode id=784 lang=cpp
 *
 * [784] Letter Case Permutation
 */

// @lc code=start
class Solution {
public:

     vector<string> ans;

    void letter_case_permutation(string input,string output){
    if(input.size()==0){
        ans.push_back(output);
        cout<<output<<" ";
        return;
    }

    if(isalpha(input[0]))
    {
        string op1=output;
        string op2=output;
        op1.push_back(tolower(input[0]));
        op2.push_back(toupper(input[0]));
        input.erase(input.begin()+0);
        letter_case_permutation(input,op1);
        letter_case_permutation(input,op2);

        return;

    }

    else{
        string op=output;
        op+=input[0];
        input.erase(input.begin()+0);
        letter_case_permutation(input,op);
        return;
    }

    }


   



    vector<string> letterCasePermutation(string s) {

        letter_case_permutation(s,"");
        return ans;
        
    }
};
// @lc code=end

