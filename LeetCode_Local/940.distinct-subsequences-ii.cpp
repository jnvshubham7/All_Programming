/*
 * @lc app=leetcode id=940 lang=cpp
 *
 * [940] Distinct Subsequences II
 */

// @lc code=start
class Solution {
public:
 unordered_set<string> memo;
  
void generate_substring(string input,string output){
    if(input.length()==0){

        if(output!="")
        {
            memo.insert(output);

        }

       
       
       
        return;
    }
    string out_dont_choose=output;
    string out_choose=output;
    out_choose.push_back(input.at(0));
    input.erase(input.begin()+0);

    generate_substring(input,out_dont_choose);
    generate_substring(input,out_choose);

    return;
}


    int distinctSubseqII(string s) {

        generate_substring(s,"");

       
       
        return memo.size();
        
    }
};
// @lc code=end

