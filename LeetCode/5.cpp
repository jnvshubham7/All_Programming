class Solution {
public:
//function
bool isPalindrome(string s) {
   int i = 0;
   int j = s.size() - 1;
   while (i < j) {
       if (s[i] != s[j]) {
           return false;
       }
       i++;
       j--;
   }
   return true;
}





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

        if (s.empty()) {
            return "";
        }
        if (s.size() == 1) {
            return s;
        }
        string longest = "";
        for (int i = 0; i < s.size(); i++) {
            string temp = "";
            for (int j = i; j < s.size(); j++) {
                temp += s[j];
                if (isPalindrome(temp)) {
                    if (temp.size() > longest.size()) {
                        longest = temp;
                    }
                }
            }
        }
        return longest;

        
    }
};