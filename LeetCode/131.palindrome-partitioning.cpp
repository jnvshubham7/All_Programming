/*
 * @lc app=leetcode id=131 lang=cpp
 *
 * [131] Palindrome Partitioning
 */

// @lc code=start
class Solution {
public:
    vector<vector<string>> partition(string s) {

        int n = s.size();

        vector<vector<string>> ans;
        vector<string> cur;

        rec(s, 0, n, cur, ans);4

        return ans;
        
    }

    void rec(string s, int i, int n, vector<string>& cur, vector<vector<string>>& ans)
    {
        if(i==n)
        {
            ans.push_back(cur);
            return;
        }

        for(int j = i; j < n; j++)
        {
            if(isPalindrome(s, i, j))
            {
                cur.push_back(s.substr(i, j-i+1));
                rec(s, j+1, n, cur, ans);
                cur.pop_back();
            }
        }
    }

    bool isPalindrome(string s, int i, int j)
    {
        while(i<j)
        {
            if(s[i]!=s[j])
                return false;
            i++;
            j--;
        }
        return true;
    }


};
// @lc code=end

