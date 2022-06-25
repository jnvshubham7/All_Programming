/*
 * @lc app=leetcode id=88 lang=cpp
 *
 * [88] Merge Sorted Array
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
    




// @lc code=start
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        nums1.resize(m);
        nums2.resize(n);

        for(int i=0;i<n;i++)
        {
            nums1.push_back(nums2[i]);
        }
        
        sort(nums1.begin(),nums1.end());

    }
};
// @lc code=end







int main(){
Solution s;

    //nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
    vector<int> nums1 = {1,2,3,0,0,0};
    int m = 3;
    vector<int> nums2 = {2,5,6};
    int n = 3;
    s.merge(nums1,m,nums2,n);

    for(int i=0;i<nums1.size();i++)
    {
        cout<<nums1[i]<<" ";
    }
    cout<<endl;


    return 0;
}