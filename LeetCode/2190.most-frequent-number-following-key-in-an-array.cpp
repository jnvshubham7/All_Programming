/*
 * @lc app=leetcode id=2190 lang=cpp
 *
 * [2190] Most Frequent Number Following Key In an Array
 */

// @lc code=start
class Solution {
public:
    int mostFrequent(vector<int>& nums, int key) {

         unordered_map<int, int> freq;
        
       for(int i = 0; i < nums.size(); i++){
              freq[nums[i]]++;
         }


         //store all next elements which nums[i] is equal to key in set
            unordered_set<int> next;
            for(int i = 0; i <= nums.size() -2; i++){
                if(nums[i] == key){
                    next.insert(nums[i+1]);
                }
            }
            //check which set number is the most frequent
            int max = 0;
            int max_num = 0;
            for(auto it = next.begin(); it != next.end(); it++){
                if(freq[*it] > max){
                    max = freq[*it];
                    max_num = *it;
                }
            }
            return max_num;
        
    }
};
// @lc code=end

