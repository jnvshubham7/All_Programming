//https://www.callicoder.com/minimum-difference-element-in-sorted-array/


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


int binarySearchMinDifference(int arr[],int target,int n)
{
    int start= 0;
    int end= n-1;
    while (start <= end)
    {
        int mid = start + (end-start)/2;
        if (target==arr[mid])
            return arr[mid];
        else if (target<arr[mid])
            end= mid-1;
        else 
            start= mid+1;
    }

//    if ((a[start] - target) < (target - a[end]))
//             return a[start];
//         return a[end];

  if(arr[start]-target<target-arr[end])
    return arr[start];
  else
    return arr[end];
   


}



int main(){

    // int t;
    // cin>>t;
    // while(t--)
    // {
    //     int n;
    //     cin>>n;
    //     int arr[n];
    //     fr(i,n)
    //     {
    //         cin>>arr[i];
    //     }
    //     int target;
    //     cin>>target;
    //     cout<<binarySearchMinDifference(arr,target,n)<<endl;
    // }


//a[] = [2, 5, 10, 12, 15], target = 6

int a[] = {2, 5, 10, 12, 15};
int n = sizeof(a)/sizeof(a[0]);
int target = 6;
cout<<binarySearchMinDifference(a,target,n)<<endl;







    return 0;
}