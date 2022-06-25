#include<bits/stdc++.h>
using namespace std;
#define ll long long


/*
 * @lc app=leetcode id=493 lang=cpp
 *
 * [493] Reverse Pairs
 */

// @lc code=start
class Solution {
private:
    ll count;
   
    void checkCount(vector<ll>& nums, ll start, ll mid, ll end){

        // two pollers;
        ll l = start, r = mid + 1;
        while(l <= mid && r <= end){
            if((long)nums[l] > (long) nums[r]){
                count += (mid - l + 1);
                r++;
            }else{
                l++;
            }
        }
       // worst case might be nlog(n) 
        sort(nums.begin() + start, nums.begin() + end + 1);
        return;
        
        
        
        //every step sort
    }
    void mergeSort(vector<ll>& nums, ll start, ll end){
        if(start == end) return;
        
        ll mid = (start + end)/2;
        mergeSort(nums,start, mid);
        mergeSort(nums,mid+1,end);
        
        checkCount(nums,start,mid,end);
        return;
        
    }
public:
    ll reversePairs(vector<ll>& nums) {
        if(!nums.size())return 0;
        count = 0;
        mergeSort(nums,0,nums.size()-1);
        return count;
    }
};
// @lc code=end



int main(){


    Solution s;
   ll n;
    cin>>n;
    vector<ll> nums(n);
    for(ll i = 0; i < n; i++){
        ll x;
        cin>>x;
        nums[i] = x;

    }
    cout<<s.reversePairs(nums)<<endl;



    return 0;
}