/*
 * @lc app=leetcode id=1879 lang=cpp
 *
 * [1879] Minimum XOR Sum of Two Arrays
 */

// @lc code=start
class Solution {
public:

    int minimumXORSum(vector<int>& nums1, vector<int>& nums2) {

      
        vector<int> v1;

       //change in binary 
        for(int i=0;i<nums1.size();i++)
        {
            int temp=toBinary(nums1[i]);
            v1.push_back(temp);


        }
        vector<int> v2;
        for(int i=0;i<nums2.size();i++)
        {
            int temp=toBinary(nums2[i]);
            v2.push_back(temp);
        }

        //find the minimum xor sum
        int sum=0;

        for(int i=0;i<v1.size();i++)
        {
            for(int j=0;j<v2.size();j++)
            {
                int temp=v1[i]^v2[j];
               sum+=temp;
            }
        }
        
        return sum;


        
    }

    int toBinary(int num)
    {
        int temp=num;
        int count=0;
        while(temp>0)
        {
            temp=temp/2;
            count++;
        }
        int binary[count];
        temp=num;
        for(int i=count-1;i>=0;i--)
        {
            binary[i]=temp%2;
            temp=temp/2;
        }
        return binary;
    }





};
// @lc code=end

