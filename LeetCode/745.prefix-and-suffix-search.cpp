/*
 * @lc app=leetcode id=745 lang=cpp
 *
 * [745] Prefix and Suffix Search
 */

// @lc code=start
class WordFilter {
public:
  unordered_map<string, int> mp;

    WordFilter(vector<string>& words) {
        int n = words.size();
        for(int i=0;i<n;i++)
        {
            mp[words[i]]=i;
        }



        
    }
    
    int f(string prefix, string suffix) {

        string temp;
        int res=-1;
        for(auto x:mp){
            if(x.first.size()>=prefix.size() && x.first.size()>=suffix.size()){
                temp=x.first.substr(0,prefix.size());
                if(temp==prefix){
                    temp=x.first.substr(x.first.size()-suffix.size(),suffix.size());
                    if(temp==suffix){
                       // return x.second;
                        return res=max(res,x.second);
                    }
                }

        }
        }
        return res;


       
        
    }

};

/**
 * Your WordFilter object will be instantiated and called as such:
 * WordFilter* obj = new WordFilter(words);
 * int param_1 = obj->f(prefix,suffix);
 */
// @lc code=end

