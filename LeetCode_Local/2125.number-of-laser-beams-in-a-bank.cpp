/*
 * @lc app=leetcode id=2125 lang=cpp
 *
 * [2125] Number of Laser Beams in a Bank
 */

// @lc code=start
class Solution {
public:
    int numberOfBeams(vector<string>& bank) {

        int n=bank.size();  
        vector<int> ones;

        if(n==0){
            return 0;
        }


        if(n==1){
          
               return 0;
         
        }

        // & operator

       

        for(int i=0;i<n;i++){
            int count=0;
            for(int j=0;j<bank[i].size();j++){
                if(bank[i][j]=='1'){
                    count++;
                }
            }
            if(count==0)
            continue;
            ones.push_back(count);
        }

        if(ones.size()==0){
            return 0;
        }

        for(auto it:ones){
            cout<<it<<" ";
        }

        int ans=0;

        for(int i=0;i<ones.size()-1;i++){
            ans+=(ones[i]*ones[i+1]);

           
            
        }

        return ans;



        
    }
};
// @lc code=end

