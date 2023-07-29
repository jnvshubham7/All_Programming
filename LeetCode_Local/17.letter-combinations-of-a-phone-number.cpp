/*
 * @lc app=leetcode id=17 lang=cpp
 *
 * [17] Letter Combinations of a Phone Number
 */

// @lc code=start
class Solution {
public:
   
    vector<string> letterCombinations(string digits) {

       

        vector<string> ans;

        if(digits.size()==0)
        return ans;

        string output="";
        int index=0;



       unordered_map<char,string> m;

        m['2']="abc", m['3']="def", m['4']="ghi", m['5']="jkl", m['6']="mno", m['7']="pqrs", m['8']="tuv", m['9']="wxyz";

        solve(digits, index, output, ans, m);

        return ans;


    }

    void solve(string digits, int index, string output, vector<string> &ans, unordered_map<char,string> m)
    {
        if(index == digits.size())
        {
            ans.push_back(output);
            return;
        }

        string s=  m[digits[index]];

        for(int i=0;i<s.size();i++)
        {
            output.push_back(s[i]);
            solve(digits, index+1, output, ans, m);
            output.pop_back();
        }

        


    }



};
// @lc code=end

