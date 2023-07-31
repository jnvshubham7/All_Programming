#include <iostream>
#include <vector>
#include <utility>
using namespace std;
class Solution {
public:
    bool isPalindrome(string& s) {
        int left = 0, right = s.size() - 1;
        while (left < right) {
            if (s[left] != s[right]) {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
    
    string convertToPalindrome(string& s) {
        int n = s.size();
        if (isPalindrome(s)) {
            return "YES";
        }

        for (int i = 1; i < n - 1; i++) {
            string temp = s;
            temp.erase(i - 1, 3);
            if (isPalindrome(temp)) {
                return "YES";
            }
        }
        
        return "NO";
    }
    
    
};

int main() {
    Solution sol;
    int t;
    cin >> t;

    while (t--) {
       int n;
         cin >> n;

        string s;

        cin >> s;

        cout << sol.convertToPalindrome(s) << endl;
    }

    


   
    

    return 0;
}
