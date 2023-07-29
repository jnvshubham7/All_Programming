/*
 * @lc app=leetcode id=2279 lang=cpp
 *
 * [2279] Maximum Bags With Full Capacity of Rocks
 */

// @lc code=start
class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        
        vector<int> v;

int flag = 0;

        for (int i = 0; i < capacity.size(); i++) {
            v.push_back(capacity[i] - rocks[i]);
        }

        sort(v.begin(), v.end());

        int count = 0;



        for (int i = 0; i < v.size(); i++) {
           
                
                additionalRocks -= v[i];
                 

 count++;

 if(additionalRocks < 0) 

     {
         flag = 1;
     }


                if (additionalRocks == 0 || additionalRocks < 0) {
                    break;
                }
               

                // if(additionalRocks == 0) {
                //     flag = true;
                //   //  count++;
                //    // break;
                // }




               // if(v[])

               
            
        }

        if(flag == 1) {
          return count-1;
        }

        else {
            return count;
        }
        
    }
};
// @lc code=end

