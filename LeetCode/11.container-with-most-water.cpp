#include<bits/stdc++.h>
using namespace std;
#define ll long long


/*
 * @lc app=leetcode id=11 lang=cpp
 *
 * [11] Container With Most Water
 */

// @lc code=start
class Solution {
public:
    int maxArea(vector<int>& height) {
          int ans=0;
        int left=0;
        int right=height.size()-1;
        while(left<=right){
            ans=max(min(height[left], height[right])*(right-left), ans);

            if(height[left]<height[right]){
                left++;

            }

            else {
                right--;
            }


        }

        return ans;
        
    }
};
// @lc code=end



int main()
{

    // int n;
    // cin>>n;

    // vector<int> height;

    // for(int i=0;i<n;i++)
    // {
    //     int x;
    //     cin>>x;
    //     height.push_back(x);
    // }
    vector<int> height={1,8,6,2,5,4,8,3,7};

    Solution obj;
    cout<<obj.maxArea(height)<<endl;



    
    return 0;
}