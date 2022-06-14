/*
 * @lc app=leetcode id=2200 lang=cpp
 *
 * [2200] Find All K-Distant Indices in an Array
 */

// @lc code=start
class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {

        
vector<int> index;
for(int i = 0; i < nums.size(); i++)
{
    if(nums[i] == key)
    {
        index.push_back(i);
    }
}



//check abs(i-index) <= k for all index in index in set 

//create set 
vector<int> result;

 
for(int i=0;i<nums.size();i++)
{
    for(int j=0;j<index.size();j++)
    {
        if(abs(i-index[j]) <= k)
        {

            //i put in set
            //result.insert(i);
            result.push_back(i);
            //result.insert(i);
            //break;
        }
    }
}

//remove duplicates
sort(result.begin(), result.end());
result.erase(unique(result.begin(), result.end()), result.end());


return result;
        
    }
};
// @lc code=end

