class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {

//         Partition Array Such That Maximum Difference Is K

//         You are given an integer array nums and an integer k. You may partition nums into one or more subsequences such that each element in nums appears in exactly one of the subsequences.

// Return the minimum number of subsequences needed such that the difference between the maximum and minimum values in each subsequence is at most k.

// A subsequence is a sequence that can be derived from another sequence by deleting some or no elements without changing the order of the remaining elements.
        
//         Input: nums = [3,6,1,2,5], k = 2
// Output: 2
// Explanation:
// We can partition nums into the two subsequences [3,1,2] and [6,5].
// The difference between the maximum and minimum value in the first subsequence is 3 - 1 = 2.
// The difference between the maximum and minimum value in the second subsequence is 6 - 5 = 1.
// Since two subsequences were created, we return 2. It can be shown that 2 is the minimum number of subsequences needed.



int n=nums.size();
sort(nums.begin(), nums.end());

int mini=nums[0];

int cnt=0;


for(int i=1;i<n;i++)
{

    if(nums[i]-mini>k)
    {
        mini=nums[i];
        cnt++;
    }


    // if(nums[i]-mini>=k)
    // {
    //     cnt++;
    //     mini=nums[i];
    // }
}



// while(n--)
// {
//     if(nums[n]>mini+k)
//     {
//         cnt++;
//         mini=nums[n];
//     }

// }


return cnt+1;











    }
};