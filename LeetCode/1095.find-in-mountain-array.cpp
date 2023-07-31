/*
 * @lc app=leetcode id=1095 lang=cpp
 *
 * [1095] Find in Mountain Array
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
/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:
    int findInMountainArray(int target, MountainArray &mountainArr) {

        int peakIndex=peakIndexInMountainArray(mountainArr);
        int left_end=peakIndex-1;
        int right_start=peakIndex;
        int left_start=0;
        int right_end=mountainArr.length()-1;

        int left_index=binarySearch(mountainArr,target,left_start,left_end);
        int right_index=binarySearch1(mountainArr,target,right_start,right_end);

        cout<<left_index<<" "<<right_index<<" "<<peakIndex<<endl;

        if(left_index!=-1)
            return left_index;
        else if(right_index!=-1)
            return right_index;
        else
           return min(left_index,right_index);


      



    }

     int peakIndexInMountainArray(MountainArray &arr) {
        int n=arr.length();
        if(n==1) return 0;
        int start=0,end=n-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(mid>0 && mid<n-1)
            {
                if(arr.get(mid)>arr.get(mid-1) && arr.get(mid)>arr.get(mid+1))
                    return mid;
                else if(arr.get(mid)<arr.get(mid-1))
                    end=mid-1;
                else
                    start=mid+1;
            }
            else if(mid==0)
            {
                if(arr.get(mid)>arr.get(mid+1))
                    return mid;
                else
                    return mid+1;
            }
            else if(mid==n-1)
            {
                if(arr.get(mid)>arr.get(mid-1))
                    return mid;
                else
                    return mid-1;
            }
           
        }
        return -1;
        
        
    }


    int binarySearch(MountainArray &arr,int target,int start,int end){
        while(start<=end){
            int mid=start+(end-start)/2;
            if(arr.get(mid)==target)
                return mid;
            else if(arr.get(mid)>target)
                end=mid-1;
            else
                start=mid+1;
        }
        return -1;
    }

    int binarySearch1(MountainArray &arr,int target,int start,int end){
        while(start<=end){
            int mid=start+(end-start)/2;
            if(arr.get(mid)==target)
                return mid;
            else if(arr.get(mid)>target)
                start=mid+1;
            else
                end=mid-1;
        }
        return -1;
    }

   
   

};
// @lc code=end





int main(){
Solution s;

//    [1,2,3,4,5,3,1]
// 3


int arr[]={1,2,3,4,5,3,1};
int n=sizeof(arr)/sizeof(arr[0]);
MountainArray mountainArr(arr,n);
int target=3;
s.findInMountainArray(target,mountainArr);

    


    return 0;
}