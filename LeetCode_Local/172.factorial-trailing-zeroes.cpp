/*
 * @lc app=leetcode id=172 lang=cpp
 *
 * [172] Factorial Trailing Zeroes
 */

// @lc code=start
class Solution {
public:
    int trailingZeroes(int n) {

        int count=0;

        for(long long i=5;n/i;i*=5)
        {
            count+=n/i;
        }
        return count;



        
    }
};
// @lc code=end







#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

int n;
cin>>n;

int count=0;
vector<int> v;

for (long long i = 5; n / i; i *= 5)
{
     count += n / i;
     v.push_back(count);

}

//print vector
for(int i=0;i<v.size();i++)
{
    cout<<v[i]<<" ";
}




    return 0;
}