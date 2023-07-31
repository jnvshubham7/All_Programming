/*
 * @lc app=leetcode id=76 lang=cpp
 *
 * [76] Minimum Window Substring
 */

// @lc code=start
class Solution {
public:
    string minWindow(string s, string t) {

        int n=s.size();
        int m=t.size();

        map<char,int> m1;
        map<char,int> m2;

        for(int i=0;i<m;i++){
            m2[t[i]]++;
        }

        int i=0,j=0;

        int cnt=0;

        int min_len=INT_MAX;

        string ans="";



        while(j<n){

            if(m2.find(s[j])!=m2.end()){
                m1[s[j]]++;
                if(m1[s[j]]<=m2[s[j]]){
                    cnt++;
                }
            }

            if(cnt==m){
                while(m2.find(s[i])==m2.end() || m1[s[i]]>m2[s[i]]){
                    if(m2.find(s[i])!=m2.end()){
                        m1[s[i]]--;
                    }
                    i++;
                }

                int len=j-i+1;
                if(len<min_len){
                    min_len=len;
                    ans=s.substr(i,len);
                }
            }

            j++;
        }

        return ans;

        
        
    }
};
// @lc code=end

