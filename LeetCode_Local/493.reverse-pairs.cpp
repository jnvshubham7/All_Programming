/*
 * @lc app=leetcode id=493 lang=cpp
 *
 * [493] Reverse Pairs
 */

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define pii pair<int,int>
#define fr(i,n) for(int i=0;i<n;i++)
#define all(v) v.begin(),v.end()
#define mem(a,b) memset(a,b,sizeof(a))
#define MOD 1000000007
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define vll vector<ll>
#define vc vector<char>
#define vs vector<string>
    




// @lc code=start
class Solution {
public:
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

    int n;
    cin>>n;

    int a[n];
    fr(i,n){
        cin>>a[i];
    }

    vector<ll> nums;
    fr(i,n){
        nums.pb(a[i]);
    }

    cout<<s.reversePairs(nums)<<endl;
    




    return 0;
}