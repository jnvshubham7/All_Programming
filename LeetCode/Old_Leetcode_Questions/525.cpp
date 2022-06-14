


 int findMaxLength(vector<int>& nums) {
        int n = nums.size();
        int result = 0;
        unordered_map<int,int> record;
        
        int sum = 0;
        for(int i = 0; i < n; i++){
            if(nums[i] == 0)
                sum -= 1;
            else if(nums[i] == 1)
                sum += 1;
            
            if(sum == 0){
                result = max(result, i+1);
            }
            
            if(record.find(sum) != record.end()){
                result = max(result, i - record[sum]);
            }
            else{
                record[sum] = i;
            }
        }
        return result;
    }












// class Solution {
// public:
//     int findMaxLength(vector<int>& nums) {
// 		int maxlen = 0;
//         for (int i = 0; i < nums.size(); i++) {
//             int zeroes = 0, ones = 0;
//             for (int j = i; j < nums.size(); j++) {
//                 if (nums[j] == 0) {
//                     zeroes++;
//                 } else {
//                     ones++;
//                 }
//                 if (zeroes == ones) {
//                     maxlen = max(maxlen, j - i + 1);
//                 }
//             }
//         }
//         return maxlen;
//     }
// };








// class Solution {
// public:
//     int findMaxLength(vector<int>& nums) {

        //return maximum length in which 0 and 1 is alternate position
        //if all 1 then return 0
        //if all 0 then return 0

        










        // //create a hashmap to store index of 0 and 1
        // //key is 0 and 1 and value is index
        // unordered_map<int,int> hash;
        // hash[0]=-1;
        // hash[1]=0;
        // int max_length=0;
        // int sum=0;

        // for(int i=0;i<nums.size();i++){
        //     if(nums[i]==0){
        //         sum-=1;
        //     }
        //     else{
        //         sum+=1;
        //     }
        //     //store no. of 0 and 1 in hashmap
        //     // if(hash.find(sum)==hash.end()){
        //     //     hash[sum]=i;
        //     // }

        //     //check when 0 and 1 is not alternate position then break and return max_length
        //     //also check no. of 0 and 1 is equal
        //     if(hash.find(sum)!=hash.end()){
        //         max_length=max(max_length,i-hash[sum]);
        //     }
        //     else{
        //         hash[sum]=i;
        //     }
        //     if(hash.find(sum)!=hash.end() ){
        //         max_length=max(max_length,i-hash[sum]);
        //     }
        //     // else{
        //     //     hash[sum]=i;
        //     // }

        //     // if(hash.find(sum)!=hash.end()){
        //     //     max_length=max(max_length,i-hash[sum]);
        //     // }
        //     else{
        //         hash[sum]=i;
        //     }
        // }
        // return max_length;











        //return the maximum length of a contiguous subarray with an equal number of 0 and 1.
        // int n;
        // n=nums.size();
        // int count=0;
        // int max=0;
        // int sum=0;
        // for(int i=0;i<n;i++){
        //     if(nums[i]==0){
        //         sum--;
        //     }
        //     else{
        //         sum++;
        //     }
        //     if(sum==0){
        //         count++;
        //     }
        //     else if(sum<0){
        //         sum=0;
        //         count=0;
        //     }
        //     if(count>max){
        //         max=count;
        //     }
        // }
        // return max;

        
//     }
// };