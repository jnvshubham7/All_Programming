/*
 * @lc app=leetcode id=389 lang=cpp
 *
 * [389] Find the Difference
 */

// @lc code=start
class Solution {
public:
    char findTheDifference(string s, string t) {

         vector<char> s1;
        vector<char> s2;
        //store all characters in s in vector v1
        for(int i=0;i<s.size();i++){
            
                s1.push_back(s[i]);
            
        }
        //store all characters in t in vector v2
        for(int i=0;i<t.size();i++){
          
                s2.push_back(t[i]);
            
        }
        //sort s1 and s2
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        //compare s1 and s2 
        for(int i=0;i<s1.size();i++){
            if(s1[i]!=s2[i]){
                return s2[i];
            }
        }
        return s2[s2.size()-1];
        
    }
};
// @lc code=end

