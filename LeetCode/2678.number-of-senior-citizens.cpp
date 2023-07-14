/*
 * @lc app=leetcode id=2678 lang=cpp
 *
 * [2678] Number of Senior Citizens
 */

// @lc code=start
class Solution {
public:
    int countSeniors(vector<string>& details) {

        int n=details.size();

        int cnt=0;

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<details[i].size();j++)
            {
                if(details[i][j]=='M' || details[i][j]=='F' || details[i][j]=='O')
                {
                    // int age=0;

                    // age=age+details[i][j+1]-'0';
                    // age=age*10+details[i][j+2]-'0';

                    int age=stoi(details[i].substr(j+1,2));

                    if(age>60)
                    {
                        cnt++;
                    }
                }
            }
        }

        return cnt;

        // int age[n];

        // int cnt=0;

       

        //check when the char from a to z found 
        //then from next index to next 2 store  the age

        // for(int i=0;i<n;i++)
        // {
        //     int j=0;
        //    if(details[i][j]=='M' ||  details[i][j]=='F')
        //    {

        //     cout<<details[i][j]<<endl;
        //        string age="";

        //        age=age+details[i][j+1]+details[i][j+2];

        //         int a=stoi(age);

        //         cout<<a<<endl;

        //         age="";

        //         if(a>=60)
        //         {
        //             cnt++;
        //         }
        //    }
        //    j++;
        // }

        // return cnt;


        
    }
};
// @lc code=end

