/*
 * @lc app=leetcode id=2351 lang=cpp
 *
 * [2351] First Letter to Appear Twice
 */

// @lc code=start
class Solution {
public:
    char repeatedCharacter(string s) {
        
         vector<pair<char, int>> v;

    unordered_map<char, int> m;

      
      int n=s.length();
      for(int i=0;i<n;i++)
        {

           if(m[s[i]]==1)
           {
            v.push_back({s[i],i});
           }
            else
            {
                m[s[i]]++;
            }
           
           
        }


        //compare 2nd in pair and return the first one
        sort(v.begin(),v.end(),[](const pair<char,int>& a,const pair<char,int>& b)
        {
            return a.second<b.second;
        }
        );


        //print v
        // for(int i=0;i<v.size();i++)
        // {
        //     cout<<v[i].first<<" "<<v[i].second<<endl;
        // }

        return v[0].first;

      

    
       

        // unordered_map<char, int> m;
        // for(auto c : s) {
        //     if(m[c] == 1) return c;
        //     m[c]++;
        // }
        // return ' ';
        
    }
};
// @lc code=end

