/*
 * @lc app=leetcode id=128 lang=cpp
 *
 * [128] Longest Consecutive Sequence
 */

// @lc code=start
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        

        int n=nums.size();

        if(n==0)
            return 0;
            

        sort(nums.begin(),nums.end());

        int maxLen=0;
        int curLen=1;
        for(int i=1;i<n;i++){
            if(nums[i]==nums[i-1]){
                continue;
            }
            if(nums[i]==nums[i-1]+1){
                curLen++;
            }
            else{
                maxLen=max(maxLen,curLen);
                curLen=1;
            }
        }
        maxLen=max(maxLen,curLen);
        return maxLen;



        // if(n==0) return 0;
        // if(n==1) return 1;
        // sort(nums.begin(), nums.end());


     

        // //if all the numbers are same, return 1
        // if(nums[0]==nums[n-1]) return 1;


        // int ans=0;

        // set<int> st;
        // for (int i=0; i<n; i++) { 
        //     st.insert(nums[i]);
        //     }

        //     //print st
        // //    for(auto it=st.begin(); it!=st.end(); it++)
        // //       {
        // //         cout<<*it<<" ";
        // //         }
        // //     cout<<endl;


        //     vector<int> v;

           
        //    for(auto x:st)
        //    {
        //     v.push_back(x);
            
        //    }

        //   int cnt=0;

        //    for(int i=0 ;i<v.size()-1;i++)
        //    {
        //     if(v[i+1]-v[i]==1)
        //     {
        //         //cout<<v[i+1]-v[i]<endl;
        //        // cout<<"yes"<<endl;
        //         cnt++;
        //         continue;
        //     }
        //     else
        //     {
        //         //ans=i;
                
        //         break;
                
        //     }
        //    }
          

        //    return cnt+1;

    }
};
// @lc code=end

