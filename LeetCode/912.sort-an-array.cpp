/*
 * @lc app=leetcode id=912 lang=cpp
 *
 * [912] Sort an Array
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


// void insert(vector<int>& v,int temp){

//     if(v.size()==0 || v[v.size()-1]<temp){
//         v.push_back(temp);
//         return;
//     }

//     else {

//         int val=v[v.size()-1];
//         v.pop_back();
//         insert(v,temp);
//         v.push_back(val);

//     }
    
// }


// vector<int> sort_vector(vector<int>& v){
//     int n=v.size();

//     if(n==1)
//     return v;

//     int temp=v[n-1];
//     v.pop_back();
//     sort_vector(v);
//     insert(v,temp);
//     return v;
// }
   

  
    vector<int> sortArray(vector<int>& v) {



        priority_queue<int,vector<int>,greater<int>> pq;
        int n=v.size();
        fr(i,n)
        {
            pq.push(v[i]);
        }
        vector<int> ans;
        for(int i=0;i<n;i++)
        {
            ans.push_back(pq.top());
            pq.pop();
        }
        return ans;













       // return sort_vector(v);
        
    }

   
};
// @lc code=end

