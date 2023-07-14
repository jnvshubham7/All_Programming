/*
 * @lc app=leetcode id=985 lang=cpp
 *
 * [985] Sum of Even Numbers After Queries
 */

// @lc code=start
class Solution {
public:
     vector<int> ans;
    vector<int> sumEvenAfterQueries(vector<int>& num, vector<vector<int>>& q) {


        int sum=0;
        for(int i=0;i<num.size();i++)
        {
            if(num[i]%2==0)
                sum+=num[i];
                
        }
        cout<<sum<<endl;

        vector<int> ans;
        for(int i=0;i<q.size();i++)
        {
            int val=q[i][0];
            int index=q[i][1];
            if(num[index]%2==0)
                sum-=num[index];
            num[index]+=val;
            if(num[index]%2==0)
                sum+=num[index];
            ans.push_back(sum);
        }
        return ans;


       








        // int n=num.size();
        // int m=q.size();

        // for(auto i:q)
        // {
        //     int index=i[1];
        //     int val=i[0];
        //     num[index]+=val;
        //     int sum=0;
        //     for(auto j:num)
        //     {
        //         if(j%2==0)
        //         {
        //             sum+=j;
        //         }
        //     }
        //     ans.push_back(sum);
        // }
        

        // return ans;
        
        
    }
};
// @lc code=end

