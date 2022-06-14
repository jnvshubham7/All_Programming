/*
 * @lc app=leetcode id=2269 lang=cpp
 *
 * [2269] Find the K-Beauty of a Number
 */

// @lc code=start
class Solution {
public:
    int divisorSubstrings(int num, int k) {

        


string str=to_string(num);
int n=str.length();
int count=0;

for(int i=0;i<=(n-k);i++)
{
    if(stoi(str.substr(i,k)) != 0)
    if(num%stoi(str.substr(i,k))==0)
    count++;

}
return count;

        
    }
};
// @lc code=end

