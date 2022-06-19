class Solution {
public:

string solve(string s1,string s2)
{
    int n=s1.size();
    int m=s2.size();

    int dp[n+1][m+1];

    int res=0;
    string ans;

    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=m;j++)
        {
            if(i==0 || j==0)
            dp[i][j]=0;
        }
    }

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(s1[i-1]==s2[j-1])
            {
                dp[i][j]=1+dp[i-1][j-1];
            }
            else {
                dp[i][j]=0;
            }

            if(dp[i][j]>res)
            {
                string temp=s1.substr(i-dp[i][j],dp[i][j]);
                string rev=temp;
                reverse(rev.begin(),rev.end());

                if(rev==temp)
                {
                    ans=temp;
                res=dp[i][j];

                }
                

            }


        }
    }

    return ans;

}



    string longestPalindrome(string s1) {

        string s2=s1;
        reverse(s2.begin(),s2.end());
      return  solve(s1,s2);

       
        
    }
};