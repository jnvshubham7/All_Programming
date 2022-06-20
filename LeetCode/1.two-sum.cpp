/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

       // unordered_map<int,int> mp;

        vector<int> v;
        for(int i=0;i<nums.size();i++)
		{
			for(int j=nums.size()-1;j>=i+1;j--)
			{
				if(nums[i]+nums[j]==target)
				{
					v.push_back(i);
					v.push_back(j);
                    cout<<nums[i]<<" "<<nums[j]<<endl;
					return v;
				}
			}
        }
        return v;
		// for(int i=0;i<nums.size();i++)
		// {
		// 	for(int j=i+1;j<nums.size();j++)
		// 	{
		// 		if(nums[i]+nums[j]==target)
		// 		{
		// 			v.push_back(i);
		// 			v.push_back(j);
		// 			return v;
		// 		}
		// 	}
        // }
        // return v;

        // for(int i=0;i<nums.size();i++)
        // {
        //     mp[nums[i]]=i;

        // }

       

    //    for(int i=0;i<nums.size();i++)
    //     {
    //       //  mp[nums[i]]=i;
    //         if(mp.find(target-nums[i])!=mp.end())
    //         {
                
    //             return {mp[target-nums[i]],i};
    //         }
    //         mp[nums[i]]=i;
    //     }

    //     return {};

        // vector<int> v;

        // int i=0;
        // int j=nums.size()-1;

        // while(i<j)
        // {
        //     if(nums[i]+nums[j]==target)
        //     {
        //         v.push_back(i);
        //         v.push_back(j);

        //         return v;

        //     }
        //     else if(nums[i]+nums[j]<target)
        //     {
        //         i++;

        //     }

        //     else {
        //        j--;
        //     }
        // }

        // return {};


        
        
    }
};
// @lc code=end

