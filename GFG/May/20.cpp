
class Solution {
  public:
    int findTime(string S1, string S2) {

        // int n1 = S1.size();
        // int n2 = S2.size();

         int alpha[26];
        
        for(int i = 0; i < S1.length(); i++) {
            alpha[S1[i] - 'a'] = i;    
        }
        
        int ans = 0;
        int prev = -1;
        
        for(int i = 0; i < S2.length(); i++) {
            int j = alpha[S2[i]-'a'];
            if(prev == -1) {
                ans += j;
                prev = j;
            }
            else {
                ans += abs(prev - j);
                prev = j;
            }
        }
        return ans;




        // int dp[n1 + 1][n2 + 1];

        // for (int i = 0; i <= n1; i++) {
        //     for (int j = 0; j <= n2; j++) {
        //         if (i == 0 || j == 0) {
        //             dp[i][j] = 0;
        //         }
        //         else if (S1[i - 1] == S2[j - 1]) {
        //             dp[i][j] = dp[i - 1][j - 1] + 1;
        //         }
        //         else {
        //             dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        //         }
        //     }
        // }

        // return dp[n1][n2];




    }
};