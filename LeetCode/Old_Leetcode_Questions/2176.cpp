class Solution {
public:
    int countPairs(vector<int>& nums, int k) {

        //if nums[i] == nums[j] and i*j%k == 0, then we have a pair

        int count = 0;
      //check 
      for(int i=0;i<nums.size();i++){
          for(int j=i+1;j<nums.size();j++){
              if(nums[i]==nums[j] && i*j%k==0){
                  count++;
              }
          }
      }

        return count;

        
    }
};