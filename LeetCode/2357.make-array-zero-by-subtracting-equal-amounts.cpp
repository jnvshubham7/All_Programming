/*
 * @lc app=leetcode id=2357 lang=cpp
 *
 * [2357] Make Array Zero by Subtracting Equal Amounts
 */

// @lc code=start
class Solution {
public:
    int minimumOperations(vector<int>& nums) {

//    Return the minimum number of operations to make every element in nums equal to 0.

       
    


        int n = nums.size();

        int min_ops = 0;
        int min_val = 0;
      
     

       

        sort(nums.begin(), nums.end());
           if(nums[0]==0 && nums[n-1]==0) {
            return 0;
        }
        for(int i = 0; i < n; i++)
        {
            if(nums[i] != 0)
            {
                min_val=nums[i];
            }
            else {
                i++;
            }
        }
      
        while(nums[n-1]>0) {
           for(int i=0;i<n;i++) {
               if(nums[i]>0) {
                   nums[i] -= min_val;
                  
               }

               else if(nums[i]==0) {
                i++;
                 
               }
               else {
                   break;
               }
              
           }
              sort(nums.begin(), nums.end());
              if(nums[0]<0 || nums[n-1]<0) {
                  break;
              }
              //if any element is negative, then break
              for(int i=0;i<n;i++) {
                  if(nums[i]<0) {
                      break;
                  }
              }

             //find element with min value
             for(int i=0;i<n;i++) {
                if(nums[i]!=0) {
                    min_val = nums[i];
                    break;
                }
             }
              if(nums[0]==0 && nums[n-1]==0) {
           break;
        }

              min_ops++;

        }

        //if all elements are zero, then break;
       
       


        return min_ops;


       

        
    }
};
// @lc code=end

