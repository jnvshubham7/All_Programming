class Solution {
public:
//function
// bool isPalindrome(string s) {
//    int i = 0;
//    int j = s.size() - 1;
//    while (i < j) {
//        if (s[i] != s[j]) {
//            return false;
//        }
//        i++;
//        j--;
//    }
//    return true;
// }


// bool isPalindrome(string s)
//     {
//         int i = 0, j = s.size() - 1;

//         while (i < j)
//         {
//             if (s[i++] != s[j--])
//                 return false;
//         }
//         return true;
//     }




    string longestPalindrome(string s) {

        //Given a string s, return the longest palindromic substring in s.
        //For example,
        //Given s = "babad",
        //Return "bab".
        //Note:
        //The longest palindrome substring may be overlapped
        //For example:
        //"abcde" -> "a"
        //"a" -> "a"
        //"aaaa" -> "aaaa"
        //"abcdcba" -> "abcba"
        //"abcdcba" -> "abcdcba"





int n = s.size();
        if (n == 0)
            return "";

        // dp[i][j] will be 'true' if the string from index i to j is a palindrome.
        bool dp[n][n];

        //Initialize with false

        memset(dp, 0, sizeof(dp));

        //Every Single character is palindrome
        for (int i = 0; i < n; i++)
            dp[i][i] = true;

        string ans = "";
        ans += s[0];

        for (int i = n - 1; i >= 0; i--)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (s[i] == s[j])
                {
                    //If it is of two character OR if its susbtring is palindrome.
                    if (j - i == 1 || dp[i + 1][j - 1])
                    {
                        //Then it will also a palindrome substring
                        dp[i][j] = true;

                        //Check for Longest Palindrome substring
                        if (ans.size() < j - i + 1)
                            ans = s.substr(i, j - i + 1);
                    }
                }
            }
        }
        return ans;























//  int n = s.size();
//         if (n == 0)
//             return "";

//         if (n == 1)
//             return s;

//         string result = "";
//         for (int i = 0; i < n - 1; i++)
//         {
//             for (int j = 1; j <= n - i; j++)
//             {
//                 if (isPalindrome(s.substr(i, j)))
//                 {
//                     if (result.size() < j)
//                         result = s.substr(i, j);
//                 }
//             }
//         }
//         return result;














        // if (s.empty()) {
        //     return "";
        // }
        // if (s.size() == 1) {
        //     return s;
        // }
        // string longest = "";
        // for (int i = 0; i < s.size(); i++) {
        //     string temp = "";
        //     for (int j = i; j < s.size(); j++) {
        //         temp += s[j];
        //         if (isPalindrome(temp)) {
        //             if (temp.size() > longest.size()) {
        //                 longest = temp;
        //             }
        //         }
        //     }
        // }
        // return longest;

        
    }
};