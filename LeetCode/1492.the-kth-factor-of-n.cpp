/*
 * @lc app=leetcode id=1492 lang=cpp
 *
 * [1492] The kth Factor of n
 */

// @lc code=start
class Solution {
public:
    int kthFactor(int N, int K) {

         vector<int> factors;
        for(int i=1;i<=N;i++){
            if(N%i==0){
                factors.push_back(i);
                // if(i!=N/i)
                //     factors.push_back(N/i);
            }
        }
        //sort the vector
        sort(factors.begin(),factors.end());
        //return the Kth element
        if(K>factors.size())
        {
            return -1;
        }
        else
        {
            return factors[K-1];
        }
        
    }
};
// @lc code=end

