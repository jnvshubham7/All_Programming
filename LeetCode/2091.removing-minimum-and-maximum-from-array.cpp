/*
 * @lc app=leetcode id=2091 lang=cpp
 *
 * [2091] Removing Minimum and Maximum From Array
 */

// @lc code=start
class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();

        if(n==1){
            return 0;
        }

        // Find min and max values
        int minValue = INT_MAX;
        int maxValue = INT_MIN;

        for (int i = 0; i < n; i++) {
            if (nums[i] < minValue) {
                minValue = nums[i];
            }

            if (nums[i] > maxValue) {
                maxValue = nums[i];
            }
        }

        int minIndex = -1;
        int maxIndex = -1;

        for (int i = 0; i < n; i++) {
            if (nums[i] == minValue) {
                minIndex = i;
            }

            if (nums[i] == maxValue) {
                maxIndex = i;
            }
        }


        
        cout<<minIndex<<" "<<maxIndex<<endl;

        // Calculate the minimum number of deletions
        int deletions = 0;

        if(minIndex+1 <=n/2 && maxIndex+1 <=n/2){

            return max(minIndex+1,maxIndex+1);
           
        }

        if (minIndex > maxIndex) {
            deletions = maxIndex + (n - minIndex + 1);
        } else {
            deletions = minIndex + (n - maxIndex + 1);
        }

        return deletions;
    }
};

// @lc code=end

