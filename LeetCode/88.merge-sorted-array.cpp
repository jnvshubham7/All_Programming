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
    

// The way to think about the solution is that we will have to do a reverse sorting.
// We initialize k=m+n-1 as that will be the last location of nums1.
// We will keep checking for the greater element of the two arrays(i=m-1,j=n-1) and insert the values.
// nums1 = [1,2,3,0,0,0], m = 3
// nums2 = [2,5,6],       n = 3

// nums1 = [1,2,3,0,0,0]
//              |     |
//              i     k

// nums2 = [2,5,6]
//              |
//              j
// nums2[j]>nums1[i] thus nums1[k]=6
// k and j are decremented.

// nums1 = [1,2,3,0,0,6]
//              |     |
//              i     k

// nums2 = [2,5,6]
//            |
//            j
// nums2[j]>nums1[i] thus nums1[k]=5
// k and j are decremented.

// nums1 = [1,2,3,0,5,6]
//              |   |
//              i   k

// nums2 = [2,5,6]
//          |
//          j
// We keep following up this procedure and we get the desired reult.


//     void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//         int i=m-1,j=n-1,k=m+n-1;
//         while(i>=0&&j>=0)
//         {
//             if(nums1[i]>nums2[j])
//             {
//                 nums1[k]=nums1[i];
//                 i--;
//                 k--;
//             }
//             else
//             {
//                 nums1[k]=nums2[j];
//                 j--;
//                 k--;
//             }
//         }
//         while(i>=0)
//             nums1[k--]=nums1[i--];
//         while(j>=0)
//             nums1[k--]=nums2[j--];
//     }



// @lc code=start
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

         int i=m-1,j=n-1,k=m+n-1;
        while(i>=0&&j>=0)
        {
            if(nums1[i]>nums2[j])
            {
                nums1[k]=nums1[i];
                i--;
                k--;
            }
            else
            {
                nums1[k]=nums2[j];
                j--;
                k--;
            }
        }
        while(i>=0)
            nums1[k--]=nums1[i--];
        while(j>=0)
            nums1[k--]=nums2[j--];




        // nums1.resize(m);
        // nums2.resize(n);

        // for(int i=0;i<n;i++)
        // {
        //     nums1.push_back(nums2[i]);
        // }
        
        

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