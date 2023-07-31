/*
 * @lc app=leetcode id=2255 lang=cpp
 *
 * [2255] Count Prefixes of a Given String
 */

// @lc code=start
class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {

        int n=words.size();
        int count=0;


        vector<string> v;
        //all possible prefixes of s store in v
        for(int i=0;i<s.size();i++){
            string temp="";
            for(int j=0;j<=i;j++){
                temp+=s[j];
            }
            v.push_back(temp);
        }

        //return size  of v

        int size=v.size();

        //match each word in words with v

        for(int i=0;i<n;i++){
            for(int j=0;j<size;j++){
                if(words[i]==v[j]){
                    count++;
                    break;
                }
            }
        }
        // for(int i=0;i<n;i++){
        //     for(int j=0;j<size;j++){
        //         if(words[i].find(v[j])==0){
        //             count++;
        //             break;
        //         }
        //     }
        // }

        return count;
        
    }
};
// @lc code=end

