/*
 * @lc app=leetcode id=387 lang=cpp
 *
 * [387] First Unique Character in a String
 */

// @lc code=start
class Solution {
public:
    int firstUniqChar(string s) {

        int n=s.size();

        unordered_map<char,int> mp;
        
        for(int i=0;i<n;i++)
        {
            mp[s[i]]++;
        }

        for(auto it:mp)
        {
            cout<<it.first<<" "<<it.second<<endl;
        }
        
        if(mp.size()==n)
        {
            return 0;
        }

        vector<char> v;

        for(auto it:mp)
        {
            if(it.second==1){
                v.push_back(it.first);
              //  cout<<it.first<<" ";
                
            }
        }
        for(int i=0;i<v.size();i++)
        {
            cout<<v[i]<<" ";
        }

        if(v.size()==0)
        {
            return -1;
        }

        reverse(v.begin(),v.end());

        for(int i=0;i<n;i++)
        {
            if(s[i]==v[0])
            {
                return i;
            }
        }

        return -1;

        

       
        
    }
};
// @lc code=end

