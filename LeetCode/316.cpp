class Solution {
public:
    string removeDuplicateLetters(string s) {

        // Given a string s, remove duplicate letters so that every letter appears once and only once. 
        // You must make sure your result is the smallest in lexicographical order among all possible results.

        // Example 1:
        // Input: "bcabc"
        // Output: "abc"

        // Example 2:
        // Input: "cbacdcbc"
        // Output: "acdb"



//use greedy algorithm

        //sort the string
        sort(s.begin(), s.end());

        //use a stack to store the result
        stack<char> st;






        //use a set to store the visited char
        set<char> visited;

        //use a set to store the result
        set<char> result;

        //use a set to store the char in the string
        set<char> str;

        //use a set to store the char in the string



        

        // int n = s.size();
        // vector<int> cnt(26, 0);
        // vector<int> idx(26, -1);
        // for (int i = 0; i < n; ++i) {
        //     ++cnt[s[i] - 'a'];
        //     idx[s[i] - 'a'] = i;
        // }

        // string res = "";
        // for (int i = 0; i < n; ++i) {
        //     --cnt[s[i] - 'a'];
        //     if (res.back() == s[i]) continue;
        //     while (res.size() && res.back() > s[i] && idx[res.back() - 'a'] > i) {
        //         res.pop_back();
        //     }
        //     res += s[i];
        // }
        // return res;








        
    }
};