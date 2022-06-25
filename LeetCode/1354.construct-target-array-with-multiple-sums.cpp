/*
 * @lc app=leetcode id=1354 lang=cpp
 *
 * [1354] Construct Target Array With Multiple Sums
 */

// @lc code=start
class Solution {
public:
//define long long
    typedef long long ll;

    bool isPossible(vector<int>& target) {

        ll n = target.size();
       //use priority queue
       priority_queue<int> pq;
        unsigned int sum = 0;
        for (int x : target){
            sum += x;
             pq.push(x);
            //cout<<sum<<" "<<pq.top()<<endl;
        }

        //print the queue
        // while(!pq.empty()){
        //     cout<<pq.top()<<endl;
        //     pq.pop();
        // }





        while (pq.top() != 1) {
            int x = pq.top();
            pq.pop();
           // cout<<sum<<" "<<x<<" ";
            sum-=x;
            cout<<sum<<" "<<pq.top()<<" ";
            if (x<= sum || sum < 1) return false;
            x%= sum;
            cout<<x<<" "<<sum<<endl;
            sum+=x;
            pq.push(x?x: sum);
        }
        return true;

    }
};
// @lc code=end

