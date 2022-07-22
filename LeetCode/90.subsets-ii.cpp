/*
 * @lc app=leetcode id=90 lang=cpp
 *
 * [90] Subsets II
 */

// @lc code=start
class Solution {
public:
   
    vector<vector<int>> ans;
    vector<int> cur;
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {

        int n=nums.size();
        sort(nums.begin(),nums.end());
        ans.push_back(cur);
        for(int i=0;i<n;i++){
            if(i==0||nums[i]!=nums[i-1]){
                cur.push_back(nums[i]);
                dfs(nums,i+1,cur);
                cur.pop_back();
            }
        }
        return ans;
        
      
       
        
    }

    void dfs(vector<int>& nums,int i,vector<int>& cur){
        if(i==nums.size()){
            ans.push_back(cur);
            return;
        }
        if(i==0||nums[i]!=nums[i-1]){
            cur.push_back(nums[i]);
            dfs(nums,i+1,cur);
            cur.pop_back();
        }
        dfs(nums,i+1,cur);
    }
};
// @lc code=end

