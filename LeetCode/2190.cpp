class Solution {
public:
    int mostFrequent(vector<int>& nums, int key) {

        //store the frequency of each number with position
        unordered_map<int, int> freq;
        
       for(int i = 0; i < nums.size(); i++){
              freq[nums[i]]++;
         }


         //store all next elements which nums[i] is equal to key in set
            unordered_set<int> next;
            for(int i = 0; i <= nums.size() -2; i++){
                if(nums[i] == key){
                    next.insert(nums[i+1]);
                }
            }
            //check which set number is the most frequent
            int max = 0;
            int max_num = 0;
            for(auto it = next.begin(); it != next.end(); it++){
                if(freq[*it] > max){
                    max = freq[*it];
                    max_num = *it;
                }
            }
            return max_num;
            // int max = 0;
            // int max_num = 0;
            // for(auto it = next.begin(); it != next.end(); it++){
            //     if(freq[*it] > max){
            //         max = freq[*it];
            //         max_num = *it;
            //     }
            // }



        //key nums[i] == key and,
//nums[i + 1] == target.

//find target in nums

        // int target = key;
        // int max_freq = 0;
        // int max_num = 0;

        // for(int i = 0; i < nums.size(); i++){
        //     if(nums[i] == target){
        //         if(freq[nums[i]] > max_freq){
        //             max_freq = freq[nums[i]];
        //             max_num = nums[i+1];
        //         }
        //     }
        // }

        // return max_num;

        // int max_freq = 0;
        // int max_num = 0;

        // for(auto it = freq.begin(); it != freq.end(); it++){
        //     if(it->second > max_freq){
        //         max_freq = it->second;
        //         max_num = it->first;
        //     }
        // }

        // /

        
    }
};