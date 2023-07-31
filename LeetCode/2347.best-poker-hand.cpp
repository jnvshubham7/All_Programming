/*
 * @lc app=leetcode id=2347 lang=cpp
 *
 * [2347] Best Poker Hand
 */

// @lc code=start
class Solution {
public:
    string bestHand(vector<int>& ranks, vector<char>& suits) {

        unordered_map<int, int> rank_count;
        unordered_map<char, int> suit_count;
        for (int i = 0; i < ranks.size(); i++) {
            rank_count[ranks[i]]++;
            suit_count[suits[i]]++;
        }
       //suit 2nd have 5 

       for(auto it:suit_count) {
           if(it.second >= 5) {
               return "Flush";
           }
       }

      //suit 2nd have 3
         for(auto it : rank_count) {
              if(it.second >= 3) {
                return "Three of a Kind";
              }
         }
         //suit 2nd have 2
         for(auto it : rank_count) {
              if(it.second >= 2) {
                return "Two Pair";
              }
         }
         //suit 2nd have 1
         
         return "High Card";

        
    }
};
// @lc code=end

