/*
 * @lc app=leetcode id=127 lang=cpp
 *
 * [127] Word Ladder
 */

// @lc code=start
class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        
      //endWord not in wordList
      if(find(wordList.begin(), wordList.end(),endWord) == wordList.end())
      return 0;

      unordered_map<string, bool> vis_map;

      for(auto word : wordList)
      {
         vis_map[word] =false;
      }

      queue<string> q;
      q.push(beginWord);
      vis_map[beginWord] = true;
      int level = 1;

      while(!q.empty())
      {
         int sz= q.size();
         for(int i=0;i<sz;i++)
         {
            string word=q.front();
            q.pop();
            if(word == endWord)
            {
               return level;
            }
            wordMatch(word,vis_map,q);
         }
         level++;
      }

      return 0;





    }

    void wordMatch(string word, unordered_map<string, bool>& vis_map, queue<string>& q)
    {
        for(int i=0;i<word.size();i++)
        {
            char ch = word[i];
            for(int j=0;j<26;j++)
            {
                  word[i] = 'a'+j;
                 //word[i]= 97+j;
                // cout<<int(word[i])<<endl;
                   if(vis_map.find(word) != vis_map.end() && vis_map[word] == false)
                   {
                     q.push(word);
                     vis_map[word] = true;
                   }

            }
            word[i] = ch;



        }

    }
    

   

};
// @lc code=end

