/*
 * @lc app=leetcode id=2099 lang=cpp
 *
 * [2099] Find Subsequence of Length K With the Largest Sum
 */

// @lc code=start
class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {

        int n=nums.size();

       //heap for largest element come first
        priority_queue<int> pq;

        //print pq
        

       


       
        for(int i=0;i<k;i++)
        {
            pq.push(nums[i]);
        }

        //print pq
        for(int i=0;i<k;i++)
        {
            cout<<pq.top()<<" ";
            pq.pop();
        }
        cout<<endl;




       vector<int> ans;

       for(int i=0;i<k;i++)
       {
           ans.push_back(pq.top());

           pq.pop();
          
       }


       return ans;


        
    }
};
// @lc code=end

