/*
 * @lc app=leetcode id=239 lang=cpp
 *
 * [239] Sliding Window Maximum
 */

// @lc code=start
class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
       vector<int> ans;
        list<int> l;
        int i=0;
        int j=0;
        
        if (k>nums.size()) // edge case
        {
            ans.push_back(*max_element(nums.begin(),nums.end()));
            return ans;
        }
        
        while (j<nums.size())
        {
            while(l.size()>0 && l.back() <nums[j])
            {
                l.pop_back();
            }
            l.push_back(nums[j]);
            if ((j-i+1)<k)
                j++;
            else if (j-i+1==k)
            {
                //print the list 

                // for(auto it : l)
                //     cout<<it<<" ";
                // cout<<endl;
                ans.push_back(l.front());
                if (l.front()==nums[i])
                    l.pop_front();
                i++;
                j++;
            }
            
        }
        return ans;
    }
};
// @lc code=end

