/*
 * @lc app=leetcode id=2660 lang=cpp
 *
 * [2660] Determine the Winner of a Bowling Game
 */

// @lc code=start
class Solution {
public:
    int isWinner(vector<int>& p1, vector<int>& p2) {

        int sum1=0,sum2=0;

        int ind1=0,ind2=0;

        for(int i=0;i<p1.size();i++)
        {

            if(p1[i]==10)
            {
               ind1=i;
               break;
            }
           

            
        }

        for(int i=0;i<p2.size();i++)
        {

            if(p2[i]==10)
            {
               ind2=i;
               break;
            }
           

            
        }

        cout<<ind1<<" "<<ind2<<endl;

        for(int i=0;i<ind1;i++)
        {
            sum1+=p1[i];
        }

        for(int i=0;i<ind2;i++)
        {
            sum2+=p2[i];
        }

        for(int i=ind1;i<p1.size();i++)
        {
            sum1+=2*p1[i];
        }

        for(int i=ind2;i<p2.size();i++)
        {
            sum2+=2*p2[i];
        }

        if(sum1>sum2)
        {
            return 1;
        }
        else if(sum2>sum1)
        {
            return 2;
        }
        else
        {
            return 0;
        }


        
    }
};
// @lc code=end

