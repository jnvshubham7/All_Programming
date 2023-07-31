/*
 * @lc app=leetcode id=2420 lang=cpp
 *
 * [2420] Find All Good Indices
 */

// @lc code=start
class Solution {
public:
    vector<int> goodIndices(vector<int>& nums, int k) {



        // int N = nums.size();
        // vector<int> decreasing(N, 1), increasing(N, 1);

        // for (int i = 1; i < N; i++) {
        //     if (nums[i - 1] >=  nums[i] ) {
        //         decreasing[i] = 1 + decreasing[i - 1];
        //     }
        // }

        // for (int i = N - 2; i >= 0; i--) {
        //     if (nums[i] <= nums[i + 1]) {
        //         increasing[i] = 1 + increasing[i + 1];
        //     }
        // }

        // vector<int> ans;

        // for(int i = k; i < N - k; i++) {
        //     if (increasing[i + 1] >= k && decreasing[i - 1] >= k) {
        //         ans.push_back(i);
        //     }
        // }

        // return ans;























        
    // int n=nums.size();

    //     int start=k;
    //     int end=n-k;

    //    int flag=0;
    //    int flag1=0;

    //     set<int> s;

    //     // cout<<start<<" "<<end<<endl;


    //     for(int i=start;i<end;i++){

    //         int x=i;
    //         // cout<<x<<endl;

    //         if(func(nums,x,k)  )
    //         {
    //             flag=1;
    //             s.insert(x);
               
               
                
    //         }

    //         if(func1(nums,x,k))
    //         {
    //             flag1=1;
    //             s.insert(x);
               
               
    //         }

           



            
    //     }

    //     vector<int> res;

    //     if(flag==0 || flag1==0)
    //     {
    //         return {};
    //     }

    //     // if(s.size()<=1)
    //     // {
    //     //     return {};
    //     // }

    //     for(auto i:s)
    //     {
    //         res.push_back(i);
    //     }

    //     return res;




        
    // }



    // bool func(vector<int>& nums,int x,int k){

    //     int n=nums.size();

    //     int start=x-k;
    //     int end=x;

    //     for(int i=start;i<end;i++){

    //         if(nums[i]<nums[x])
    //         {
    //             return false;
    //         }
    //     }

    //     return true;

    // }


    // bool func1(vector<int>& nums,int x,int k){

    //     int n=nums.size();

    //     int start=x;
    //     int end=x+k;

    //     for(int i=start;i<end;i++){

    //         if(nums[i]>nums[x])
    //         {
    //             return false;
    //         }
    //     }
    //     return true;

    }
};
// @lc code=end

