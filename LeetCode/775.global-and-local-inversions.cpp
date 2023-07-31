/*
 * @lc app=leetcode id=775 lang=cpp
 *
 * [775] Global and Local Inversions
 */

// @lc code=start
class Solution {
public:
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
#define ppi pair<int,pair<int,int>>
#define ppd pair<double,pair<int,int>>

    bool isIdealPermutation(vector<int>& nums) {

        int n=nums.size();

        ll local_inv_count = 0;
         for(int i=0;i<n-1;i++)
         {
             if(nums[i]>nums[i+1])
             {
                 local_inv_count++;
             }
         }

            ll global_inv_count = 0;
           
           mergeSort(nums,0,n-1,global_inv_count);
            return local_inv_count==global_inv_count;


        
    }

    void mergeSort(vector<int>& nums, ll low, ll end, ll& inv_count)
    {
        if(low >= end)
        {
            return;
        }
        ll mid = low + (end - low)/2;
        mergeSort(nums, low, mid, inv_count);
        mergeSort(nums, mid+1, end, inv_count);
        merge(nums, low, mid, end, inv_count);
    }

    void merge(vector<int>& nums, ll low, ll mid, ll end, ll& inv_count)
    {
        ll n1 = mid - low + 1;
        ll n2 = end - mid;
        ll arr1[n1], arr2[n2];
        
        for(ll i=0;i<n1;i++)
        {
            arr1[i] = nums[low + i];
        }
        for(ll i=0;i<n2;i++)
        {
            arr2[i] = nums[mid + i + 1];
        }
        ll i=0,j=0,k=low;
        while(i<n1 && j<n2)
        {
            if(arr1[i]<arr2[j])
            {
                nums[k] = arr1[i];
                i++;
            }
            else
            {
                nums[k] = arr2[j];
                j++;
                inv_count += n1-i;
            }
            k++;
        }
        while(i<n1)
        {
            nums[k] = arr1[i];
            i++;
            k++;
        }
        while(j<n2)
        {
            nums[k] = arr2[j];
            j++;
            k++;
        }
    }


};
// @lc code=end

