
















// class Solution {
// public:


// vector<int> findAnagrams(string s, string p) {
// 	vector<int> goal(26), cur(26), res;
// 	for(char c : p) 
//     goal[c - 'a']++;
// 	for(int i = 0; i < s.size(); i++) {
// 		cur[s[i] - 'a']++;
// 		if(i >= p.size()) 
//         cur[s[i - p.size()] - 'a']--;
// 		if(cur == goal) 
//         res.push_back(i - p.size() + 1);
// 	}
// 	return res;
// }
// }



















// Sliding Window Soln
// Time: O(S) where S is no. of elements in str 
// Space: O(S) where S is no. of elements in str

class Solution {
public:
    vector<int> findAnagrams(string str, string pat) 
    {
        if (pat.length() > str.length()) {
            return {};
        }
        
        vector<int> res;
        
        int counts[26];
        for (int i = 0; i < 26; i++) {
            counts[i] = 0;
        }
        for (int i = 0; i < pat.length(); i++) {
            counts[pat[i] - 'a']++;
        }
        
        int i = 0;
        int j = 0;
        while (j < str.length()) {
            // calculations
            counts[str[j] - 'a']--;
            // create sliding window
            if (j - i + 1 < pat.length()) {
                j++;
            }
            // sliding window created
            else if (j - i + 1 == pat.length()) {
                // get answer from calculations
                bool includeThis = true;
                for (int i = 0; i < 26; i++) {
                    if (counts[i] != 0) {
                        includeThis = false;
                    }
                }
                if (includeThis) {
                    res.push_back(i);
                }
                // move the sliding window
                counts[str[i] - 'a']++;
                i++;
                j++;
            }
        }
                
        return res;
    }
};






















// class Solution {
// public:
//     vector<int> findAnagrams(string s, string p) {
//         vector<int> shash(26,0);
//         vector<int> phash(26,0);
//         vector<int> ans;
        
//         if(p.size() > s.size())
//             return ans;
        
//         int left = 0, right = 0;
//         while(right < p.size()){
//             phash[p[right] - 'a']++;
//             shash[s[right] - 'a']++;
//             right++;
//         }
//         right--;
//         while(right < s.size()){
//             if(phash == shash)
//                 ans.push_back(left);
//             right++;
//             if(right != s.size()){
//                 shash[s[right] - 'a'] ++;
//                 shash[s[left] - 'a'] --;
//             }
//             left++;
//         }
//         return ans;
//     }
// };


























// class Solution {
// public:
//     vector<int> findAnagrams(string s, string p) {
//         vector<int> pv(26,0), sv(26,0), res;
//         if(s.size() < p.size())
//            return res;
//         // fill pv, vector of counters for pattern string and sv, vector of counters for the sliding window
//         for(int i = 0; i < p.size(); ++i)
//         {
//             ++pv[p[i]-'a'];
//             ++sv[s[i]-'a'];
//         }
//         if(pv == sv)
//            res.push_back(0);

//         //here window is moving from left to right across the string. 
//         //window size is p.size(), so s.size()-p.size() moves are made 
//         for(int i = p.size(); i < s.size(); ++i) 
//         {
//              // window extends one step to the right. counter for s[i] is incremented 
//             ++sv[s[i]-'a'];
            
//             // since we added one element to the right, 
//             // one element to the left should be discarded. 
//             //counter for s[i-p.size()] is decremented
//             --sv[s[i-p.size()]-'a']; 

//             // if after move to the right the anagram can be composed, 
//             // add new position of window's left point to the result 
//             if(pv == sv)  // this comparison takes O(26), i.e O(1), since both vectors are of fixed size 26. Total complexity O(n)*O(1) = O(n)
//                res.push_back(i-p.size()+1);
//         }
//         return res;
//     }
// };






















// class Solution {
// public:
//     vector<int> findAnagrams(string str, string pat) 
//     {
//         if (pat.length() > str.length()) {
//             return {};
//         }
        
//         sort(pat.begin(), pat.end());
//         unordered_set<char> myset(pat.begin(), pat.end());
//         vector<int> res;
        
//         for (int i = 0; i < str.length(); i++) {
//             char ch = str[i];
//             if (myset.count(ch) > 0) {
//                 string curPat;
//                 for (int j = i; j < i + pat.length() && j < str.length(); j++) {
//                     curPat += str[j];
//                 }
//                 sort(curPat.begin(), curPat.end());
//                 if (pat == curPat) {
//                     res.push_back(i);
//                 }
//             }
//         }
        
//         return res;
//     }
// };