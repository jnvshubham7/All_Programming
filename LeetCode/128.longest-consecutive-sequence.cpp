/*
 * @lc app=leetcode id=128 lang=cpp
 *
 * [128] Longest Consecutive Sequence
 */

// @lc code=start
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        

        int n=nums.size();
        if(n==0) return 0;
        if(n==1) return 1;
        sort(nums.begin(), nums.end());

        int ans=0;

        set<int> st;
        for (int i=0; i<n; i++) { 
            st.insert(nums[i]);
            }

            //print st
            for (int i=0; i<st.size();i++)
            {
               // cout<<st[i]<<" ";
            }


            vector<int> v;

           
           for(auto x:st)
           {
            v.push_back(x);
            
           }

           for(int i=0; i<v.size();i++)
           {
            if(v[i+1]-v[i]==1)
            {
                continue;
            }
            else
            {
                ans=i;
                
                break;
                
            }
           }

           return ans+1;






        
        
    }
};
// @lc code=end

