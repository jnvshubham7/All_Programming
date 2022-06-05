class Solution {
public:
    bool divideArray(vector<int>& nums) {

        //store all number frequencies in unordered_map
        unordered_map<int, int> freq;
        for (int i = 0; i < nums.size(); i++) {
            freq[nums[i]]++;
        }
        //check all frequencies is even then return true else return false
        for (auto it = freq.begin(); it != freq.end(); it++) {
            if (it->second % 2 != 0) {
                return false;
            }
        }
        return true;
        
    }
};