/*
 * @lc app=leetcode id=126 lang=cpp
 *
 * [126] Word Ladder II
 */

// @lc code=start
class Solution {
public:
    vector<vector<string>> findLadders(string beginWord, string endWord, vector<string>& wordList) {



        







 if(find(wordList.begin(), wordList.end(),endWord) == wordList.end())
      return {{}};

      unordered_map<string, bool> vis_map;

      vector<string> path;
        vector<vector<string>> res;


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
            path.push_back(word);
            if(word == endWord)
            {

                 res.push_back(path);
                  path.clear();

                
               
               
              
            }
            wordMatch(word,vis_map,q);
            
               
         }
        
        
        

         

         
      }
      

      return res;

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




















