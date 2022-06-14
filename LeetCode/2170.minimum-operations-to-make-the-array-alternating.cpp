/*
 * @lc app=leetcode id=2170 lang=cpp
 *
 * [2170] Minimum Operations to Make the Array Alternating
 */

// @lc code=start
class Solution {
public:
    int minimumOperations(vector<int>& nums) {

        unordered_map<int, int> freq;
    for(int i = 0; i < nums.size(); i++){
        freq[nums[i]]++;
    }

    //check which nums have max freq
    int maxFreq = 0;
    int maxFreqNum = 0;
    for(auto it = freq.begin(); it != freq.end(); it++){
        if(it->second > maxFreq){
            maxFreq = it->second;
            maxFreqNum = it->first;
        }
    }


    //find 2nd max freq num
    int secondMaxFreq = 0;
    int secondMaxFreqNum = 0;
    for(auto it = freq.begin(); it != freq.end(); it++){
        if(it->first != maxFreqNum && it->second > secondMaxFreq){
            secondMaxFreq = it->second;
            secondMaxFreqNum = it->first;
        }
    }


   //change in nums so that all odd positions are maxFreqNum and all even positions are  with minimum count++
    // int count = 0;
    // for(int i = 0; i < nums.size(); i++){
    //     if(i % 2 == 0){
    //         if(nums[i] != maxFreqNum){
    //             count++;
    //         }
    //     }
    //     else{
    //         if(nums[i] != secondMaxFreqNum){
    //             count++;
    //         }
    //     }
    // }

    // return count-1;
    //}



   //replace some place in nums to create alternating array
    int count = 0;
    for(int i = 2; i < nums.size(); i++){


        if(nums[0]==maxFreqNum && nums[1]==secondMaxFreqNum){
           if(nums[i]==secondMaxFreqNum){
               nums[i] = maxFreqNum;
               count++;
           }
           else {
               continue;
           }
          
          
        }

        else if(nums[0]==secondMaxFreqNum && nums[1]==maxFreqNum){
            if(nums[i]==maxFreqNum){
                nums[i] = secondMaxFreqNum;
                count++;
            }
            else {
                continue;
            }
        }

        else if(nums[0]==maxFreqNum && nums[1]!=secondMaxFreqNum){
            if(nums[i]==secondMaxFreqNum){
                nums[i] = maxFreqNum;
                count++;
            }
            else {
                continue;
            }
        }

        else if(nums[0]!=maxFreqNum && nums[1]==secondMaxFreqNum){
            if(nums[i]==maxFreqNum){
                nums[i] = secondMaxFreqNum;
                count++;
            }
            else {
                continue;
            }
        }

        else{
            continue;
        }

    }
      


     return count;
    // }

        
    }
};
// @lc code=end

