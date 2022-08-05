/*
 * @lc app=leetcode id=1684 lang=cpp
 *
 * [1684] Count the Number of Consistent Strings
 */

// @lc code=start
class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {

        int n=words.size();
        

        int cnt=0;

        set<char> allowed_set;
        for(int i=0;i<allowed.size();i++)
        {
            allowed_set.insert(allowed[i]);
        }

        set<char> word_set;

        for(int j=0;j<n;j++)
        {
            

           
        }





        //print the allowed set
        // for(auto it=allowed_set.begin();it!=allowed_set.end();it++)
        // {
        //     cout<<*it<<" ";
        // }
        // cout<<endl;




        return cnt;


        




       
       

        
    }
};
// @lc code=end

