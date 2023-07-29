/*
 * @lc app=leetcode id=1985 lang=cpp
 *
 * [1985] Find the Kth Largest Integer in the Array
 */

// @lc code=start

class cmp
{
public:
    bool operator()(string a, string b)
    {

    
    if(a.size() < b.size())
        return true;
    else if(a.size() > b.size())
        return false;
    else
        return a < b;
    }

    
};


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

    string kthLargestNumber(vector<string>& nums, int k) {

        int n = nums.size();

       priority_queue<string,vector<string>,cmp> pq;

        fr(i,n)
        {
            pq.push(nums[i]);
        }

        for(int i=0;i<k-1;i++)
        {
            cout<<pq.top()<<endl;
            pq.pop();
        }

        return pq.top();

    //     ll arr[n];
    //     for (int i = 0; i < n; i++) {
    //         arr[i] = stoi(nums[i]);
    //     }

    //       priority_queue<ll> pq;
    //     for (int i = 0; i < n; i++) {
    //         pq.push(arr[i]);
    //     }
        
    //     ll ans=0;
    //     for (int i = 0; i < k; i++) {
    //         ans = pq.top();
           
    //         pq.pop();
    //     }
    //    string res = "";
    //      res += to_string(ans);
    //    return res;
        
    }
};
// @lc code=end

