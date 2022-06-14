class Solution {
public:
    int singleNumber(vector<int>& nums) {




         if(nums.size() < 1) {
            return 0;
        }
        
        else if(nums.size() > 1) {
            
            sort(nums.begin(), nums.end());
            
            for(int i=0; i<nums.size(); i++) {
                if(nums[i] != nums[i+1]) {
                    return nums[i];
                }
                i++;
            }
        }
        
        //else for nums.size() == 1
        return nums[0];













        //store all occurence of each number in unordered_map
        // unordered_map<int, int> m;
        // for(int i=0;i<nums.size();i++){
        //     m[nums[i]]++;
        // }
        // //find the number which occurence is 1
        // for(auto it=m.begin();it!=m.end();it++){
        //     if(it->second==1){
        //         return it->first;
        //     }
        // }
        // return 0;


        //find the single number in the array
        //use XOR to find the single number
        // int res = 0;
        // for(int i=0;i<nums.size();i++){
        //     res = res^nums[i];
        // }
        // return res;

        
    }
};