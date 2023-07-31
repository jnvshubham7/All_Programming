/*
 * @lc app=leetcode id=318 lang=cpp
 *
 * [318] Maximum Product of Word Lengths
 */

// @lc code=start
class Solution {
public:
    int maxProduct(vector<string>& words) {

        int n=words.size();

        int ans=0;

       

      

        //compare each word with every other word

        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                //if no common character found

                if(check(words[i],words[j]))
                {
                    int len1=words[i].size();
                    int len2=words[j].size();

                    ans=max(ans,len1*len2);
                }
            }
        }

        return ans;


       





        
        
    }

    bool check(string s1,string s2)
    {
        int n=s1.size();
        int m=s2.size();

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(s1[i]==s2[j])
                {
                    return false;
                }
            }
        }

        return true;
    }



};
// @lc code=end

