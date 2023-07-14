/*
 * @lc app=leetcode id=66 lang=cpp
 *
 * [66] Plus One
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

    vector<int> plusOne(vector<int>& digits) {

       int n=digits.size();

       for(int i=n-1;i>=0;i--){

           if(digits[i]==9){
               digits[i]=0;
           }
           else{
               digits[i]++;
               return digits;
           }
       }

         digits[0]=1;
            digits.pb(0);

         return digits;
    

        
    }
    
};
// @lc code=end

