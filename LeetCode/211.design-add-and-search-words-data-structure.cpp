/*
 * @lc app=leetcode id=211 lang=cpp
 *
 * [211] Design Add and Search Words Data Structure
 */

// @lc code=start
class WordDictionary {
public:
     map<int, vector<string>> dict; 
    WordDictionary() {
        
    }
    
    void addWord(string word) {
        dict[word.size()].push_back(word);
    }
    
    bool search(string word) {
        if(dict[word.size()].size()==0)
        {
            return false;
        }
        for(string s: dict[word.size()])
        {
            if(s==word)
            {
                return true;
            }
            int l=0;
            for(int i=0; i<word.size(); i++)
            {
                if(word[i]=='.')
                {
                    l++;
                    continue;
                }
                if(word[i]!=s[i])
                {
                    break;
                }
                l++;
            }
            if(l==word.size())
            {
                return true;
            }
        }
        return false;
        
    }
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */
// @lc code=end

