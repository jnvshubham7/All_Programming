


#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){


    int num,k;
    cin>>num>>k;

    vector<int> v;

    for(int i=0;i<=num;i++)
    {
        if(i%10==k)
        {
            v.push_back(i);
        }
    }

    vector<int> coins;
    coins=v;
    
    int amount=num;

   
     vector<int> dp(amount + 1, INT_MAX);
            dp[0] = 0;
            for (int i = 0; i <= amount; i++)
            {
                for (int j = 0; j < coins.size(); j++)
                {
                    if (coins[j] <= i && dp[i - coins[j]] != INT_MAX)
                    {
                        dp[i] = min(dp[i], dp[i - coins[j]] + 1);

                             for(int i=0;i<dp.size();i++)
        {
            cout<<i<<" "<<dp[i]<<" ";
        }

        cout<<endl;
                        
                    }
                }
            }
           // return dp[amount] == INT_MAX ? -1 : dp[amount];

        




    


    return 0;
}