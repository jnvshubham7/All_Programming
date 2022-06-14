/*
 * @lc app=leetcode id=941 lang=cpp
 *
 * [941] Valid Mountain Array
 */

// @lc code=start
class Solution {
public:
    bool validMountainArray(vector<int>& arr) {

         int n=arr.size();
       int count1=0;
         int count2=0;
        if(arr.size() < 3) return false;
        //check any any element is same in array return false
        for(int i = 0; i < arr.size() - 1; i++)
        {
            if(arr[i] == arr[i+1]) return false;
        }

        //find max element in array and its index
        int max_index = 0;
        int max_element = arr[0];
        for(int i = 0; i < arr.size(); i++)
        {
            if(arr[i] > max_element)
            {
                max_element = arr[i];
                max_index = i;
            }
        }
        //check before max index is increasing or not
        for(int i = 0; i < max_index; i++)
        {
            if(arr[i] > arr[i+1]) return false;
            count1++;
        }
        //check after max index is decreasing or not
        for(int i = max_index; i < arr.size() - 1; i++)
        {
            if(arr[i] < arr[i+1]) return false;
            count2++;
        }
        if(count1<1 || count2<1) return false;

    
        return true;
        
    }
};
// @lc code=end

