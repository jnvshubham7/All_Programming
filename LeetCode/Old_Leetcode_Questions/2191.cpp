class Solution {
public:
    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {

        //store of every number of nums in vector
        vector<int> nums_vec;
        for(int i = 0; i < nums.size(); i++){
            nums_vec.push_back(nums[i]);
        }
        //return vector
     //  return nums_vec;
//mapping[i] = j means digit i should be mapped to digit j in this system.

//store the mapping in vector with nums[i] as key and mapping[i] as value
        vector<int> mapping_vec;
        for(int i = 0; i < mapping.size(); i++){
            mapping_vec.push_back(mapping[i]);
        }

        //sort the vector
        sort(mapping_vec.begin(), mapping_vec.end());

        














        //take each digit of each number in nums then check that digit as a postion in mapping then replace it with the digit
        // for(int i = 0; i < nums.size(); i++){
        //     int num = nums[i];
        //     int digit = num % 10;
        //     num = num / 10;
        //     int pos = mapping[digit];
        //     nums[i] = nums_vec[pos];
        //     nums_vec[pos] = digit;
        // }
        // return nums;
    

        // for(int i = 0; i < nums.size(); i++){
        //     int num = nums[i];
        //     int digit = num % 10;
        //     num = num / 10;
        //     int pos = mapping[digit];
        //     nums[i] = nums_vec[pos];
        //     nums_vec[pos] = digit;


        // }
        // return nums;



        
    }
};