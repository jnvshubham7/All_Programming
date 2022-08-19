/*
 * @lc app=leetcode id=804 lang=cpp
 *
 * [804] Unique Morse Code Words
 */

// @lc code=start
class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {

        // string morse[] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        vector<string> morse = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        unordered_set<string> s;
        for (auto& word : words) {
            string res;
            for (auto& c : word) {
                res += morse[c - 'a'];
                
            }
            s.insert(res);
        }
        return s.size();

        // unordered_map<char, string> m = {
        //     {'a', ".-"},
        //     {'b', "-..."},
        //     {'c', "-.-."},
        //     {'d', "-.."},
        //     {'e', "."},
        //     {'f', "..-."},
        //     {'g', "--."},
        //     {'h', "...."},
        //     {'i', ".."},
        //     {'j', ".---"},
        //     {'k', "-.-"},
        //     {'l', ".-.."},
        //     {'m', "--"},
        //     {'n', "-."},
        //     {'o', "---"},
        //     {'p', ".--."},
        //     {'q', "--.-"},
        //     {'r', ".-."},
        //     {'s', "..."},
        //     {'t', "-"},
        //     {'u', "..-"},
        //     {'v', "...-"},
        //     {'w', ".--"},
        //     {'x', "-..-"},
        //     {'y', "-.--"},
        //     {'z', "--.."},
        // };

        
        // unordered_set<string> s;
        // for(auto& word : words)
        // {
        //     string res;
        //     for(auto& c: word)
        //     {
        //         res += m[c];
        //     }
        //     s.insert(res);


        // }

        // return s.size();



        
    }
};
// @lc code=end

