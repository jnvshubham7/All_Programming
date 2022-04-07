class Solution {
public:
    int countVowelStrings(int n) {
        // return the number of strings of length n that consist only of vowels (a, e, i, o, u) and are lexicographically sorted.
        //A string s is lexicographically sorted if for all valid i, s[i] is the same as or comes before s[i+1] in the alphabet.



        vector<int> dp(5, 1);
        for(int i=0; i<n; i++){
            for(int j=1; j<5; j++){
                dp[j] = dp[j-1] + dp[j];
            }
        }
        return dp[4];
  


        // if(n==0){
        //     return 0;
        // }

        // if(n==1){
        //     return 5;
        // }

        // int ans=0;

        //use dp to store the number of strings of length n that consist only of vowels (a, e, i, o, u) and are lexicographically sorted.
        // vector<int> dp(n+1,0);
        // dp[0]=0;
        // dp[1]=5;

        // for(int i=2;i<=n;i++){
        //     dp[i]=dp[i-1]*4;
        //     dp[i]+=dp[i-2]*2;
        //     dp[i]+=dp[i-3];
        // }

        // return dp[n];
        

        //use dp for solving the problem
        // vector<int> dp(n+1,0);
        // dp[0]=0;
        // dp[1]=5;

        // for(int i=2;i<=n;i++){

            //only consider the string which are laxico graphically sorted

            //  dp[i]=dp[i-1]*4;
            //     dp[i]+=dp[i-2]*2;
            //     dp[i]+=dp[i-3];





            // dp[i]=dp[i-1]*4;
            // dp[i]+=dp[i-2]*2;
            // dp[i]+=dp[i-3];
      //  }



    }
};