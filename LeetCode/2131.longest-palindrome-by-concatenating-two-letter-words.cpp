/*
 * @lc app=leetcode id=2131 lang=cpp
 *
 * [2131] Longest Palindrome by Concatenating Two Letter Words
 */

// @lc code=start
class Solution {
public:

bool Palindrome(string s)
{
    if(s[0]==s[1])
    {
        return true;
    }

    return false;

}

string rev(string s)
{
   reverse(s.begin(),s.end());
   return s;
}
    int longestPalindrome(vector<string>& words) {

        int n=words.size();
        int cnt=0;

        unordered_map<string,int> mp;

       for(int i=0;i<n;i++)
        {
           mp[words[i]]=i;
        }

        for(auto x:mp)
        {
            if(Palindrome(x.first))
            {
                 cnt++;
            }
            else if(mp[rev(x.first)])
            {
               cnt+=2;
            }
        }

        return 2*cnt;

        
    }
};
// @lc code=end








#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool Palindrome(string s)
{
    if(s[0]==s[1])
    {
        return true;
    }

    return false;

}

string rev(string s)
{
   reverse(s.begin(),s.end());
   return s;
}
   

int main(){


//["ab","ty","yt","lc","cl","ab"]
vector<string> words={"ab","ty","yt","lc","cl","ab"};



        int n=words.size();
        int cnt=0;

        unordered_map<string,int> mp;
        //set
        unordered_set<string> st;

       for(int i=0;i<n;i++)
        {
           mp[words[i]]++;
        }
        
        //print unordered_map
        for(auto x:mp)
        {
            //cout<<x.first<<" "<<x.second<<endl;
        }


        for(auto x:mp)
        {
            if(Palindrome(x.first))
            {
                 cnt++;
                 cout<<x.first<<endl;
            }
            else if(mp[rev(x.first)])
            {
                st.insert(x.first);
               cnt+=2;
                cout<<"2"<<x.first<<endl;
            }
           
        }

        //print
        for(auto x:st)
        {
           // cout<<x<<endl;
        }


       // cout<<2*cnt;

        
    

    return 0;
}