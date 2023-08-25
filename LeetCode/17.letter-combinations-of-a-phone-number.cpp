/*
 * @lc app=leetcode id=17 lang=cpp
 *
 * [17] Letter Combinations of a Phone Number
 */

// @lc code=start
class Solution {
public:
   
    vector<string> letterCombinations(string digits) {


        vector<string> str = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv","wxyz"};


        vector<string> ans;

        int n=digits.size();

        if(n==0)
            return ans;


        rec(str,ans,digits,0,digits.size(),"");

        return ans;



       

       


    }

    void rec(vector<string> &str,vector<string> &ans,string digits,int i,int n,string temp)
    {
        if(i==n)
        {
            ans.push_back(temp);
            return;
        }

        int index=digits[i]-'0';

        for(int j=0;j<str[index].size();j++)
        {
            temp.push_back(str[index][j]);
            rec(str,ans,digits,i+1,n,temp);
            temp.pop_back();
        }
    }



    



};
// @lc code=end

