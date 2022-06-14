/*
 * @lc app=leetcode id=2231 lang=cpp
 *
 * [2231] Largest Number After Digit Swaps by Parity
 */

// @lc code=start
class Solution {
public:
    int largestInteger(int num) {

         unordered_map<int,int> m;

        int i=0;

        while(num>0)
        {
            m[i]=num%10;
            num=num/10;
            i++;
        }

        //reverse in map

        for(int i=0;i<m.size()/2;i++)
        {
            int temp=m[i];
            m[i]=m[m.size()-i-1];
            m[m.size()-i-1]=temp;
        }



        // int ans=0;

        // for(int i=0;i<m.size();i++)
        // {
        //     ans=ans*10+m[i];
        // }

        // return ans;






        //check ith element is greater than i+2th element then swap ith and i+2th element

        for(int i=0;i<m.size();i++)
        {

            if(i%2==0){
            if(i+2<m.size() && m[i]<m[i+2])
            {
                swap(m[i],m[i+2]);
            }

            }
        }


          for(int i=0;i<m.size();i++)
        {
            

            if(i%2!=0 && m.size()>3){
           if(i+2<m.size() && m[i]<m[i+2])
            {
                swap(m[i],m[i+2]);
            }

            }
        }



//return final number from unordered_map

        int ans=0;

        for(int i=0;i<m.size();i++)
        {
            ans=ans*10+m[i];
        }

       return ans;
        
    }
};
// @lc code=end

