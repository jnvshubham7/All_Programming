/*
 * @lc app=leetcode id=2383 lang=cpp
 *
 * [2383] Minimum Hours of Training to Win a Competition
 */

// @lc code=start
class Solution {
public:
    int minNumberOfHours(int initialEnergy, int initialExperience, vector<int>& energy, vector<int>& experience) {




















        



 int n=energy.size();
        int ans=0;

        for(int i=0;i<n;i++){
            if(initialEnergy<energy[i]+1){
                int temp = energy[i]+1-initialEnergy;
                ans+=temp;
                initialEnergy+=temp;
            }
            if(initialExperience<(experience[i]+1)){
                int required = experience[i] + 1 - initialExperience;
                ans+=required;
                initialExperience+=required;
            }
            initialExperience += experience[i];
            initialEnergy -= energy[i];
        }
        return ans;

























        // int ans=0;
        // int x=initialEnergy;
        // int y=initialExperience;
        // int n=energy.size();
        // for(int i=0;i<n;i++)
        // {
        //     if(x>energy[i])
        //     {
        //         x-=energy[i];
        //         if(y>experience[i])
        //         {
        //             y+=experience[i];
        //         }
        //         else if(y==experience[i])
        //         {
        //             y=y+y;
        //             y++;
        //             ans++;
        //         }
        //         else
        //         {
        //             ans+=(experience[i]-y+1);
        //             y=(2*experience[i]+1);
        //         }
        //     }
        //     else if(x==energy[i])
        //     {
        //         ans++;
        //         x=1;
        //         if(y>experience[i])
        //         {
        //             y+=experience[i];
        //         }
        //         else if(y==experience[i])
        //         {
        //             y=y+y;
        //             y++;
        //             ans++;
        //         }
        //         else
        //         {
        //             ans+=(experience[i]-y+1);
        //             y=(2*experience[i]+1);
        //         }
        //     }
        //     else
        //     {
        //         ans+=(energy[i]-x+1);
        //         x=1;
        //         if(y>experience[i])
        //         {
        //             y+=experience[i];
        //         }
        //         else if(y==experience[i])
        //         {
        //             y=y+y;
        //             y++;
        
        //             ans++;
        //         }
        //         else
        //         {
        //             ans+=(experience[i]-y+1);
        //             y=(2*experience[i]+1);
        //         }
        //     }
        // }
       

        // return ans;




        





    




       
        
    }
};
// @lc code=end




















