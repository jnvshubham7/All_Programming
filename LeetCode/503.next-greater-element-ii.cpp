/*
 * @lc app=leetcode id=503 lang=cpp
 *
 * [503] Next Greater Element II
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

    vector<int> nextGreaterElements(vector<int>& nums) {

        int n=nums.size();
        vector<int> v;
        stack<int> st;

        for(int i=n-1; i>=0; i--)
        {
            if(st.size() == 0)
            {
                v.push_back(-1);
            }
            else if(st.size()>0 && st.top()>nums[i])
            {
                v.push_back(st.top());
            }
            else if(st.size()>0 && st.top()<=nums[i]) 
            {
                while(st.size()>0 && st.top()<=nums[i])
                {
                    st.pop();
                }
                if(st.size()==0)
                {
                    v.push_back(-1);
                }
                else {
                    v.push_back(st.top());
                }
            }

            
           st.push(nums[i]);
            

        }
        reverse(v.begin(), v.end());
        return v;
        
    }
};
// @lc code=end

