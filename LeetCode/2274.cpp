class Solution {
public:
    int maxConsecutive(int bottom, int top, vector<int>& special) {

    //store all integers in a vector from bottom to top
    //if the number is in special then do not add it to the vector

    //sort the vector

    //push all element from bottom to tp 

    vector<int> nums;
    for(int i=bottom;i<=top;i++)
    {
        if(find(special.begin(),special.end(),i)==special.end())
        {
            nums.push_back(i);
        }



   

        
    }

    sort(nums.begin(),nums.end());

    int count=0;
    //find maximum consecutive number in whole vector

    for(int i=0;i<nums.size();i++)
    {
        int c=nums[i];
        int n=nums[i+1];
        if(c+1==n)
        {
            count++;
        }
        else
        {
            count=0;
        }   
    }

   // return count;


   
    }

};