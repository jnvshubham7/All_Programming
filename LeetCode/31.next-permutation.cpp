/*
 * @lc app=leetcode id=31 lang=cpp
 *
 * [31] Next Permutation
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
    void nextPermutation(vector<int>& arr) {

         int n ;
        n = arr.size();
        //check all interger in vector is next permutation or not
        for(int i=n-1;i>0;i--)
        {
            if(arr[i]>arr[i-1])
            {
                int j;
                for(j=n-1;j>i;j--)
                {
                    if(arr[j]>arr[i-1])
                    {
                        swap(arr[i-1],arr[j]);
                        break;
                    }
                }
                reverse(arr.begin()+i,arr.end());
                break;
            }
        }
        
    }
};
// @lc code=end





int main(){
Solution s;

ll t;
cin>>t;
while(t--){

    


}

    return 0;
}