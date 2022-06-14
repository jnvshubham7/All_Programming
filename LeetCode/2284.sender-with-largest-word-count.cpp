/*
 * @lc app=leetcode id=2284 lang=cpp
 *
 * [2284] Sender With Largest Word Count
 */

// @lc code=start
class Solution {
public:
    string largestWordCount(vector<string>& messages, vector<string>& senders) {

        unordered_map<string,int> freq;

//add all word in single string
vector<string> all_words;
for(int i=0;i<messages.size();i++){
    stringstream ss(messages[i]);
    string word;
    while(ss>>word){
        all_words.push_back(word);
    }
}

//from sender alsop
for(int i=0;i<senders.size();i++)
{
    stringstream ss(senders[i]);
    string word;
    while(ss>>word){
       all_words.push_back(word);
    }



}


//find frequency of each word return max frequency word 
for(int i=0;i<all_words.size();i++){
    freq[all_words[i]]++;
}


//find max frequency word
int max_freq=0;
string max_word="";
for(auto it=freq.begin();it!=freq.end();it++){
    if(it->second>max_freq){
        max_freq=it->second;
        max_word=it->first;
    }
}

return max_word;
        
    }
};
// @lc code=end

