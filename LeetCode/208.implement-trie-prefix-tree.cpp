/*
 * @lc app=leetcode id=208 lang=cpp
 *
 * [208] Implement Trie (Prefix Tree)
 */

#include<bits/stdc++.h>
using namespace std;

    




// @lc code=start
class TrieNode {
public:

    
    // Initialize your data structure here.
    bool is_word;
    TrieNode *children[26];
    
    TrieNode() {
        is_word = false;
        
        for (int i = 0; i < 26; i++)
            children[i] = NULL;
    }
};

class Trie {
public:
    TrieNode* root=new TrieNode();
   // Trie() {
      //  root = new TrieNode();
   // }

    // Inserts a word into the trie.
    void insert(string word) {
        int word_len = word.length();
        int k = 0;
        TrieNode *cur = root;
        
        for (int i = 0; i < word_len; i++)
        {
            k = word[i] - 'a';
            
            if (cur->children[k] == NULL)
            {
                cur->children[k] = new TrieNode();
            }
            
            cur = cur->children[k];
        }

        
        cur->is_word = true;
    }

    // Returns if the word is in the trie.
    bool search(string word) {
        int word_len = word.length();
        int k = 0;
        TrieNode *cur = root;
        
        for (int i = 0; i < word_len; i++)
        {
            k = word[i] - 'a';
            cur = cur->children[k];
            
            if (cur == NULL)
                return false;
        }

      //  cout<<cur->is_word<<endl;
        
        return cur->is_word;
    }

    // Returns if there is any word in the trie
    // that starts with the given prefix.
    bool startsWith(string prefix) {
        int word_len = prefix.length();
        int k = 0;
        TrieNode *cur = root;
        
        for (int i = 0; i < word_len; i++)
        {
            k = prefix[i] - 'a';
            cur = cur->children[k];
            
            if (cur == NULL)
                return false;
        }

       // cout<<true<<endl;
        
        return true;
    }


    
};


/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */
// @lc code=end





int main(){

Trie t;



 // string word={"appple", "Shubham", "rahul", "shubham", "apple", "sonu" };
  //vector<string> v = {"appple", "Shubham", "rahul", "shubham", "apple", "sonu" };
  int n;
  string s;

  for(int i=0;i<n;i++){
    cin>>s;
    t.insert(s);
    }


    // for(auto i:v){
    //     t.insert(i);
    // }
  
    cout<<t.search("anoop")<<endl;
    cout<<t.startsWith("shu")<<endl;
   







   
   

    return 0;
}