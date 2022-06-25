#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define pii pair<int,int>
#define rep(i,n) for(int i=0;i<n;i++)
#define all(v) v.begin(),v.end()
#define mem(a,b) memset(a,b,sizeof(a))
#define MOD 1000000007
#define pb push_back
    



   
/*
 * @lc app=leetcode id=84 lang=cpp
 *
 * [84] Largest Rectangle in Histogram
 */

// @lc code=start
class Solution {
public:


private:
    vector<int> prevSmall;
    vector<int> nextSmall;

    void previousSmaller(vector<int> heights){
        stack<int> s;
        s.push(0);
        prevSmall.push_back(-1);
        for(int i=1;i<heights.size();i++){
            while(s.empty()==false && heights[s.top()]>=heights[i])
                s.pop();
            if(s.empty())
                prevSmall.push_back(-1);
            else
                prevSmall.push_back(s.top());
            s.push(i);
        }
    }
    void nextSmaller(vector<int> heights){
        stack<int> s;
        int n = heights.size();
        s.push(n-1);
        nextSmall.push_back(n);
        for(int i=n-2;i>=0;i--){
            while(s.empty()==false && heights[s.top()]>=heights[i])
                s.pop();
            if(s.empty())
                nextSmall.push_back(n);
            else
                nextSmall.push_back(s.top());
            s.push(i);
        }
        //We used the reverse of array to find the next Smaller
        //So we need to reverse the vector
        reverse(nextSmall.begin(),nextSmall.end());
    }
public:
    int largestRectangleArea(vector<int>& heights) {
        nextSmaller(heights);
        previousSmaller(heights);
        int res = 0;
        for(int i=0;i<heights.size();i++){
            int curr = heights[i];
            curr += (i-prevSmall[i]-1)*heights[i];
            curr += (nextSmall[i]-i-1)*heights[i];
            res=max(curr,res);
        }
        return res;
    }





    // int largestRectangleArea(vector<int>& heights) {

    //      int res = 0, curr = 0, n = heights.size();
    //     stack<int> s;
    //     for(int i=0;i<n;i++){
    //         while(s.empty() == false && heights[s.top()]>=heights[i]){
    //             int top = s.top();
    //             s.pop();
    //             if(s.empty())
    //                 curr = heights[top]*i;
    //             else
    //                 curr = heights[top]*(i-s.top()-1);
    //             res = max(curr,res);
    //         }
    //         s.push(i);
    //     }
    //     //For the elements left in the stack
    //     while(s.empty() == false){
    //             int top = s.top();
    //             s.pop();
    //             if(s.empty())
    //                 curr = heights[top]*n;
    //             else
    //                 curr = heights[top]*(n-s.top()-1);
    //             res = max(curr,res);
    //         }
    //     return res;
        
    // }
};
// @lc code=end





int main(){
Solution s;

    vector<int> heights={2,1,5,6,2,3};
    cout<<s.largestRectangleArea(heights)<<endl;


    return 0;
}