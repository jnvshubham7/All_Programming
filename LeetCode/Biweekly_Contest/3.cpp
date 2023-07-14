// You are given a 0-indexed integer array nums representing the score of students in an exam. The teacher would like to form one non-empty group of students with maximal strength, where the strength of a group of students of indices i0, i1, i2, ... , ik is defined as nums[i0] * nums[i1] * nums[i2] * ... * nums[ik​].

// Return the maximum strength of a group the teacher can create.



class Solution {
public:
    long long maxStrength(vector<int>& nums) {

        sort(nums.begin(), nums.end());

        //
        for(int i=0;i<nums.size();i++)
        {
            cout<<nums[i]<<" ";
        }

        cout<<endl;

         long long sum=1;

        int sz=nums.size();

        if(sz%2==0)
        {

            int j=sz/2 -1;
            int k=sz/2;

            //exclude i,j th element

            for(int i=0;i<sz;i++)
            {
                if(i!=j && i!=k)
                {
                    sum*=nums[i];
                }

            }



        }

        else {

            int j=sz/2;

            for(int i=0;i<sz;i++)
            {
                if(i!=j)
                {
                    sum*=nums[i];
                }

            }

        }

        // return sum;

        if(sz%2==0)
        {

            int j=sz/2 -1;
            int k=sz/2;

            long long s1=sum*nums[j]*nums[k];
            long long s2=sum*nums[j];
            long long s3=sum*nums[k];

            cout<<s1<<" "<<s2<<" "<<s3<<endl;

            return max(s1, max(s2, s3));

          

           





        }

        else {

            int j=sz/2;

            long long s1=sum*nums[j];

            return max(s1, sum);

        }


        // return sum;



       



        
    }
};


//[9,-3,2,-5,-2,-9,-8,-4,5,-3]
//1166400