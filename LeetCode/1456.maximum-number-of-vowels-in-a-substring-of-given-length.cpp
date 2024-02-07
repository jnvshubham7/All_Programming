/*
 * @lc app=leetcode id=1456 lang=cpp
 *
 * [1456] Maximum Number of Vowels in a Substring of Given Length
 */

// @lc code=start
class Solution {
public:
    int maxVowels(string s, int k) {

        int n=s.size();
        int l=0, r=0, sz=0, v_len=0;

        int ans=0;

        while(r<n)
        {
            if(vol(s[r]))
            {
                sz++;
                v_len++;
            }
            else{
                sz++;
            }

            while(sz>k)
            {
                if(vol(s[l]))
                {
                    v_len--;
                    sz--;
                }
                else{
                    sz--;
                }
                l++;
            }

            ans =max(ans,v_len);
            r++;





        }


        return ans;


        
    }


    bool vol(char ch)
    {
        return (ch=='a' || ch =='e' || ch=='i' || ch=='o' || ch=='u');
    }



};
// @lc code=end

