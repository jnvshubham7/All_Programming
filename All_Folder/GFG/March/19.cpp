class Solution{
  public:
    long long findRank(string str) {


      //  Given a string, find the rank of the string amongst its permutations sorted lexicographically. 



      int n=str.length();
        long long ans=0;
        long long count=0;
        long long x=1;
        long long dp[n+1];
        dp[0]=0;
        dp[1]=1;
        dp[2]=2;
        for(int i=3;i<=n;i++){
            dp[i]=dp[i-1]+dp[i-2];
        }
        // cout<<dp[n]<<endl;
        

        // int n = str.length();
        // long long ans = 0;
        // long long x = 1;
        // for(int i=n-1;i>=0;i--){
        //     if(str[i]=='1'){
        //         ans+=x;
        //     }
        //     x*=2;
        // }
        // return ans;









        //code here
    }
};