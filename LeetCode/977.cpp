class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {



//         This takes O(N) time
//         declare a new vector
        vector<int> res(nums.size());
//         two pointer taken for sorting
        int left=0,right=nums.size()-1;
//         start from the last 
        for(int i =nums.size()-1;i>=0;i--){
//             used abs because we know array is sorted to all negative numbers will be on the left
            if(abs(nums[left])>nums[right]){
                res[i]=nums[left]*nums[left];
                left++;
            }
//             else we add the last element
            else{
                res[i]=nums[right]*nums[right];
                right--;
            }
        }
        return res;











//first square each element in the vector and then sort the vector
        // for(int i = 0; i < a.size(); i++){
        //     a[i] = a[i] * a[i];
        // }
        // sort(a.begin(), a.end());
        // return a;
















        
        // int n=a.size();
        // vector<int>ans(n);
        // int i=0;
        // int j=n-1;
        // int k=n-1;
        
        // while(i<=j)
        // {
        //     if(abs(a[i])>=abs(a[j]))
        //     {
        //         ans[k] = a[i]*a[i];
        //         i++;
        //     }
        //     else
        //     {
        //         ans[k] = a[j]*a[j];
        //         j--;
        //     }
        //     k--;
        // }
        
        // return ans;
    }
};