#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
   
    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        if (n == 1) {
            cout << string(1, s[0]) + string(1, s[0]) << endl; 
        } else if (s[0] == s[1]) {
            cout << string(1, s[0]) + string(1, s[0]) << endl; 
        } else {
            string greed = string(1, s[0]);
            for (int i = 1; i < n; i++) {
                if (s[i - 1] < s[i]) {
                    break;
                }
                greed += s[i];
            }
            
            string greed_reverse = greed;
            reverse(greed_reverse.begin(), greed_reverse.end());
            string res = greed + greed_reverse;
            cout << res << endl;
        }
    }

    return 0;
}