class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {


        //create unordered_set to store all the element 
        //and check size of unordered_set is equal to size of vector or not
        //if yes return true
        //if no return false
        unordered_set<int> set;
        for(int i=0;i<nums.size();i++){
            set.insert(nums[i]);
        }
        if(set.size()==nums.size()){
            return false;
        }
        return true;
        

        //create 2 loop to check every element is distinct 
        //if yes the return false

        //if no return true
        // if(nums.size()==0){
        //     return false;
        // }
        // for(int i=0;i<nums.size();i++){
        //     for(int j=i+1;j<nums.size();j++){


               
        //         if(nums[i]==nums[j]){
        //             return true;
        //             break;
        //         }
        //     }
        // }
        // return false;


       







        
    }
};