/*
 * @lc app=leetcode id=336 lang=cpp
 *
 * [336] Palindrome Pairs
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> palindromePairs(vector<string>& s) {
        
        int n=s.size();
        
        vector<vector<int>> v;
        
        string temp="";
        
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                temp=s[i]+s[j];
                if(pal(temp))
                {
                    v.push_back({i,j});
                }
                
                temp=s[j]+s[i];
                 if(pal(temp))
                {
                    v.push_back({j,i});
                }
                
                
            }
            
        }

        
        return v;
        
        
        
        
    }
    
    bool pal(string s)
    {
        int n=s.size();
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!=s[n-1-i])
            {
                return false;
            }
        }
        
        return true;
    }
};
// @lc code=end

