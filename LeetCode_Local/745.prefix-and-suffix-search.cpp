/*
 * @lc app=leetcode id=745 lang=cpp
 *
 * [745] Prefix and Suffix Search
 */

// @lc code=start
class WordFilter {
public:
  unordered_map<string, int> mp;

    WordFilter(vector<string>& words) {

        int n=words.size();
        for(int i=0;i<n;i++)
        {
            string str=words[i];
            int m=str.size();

            for(int j=1;j<=m;j++)
            {
                string p=str.substr(0,j);

                for(int k=0;k<m;k++)
                {
                    string s=str.substr(k,m);

                    mp[p+ "|" +s]=i+1;
                }
            }
        }

       
       }



        // int n = words.size();
        // for(int i=0;i<n;i++)
        // {
        //     mp[words[i]]=i;
        // }



        
    
    
    int f(string prefix, string suffix) {

        string s=prefix+"|" +suffix;

       return mp[s]-1;


        
        

      



        // string temp;
        // int res=-1;
        // for(auto x:mp){
        //     if(x.first.size()>=prefix.size() && x.first.size()>=suffix.size()){
        //         temp=x.first.substr(0,prefix.size());
        //         if(temp==prefix){
        //             temp=x.first.substr(x.first.size()-suffix.size(),suffix.size());
        //             if(temp==suffix){
        //                // return x.second;
        //                 return res=max(res,x.second);
        //             }
        //         }

        // }
        // }
        // return res;


    
        
    }

};

/**
 * Your WordFilter object will be instantiated and called as such:
 * WordFilter* obj = new WordFilter(words);
 * int param_1 = obj->f(prefix,suffix);
 */
// @lc code=end











#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){


// Input
// ["WordFilter", "f"]
// [[["apple"]], ["a", "e"]]

vector<string> words = {"apple"};

unordered_map<string, int> mp;


     int n = words.size();
        for (int i = 0; i < n; i++) {
            string word = words[i];
            int wordSize = word.size();
            for (int j = 1; j <= wordSize; j++) {
                string p = word.substr(0, 1);
                for (int k = 0; k < wordSize; k++) {
                    string s = word.substr(wordSize-1, wordSize);
                    mp[p + "|" + s] = i + 1;

                   
                       
                }
            }
        }

        //print mp

        for(auto x:mp){
            cout<<x.first<<" "<<x.second<<endl;
        }



         

       
        



    return 0;
}


