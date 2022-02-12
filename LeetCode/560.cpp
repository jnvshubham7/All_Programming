class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {


        int count = 0, sum = 0;
        unordered_map<int, int> m;
        m[0] = 1;
        for (int i=0; i<nums.size(); i++) {
            sum += nums[i];
            count += m[sum - k];
            m[sum]++;
        }
        return count;


//  unordered_map<int, int> m;
//         int count=0;
//         int sum=0;
        
//         int n=nums.size();
//         for(int i=0;i<n;i++){
//             sum+=nums[i];
//             if(sum == k) count++;
            
//             if(m.find(sum-k)!=m.end()){ //O(1)
//                 count=m[sum-k]+count; 
//             }
            
//             if(m.find(sum)!=m.end()){
//                 m[sum]++;
//             }else{
//                 m[sum]=1;
//             }
            
//         }
        
//         return count;


















        //   int n = arr.size(); // take the size of the array
        
        // int prefix[n]; // make a prefix array to store prefix sum
        
        // prefix[0] = arr[0]; // for element at index at zero, it is same
        
        // // making our prefix array
        // for(int i = 1; i < n; i++)
        // {
        //     prefix[i] = arr[i] + prefix[i - 1];
        // }
        
        // unordered_map<int,int> mp; // declare an unordered map
        
        // int ans = 0; // to store the number of our subarrays having sum as 'k'
        
        // for(int i = 0; i < n; i++) // traverse from the prefix array
        // {
        //     if(prefix[i] == k) // if it already becomes equal to k, then increment ans
        //         ans++;
            
        //     // now, as we discussed find whether (prefix[i] - k) present in map or not
        //     if(mp.find(prefix[i] - k) != mp.end())
        //     {
        //         ans += mp[prefix[i] - k]; // if yes, then add it our answer
        //     }
            
        //     mp[prefix[i]]++; // put prefix sum into our map
        // }
        
        // return ans; // and at last, return our answer
















        //run a loop and add the all elements and count ++ when sum ==l then break and print count
        // int count = 0;
        // int sum = 0;
        // for(int i=0;i<nums.size(); i++){
        //     sum+=nums[i];
        //     count++;
        //     if(sum==k){
                
        //         break;
        //     }
        // }



        // unordered_map<int, int> hash;
        // hash[0] = 1;
        // for(int i = 0; i < nums.size(); i++)
        // {
        //     sum += nums[i];
        //     if(hash.find(sum - k) != hash.end())
        //         count += hash[sum - k];
        //     hash[sum]++;
        // }
        // return count;



        // int n = arr.size(); // taking the size of the array
        
        // int ans = 0; // ans variable to store our count
        
        // for(int i = 0; i < n; i++) // traverse from the array
        // {
        //     int sum = arr[i]; // provide sum with arr[i]
            
        //     if(sum == k) // if element itself equal to k, then also increment count
        //         ans++;
            
        //     for(int j = i + 1; j < n; j++) // now moving forward,
        //     {
        //         sum += arr[j]; // add elements with sum
                
        //         if(sum == k) // if at any point they become equal to k
        //             ans++; // increment answer
        //     }
            
        // }
        
        // return ans; // and at last, return answer
 

    
        
    }
};