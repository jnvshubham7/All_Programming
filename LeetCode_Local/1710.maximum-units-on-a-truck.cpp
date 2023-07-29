/*
 * @lc app=leetcode id=1710 lang=cpp
 *
 * [1710] Maximum Units on a Truck
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
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {

        int ans=0;
        sort(boxTypes[0].begin(),boxTypes[0].end());

        int n=boxTypes.size();

       for(auto it: boxTypes)
       {

        int curr=min(it[0],truckSize);

        truckSize-=curr;
        ans+=curr*it[1];
        if(truckSize==0)
        break;
          
       }
       return ans;
        
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