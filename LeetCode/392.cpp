class Solution {
public:
    bool isSubsequence(string s, string t) {

        //first char of s is in t then delete previous all char from t
        //then check next char of s
        //if not found return false
        //if found return true
        int i=0,j=0;
        while(i<s.size() && j<t.size())
        {
            if(s[i]==t[j])
            {
                i++;
                j++;
            }
            else
            {
                j++;
            }
        }
        return i==s.size();

        
        
    }
};