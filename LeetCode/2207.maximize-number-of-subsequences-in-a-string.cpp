/*
 * @lc app=leetcode id=2207 lang=cpp
 *
 * [2207] Maximize Number of Subsequences in a String
 */

// @lc code=start



class Solution {





public:




int subsequence(string s, string t) {

    int m = s.size();

    int n = t.size();

    vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));

    for (int i = 0; i <= m; i++) {

        for (int j = 0; j <= n; j++) {

            if (i == 0 || j == 0) {

                dp[i][j] = 0;

            } else if (s[i - 1] == t[j - 1]) {

                dp[i][j] = dp[i - 1][j - 1] + 1;

            } else {

                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);

            }

        }

    }

    return dp[m][n];

}


// //subsequence of string match from pattern
// int count( n, int m, string s, string p) {
//     int dp[n + 1][m + 1];
//     memset(dp, 0, sizeof(dp));
//     for (int i = 0; i <= n; i++) {
//         for (int j = 0; j <= m; j++) {
//             if (i == 0 || j == 0) {
//                 dp[i][j] = 0;
//             } else if (s[i - 1] == p[j - 1]) {
//                 dp[i][j] = dp[i - 1][j - 1] + 1;
//             } else {
//                 dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
//             }
//         }
//     }
//     return dp[n][m];
// }






    long long maximumSubsequenceCount(string text, string pattern) {
        
        //find maximum no of subsequence from text
        
        int n = text.length();
        int m = pattern.length();

        //pattern[0] put in text at every position and find subsequence
        //pattern[1] put in text at every position and find subsequence


        vector<string> v;
        for (int i = 0; i < n; i++) {
            string s = text;
            s[i] = pattern[0];
            v.push_back(s);
        }

        //pattern[1] put in text at every position and find subsequence
        vector<string> v1;
        for (int i = 0; i < n; i++) {
            string s = text;
            s[i] = pattern[1];
            v1.push_back(s);
        }

       int max1 = 0;
    //    for(int i = 0; i < n; i++) {
    //        int count = subsequence(v[i], pattern);
    //        int count1 = subsequence(v1[i], pattern);
    //        max = max(max, count + count1);
    //      }


for(int i=0;i<v1.size();i++)
{
   
    int count1 = subsequence(v1[i], pattern);
    max1 = max(max1, count1);
}


        int max_count = 0;
        for (int i = 0; i < v.size(); i++) {
            //use dp to find subsequences

            int count = subsequence(v[i], pattern);
            max_count = max(max_count, count);






        }
        //return max_count;
        int final_max= max(max_count,max1);
        return final_max;

      //  return max;

        // int max_count = 0;
        // for (int i = 0; i < v.size(); i++) {
        //     int count = count(n, m, v[i], pattern);
        //     max_count = max(max_count, count);
        // }

        // return max_count;


        // vector<int> dp(n + 1, 0);
        // for (int i = 0; i <= n; i++) {
        //     for (int j = 0; j <= m; j++) {
        //         if (i == 0 || j == 0) {
        //             dp[i] = 0;
        //         } else if (text[i - 1] == pattern[j - 1]) {
        //             dp[i] = dp[i - 1] + 1;
        //         } else {
        //             dp[i] = max(dp[i - 1], dp[i]);
        //         }
        //     }
        // }
        // return dp[n];









        // int dp[n + 1][m + 1];
        // memset(dp, 0, sizeof(dp));
        // for (int i = 0; i <= n; i++) {
        //     for (int j = 0; j <= m; j++) {
        //         if (i == 0 || j == 0) {
        //             dp[i][j] = 0;
        //         } else if (text[i - 1] == pattern[j - 1]) {
        //             dp[i][j] = dp[i - 1][j - 1] + 1;
        //         } else {
        //             dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        //         }
        //     }
        // }
        // return dp[n][m];

        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        

//         You are given a 0-indexed string text and another 0-indexed string pattern of length 2, both of which consist of only lowercase English letters.

// You can add either pattern[0] or pattern[1] anywhere in text exactly once. Note that the character can be added even at the beginning or at the end of text.

// Return the maximum number of times pattern can occur as a subsequence of the modified text.

// A subsequence is a string that can be derived from another string by deleting some or no characters without changing the order of the remaining characters.
        

        //add either pattern[0] or pattern[1] anywhere in text exactly once then check maximum number of times pattern can occur as a subsequence of the modified text
        //Time complexity: O(n)
        //Space complexity: O(1)

        //initialize count of pattern
        // long long count = 0;
        // //initialize count of pattern[0]
        // long long count0 = 0;
        // //initialize count of pattern[1]
        // long long count1 = 0;
        // //initialize count of pattern[0] and pattern[1]
        // long long count01 = 0;

        //loop through text



// vector<int> n;


// // vector<int> n;
// //text store in vector
// for (int i = 0; i < text.length(); i++) {
//     n.push_back(text[i]);
// }
// // for(int i=0;i<text.length();i++){
// //     v.push_back(text[i]);
// // }



// //pattern[0] add every place in v then store no of subsuquences in unordered_map


// //insert pattern[0] in v at every place then store no of subsuquences in unordered_map

// for(int i=0;i<n.size();i++){
//     n[i]=n[i]+pattern[0];
// }

// // for(int i=0;i<v.size();i++){
// //     if(v[i]==pattern[0]){
// //         v.insert(v.begin()+i,pattern[0]);

// //     }
// // }

//    // the maximum number of times pattern can occur as a subsequence of the modified v 
//    //store in unordered_map 
//    unordered_map<int,int> m;

//    //count no of subsuquences in unordered_map
//    //store function count subsuquences in v
   

//  //  cout << count(X, Y, X.size(), Y.size());
// //    count =  count(v,pattern,v.size(),pattern.size());
// int count1 = count( n,pattern,n.size(),pattern.size());
//    //  cout << count;

// return count1;

   
    
















    }
};
// @lc code=end

