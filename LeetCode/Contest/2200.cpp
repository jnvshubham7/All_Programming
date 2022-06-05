class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {







// You are given a 0-indexed integer array nums and two integers key and k. A k-distant index is an index i of nums for which there exists at least one index j such that |i - j| <= k and nums[j] == key.

// Return a list of all k-distant indices sorted in increasing order.
















    //find index in nums where nums[i] == key
    // int index = -1;
    // for(int i = 0; i < nums.size(); i++)
    // {
    //     if(nums[i] == key)
    //     {
    //         index = i;
    //         break;
    //     }

        
    // }

    // int index2 = -1;
    // //find index in nums where nums[i] == key from last
    // for(int i = nums.size() - 1; i >= 0; i--)
    // {
    //     if(nums[i] == key)
    //     {
    //         index2 = i;
    //         break;
    //     }
    // }




//store all index from start to last where nums[i]==key

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




















   // |i - j| <= k and nums[j] == key.


    // vector<int> result;
    // for(int i=0; i < nums.size(); i++)
    // {
    //     if(abs(i - index) <= k || abs(i - index2) <= k)
       
    //     {
    //         result.push_back(i);
    //     }
    // }
    

    // return result;
     
};