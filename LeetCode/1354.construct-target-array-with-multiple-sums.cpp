/*
 * @lc app=leetcode id=1354 lang=cpp
 *
 * [1354] Construct Target Array With Multiple Sums
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


    bool isPossible(vector<int>& target) {

        int n = target.size();

       priority_queue<ll> pq;
        for (int i = 0; i < n; i++) {
            pq.push(target[i]);
        }


       



       // int cnt=0;
        while (pq.size() > 1 && pq.top() > 0) {

            ll a = pq.top();

            pq.pop();
           ll sum=0;
           vector<ll> v;
           while(!pq.empty())
           {
                v.pb(pq.top());
               sum+=pq.top();
                pq.pop();
           }

           int flag=0;

           for(int i=0;i<v.size();i++)
           {
                if(v[i]==1 && a==1)
                {
                     flag=1;
                     break;
                }
                
           }

           if(flag==1)
           {
            return true;
           }

            if(sum>=a) {
                cout<<"sum="<<sum<<" a="<<a<<endl;
                return false;
            }
           
            if(sum<a) {
                pq.push(a-sum);
                // cnt++;
            }

            for(int i=0;i<v.size();i++) {
                pq.push(v[i]);
            }
           


            
        }
        return true;
        




       

    }
};
// @lc code=end



















//  ll n = target.size();
//        //use priority queue
//        priority_queue<int> pq;
//         unsigned int sum = 0;
//         for (int x : target){
//             sum += x;
//              pq.push(x);
//             //cout<<sum<<" "<<pq.top()<<endl;
//         }

//         //print the queue
//         // while(!pq.empty()){
//         //     cout<<pq.top()<<endl;
//         //     pq.pop();
//         // }





//         while (pq.top() != 1) {
//             int x = pq.top();
//             pq.pop();
//            // cout<<sum<<" "<<x<<" ";
//             sum-=x;
//             cout<<sum<<" "<<pq.top()<<" ";
//             if (x<= sum || sum < 1) return false;
//             x%= sum;
//             cout<<x<<" "<<sum<<endl;
//             sum+=x;
//             pq.push(x?x: sum);
//         }
//         return true;