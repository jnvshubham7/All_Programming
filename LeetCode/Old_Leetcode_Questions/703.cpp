class KthLargest {
public:
    priority_queue<int,vector<int>, greater<int>>minHeap;
    int size;
    KthLargest(int k, vector<int>& nums) {
        size=k;
        for(int ele : nums) add(ele);
    }
    
    int add(int val) {
        if(minHeap.size() < size)
            minHeap.push(val);
        else{
            if(val > minHeap.top()){
                minHeap.pop();
                minHeap.push(val);
            }
        }
        return minHeap.top();
    }
};














// class KthLargest {
// public:
//     KthLargest(int k, vector<int>& nums) {




        









//         // for(int i = 0; i < nums.size(); i++)
//         // {
//         //     if(nums[i] > nums[nums.size() - k])
//         //     {
//         //         nums[nums.size() - k] = nums[i];
//         //         sort(nums.begin(), nums.end());
//         //     }
//         // }
        
//     }
    
//     int add(int val) {









//         // if(val > nums[nums.size() - k])
//         // {
//         //     nums[nums.size() - k] = val;
//         //     sort(nums.begin(), nums.end());
//         // }
//         // return nums[nums.size() - k];
        
//     }
// };

// /**
//  * Your KthLargest object will be instantiated and called as such:
//  * KthLargest* obj = new KthLargest(k, nums);
//  * int param_1 = obj->add(val);
//  */