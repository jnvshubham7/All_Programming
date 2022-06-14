class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        //use two pointer to find the index

        vector<int> ans;
        int left = 0;

        int right = nums.size() - 1;

        //


        while (left < right) {

            if (nums[left] + nums[right] == target) {

                ans.push_back(left);

                ans.push_back(right);

                return ans;

            } else if (nums[left] + nums[right] < target) {

                left++;

            } else {

                right--;

            }

        }

        return ans;

    //     vector<int> ans;

    //     int n=nums.size();
    //   //  if(n==0) return ans;

    //     //use two pointer to find the index 
    //     int i=0;
    //     int j=n-1;

    //     while(i<j)
    //     {
    //         if(nums[i]+nums[j]==target)
    //         {
    //             ans.push_back(i);
    //             ans.push_back(j);
    //             return ans;
    //         }
    //         else if(nums[i]+nums[j]<target)
    //         {
    //             i++;
    //         }
    //         else
    //         {
    //             j--;
    //         }
    //     }

    //     return ans;
        

        // for(int i=0;i<n;i++){
        //     for(int j=i+1;j<n;j++){
        //         if(nums[i]+nums[j]==target){
        //             ans.push_back(i);
        //             ans.push_back(j);
        //             return ans;
        //         }
        //     }
        // }
        // return ans;

        // unordered_map<int, int> m;
        // vector<int> ans;
        // for (int i = 0; i < nums.size(); i++) {
        //     if (m.find(target - nums[i]) != m.end()) {
        //         ans.push_back(m[target - nums[i]]);
        //         ans.push_back(i);
        //         return ans;
        //     }
        //     m[nums[i]] = i;
        // }
        // return ans;

       
        
    }
};





