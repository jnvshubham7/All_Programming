/*
 * @lc app=leetcode id=1792 lang=cpp
 *
 * [1792] Maximum Average Pass Ratio
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


    double maxAverageRatio(vector<vector<int>>& classes, int extraStudents) {

        int n = classes.size();

        priority_queue<ppd, vector<ppd>, greater<ppd>> pq;
        fr(i, n) {
           int pass=classes[i][0];
           int total=classes[i][1];
           double ratio=double(pass)/double(total);
              pq.push(mp( ratio , mp(pass, total)));
        }

        while(!pq.empty()) {
           int pass=pq.top().second.first;
              int total=pq.top().second.second;
            
            
            if (extraStudents > 0) {
                pq.pop();
                extraStudents--;
                pass++;
                total++;
                double ratio=double(pass)/double(total);
                pq.push(mp( ratio , mp(pass, total)));
            } 

            else {
                break;
            }

           
            
        }

        //print pq

        // while(pq.size()>0) {
        //    cout<<pq.top().first<<" "<<pq.top().second.first<<" "<<pq.top().second.second<<endl;
        //     pq.pop();
        // }

        double sum=0;
        int sz=pq.size();

       while(!pq.empty()) {
           sum+=pq.top().first;
           pq.pop();
       }


      //  cout<<double(sum)<<endl;
        
        return sum/sz;
    
        
    }
};
// @lc code=end

