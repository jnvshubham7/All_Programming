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


// bool solve(vector<int>& nums,int i,int j,int k,vector<vector<int>>& ans)
// {
//     if(i>j)
//     {
//         return false;
//     }
//     if(i==j)
//     {
//         if(nums[i]==k)
//         {
//             ans.push_back({nums[i],nums[i],nums[i]});
//             return true;
//         }
//         return false;
//     }
//     if(nums[i]+nums[j]>k)
//     {
//         return solve(nums,i,j-1,k,ans);
//     }
//     if(nums[i]+nums[j]<k)
//     {
//         return solve(nums,i+1,j,k,ans);
//     }
//     if(nums[i]+nums[j]==k)
//     {
//         ans.push_back({nums[i],nums[j],nums[j]});
//         return true;
//     }
//     return false;
// }

// bool solve(vector<int>& nums)
// {

//     vector<int> v;
//     int n=nums.size();
//     sort(nums.begin(),nums.end());
//     fr(i,n)
//     {
//         if(i>0 && nums[i]==nums[i-1])
//         {
//             continue;
//         }
//         int l=i+1,r=n-1;
//         while(l<r)
//         {
//             int sum=nums[i]+nums[l]+nums[r];

//             v.push_back(sum);

//             // if(sum==0)
//             // {
//             //     return true;
//             // }
//             // else if(sum<0)
//             // {
//             //     l++;
//             // }
//             // else
//             // {
//             //     r--;
//             // }
//         }
//     }
//     return false;
// }

int main(){

    int t;
    cin>>t;
    while(t--)
    {

//         You are given an array a of length n. The array is called 3SUM-closed if for all distinct indices i, j, k, the sum ai+aj+ak is an element of the array. More formally, a is 3SUM-closed if for all integers 1≤i<j<k≤n, there exists some integer 1≤l≤n such that ai+aj+ak=al

// .

// Determine if a

// is 3SUM-closed.
// Input

// The first line contains an integer t
// (1≤t≤1000

// ) — the number of test cases.

// The first line of each test case contains an integer n
// (3≤n≤2⋅105

// ) — the length of the array.

// The second line of each test case contains n
// integers a1,a2,…,an (−109≤ai≤109

// ) — the elements of the array.

// It is guaranteed that the sum of n
// across all test cases does not exceed 2⋅105

// .
// Output

// For each test case, output "YES" (without quotes) if a

// is 3SUM-closed and "NO" (without quotes) otherwise.

// You can output "YES" and "NO" in any case (for example, strings "yEs", "yes" and "Yes" will be recognized as a positive response).





        int n;
        cin>>n;

        vi nums(n);
        fr(i,n)
        {
            cin>>nums[i];
        }
        //print 
     //  cout<<solve(a)<<endl;

      vector<int> v;

      bool flag1=false;

      //store all three sum in v which have i,j,k index are different
    //   for(int i=0;i<n;i++)
    //   {
    //       for(int j=i+1;j<n;j++)
    //       {
    //           for(int k=j+1;k<n;k++)
    //           {
    //               int sum=nums[i]+nums[j]+nums[k];
    //               v.push_back(sum);
    //               flag1=true;


    //           }
             

    //       }
         

    //   }

   sort(nums.begin(),nums.end());
       for(int i=0;i<n;i++)
        {
            if(i>0 && nums[i]==nums[i-1])
            {
                continue;
            }
            int l=i+1,r=n-1;
            while(l<r)
            {
                int sum=nums[i]+nums[l]+nums[r];
                v.push_back(sum);
                
                // if(sum==0)
                
                // {
                //     ans.push_back({nums[i],nums[l],nums[r]});
                //     while(l<r && nums[l]==nums[l+1])
                //     {
                //         l++;
                //     }
                //     while(l<r && nums[r]==nums[r-1])
                //     {
                //         r--;
                //     }
                //     l++;
                //     r--;
                // }
                else if(sum<0)
                {
                    l++;
                }
                else
                {
                    r--;
                }
            }
        }


        sort(v.begin(),v.end());
        unordered_set<int> s;
        fr(i,v.size())
        {
            s.insert(v[i]);
        }

       bool flag=false;

        //check any nums[i] is present in s or not
        fr(i,n)
        {
            if(s.find(nums[i])!=s.end())
            {
                flag=true;
            }
        }
      
        if(flag)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }







      //print sum
      for(int i=0;i<v.size();i++)
      {
          cout<<v[i]<<" ";
      }
        cout<<endl;
   
    // sort(nums.begin(),nums.end());
    // fr(i,n)
    // {
    //     if(i>0 && nums[i]==nums[i-1])
    //     {
    //         continue;
    //     }
    //     int l=i+1,r=n-1;
    //     while(l<r)
    //     {
    //         int sum=nums[i]+nums[l]+nums[r];

    //         v.push_back(sum);

    //         cout<<sum<<endl;

    //         // if(sum==0)
    //         // {
    //         //     return true;
    //         // }
    //         // else if(sum<0)
    //         // {
    //         //     l++;
    //         // }
    //         // else
    //         // {
    //         //     r--;
    //         // }
    //     }
    // }
   




















    }

    return 0;
}