/*
 * @lc app=leetcode id=997 lang=cpp
 *
 * [997] Find the Town Judge
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

    int findJudge(int n, vector<vector<int>>& trust) {

        if(n==1) return 1;


        //indegree and outdegree unordered_map
        unordered_map<int,int> outdegree;
        fr(i,trust.size()){
           
            outdegree[trust[i][0]]++;
        }

       
        

       unordered_map<int,int> indegree;

        fr(i,trust.size()){
            indegree[trust[i][1]]++;
        }
        for(auto  it :indegree){
            if(it.second==n-1 && outdegree[it.first]==0){
               
                    return it.first;
                
            }
        }



      
          
       

        return -1;

    }
};
// @lc code=end

