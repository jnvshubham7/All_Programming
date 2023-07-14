/*
 * @lc app=leetcode id=703 lang=cpp
 *
 * [703] Kth Largest Element in a Stream
 */

// @lc code=start
class KthLargest {
public:
    priority_queue<int,vector<int>, greater<int>>minHeap;
    int size;
    KthLargest(int k, vector<int>& nums) {
        size=k;
        for(int i=0;i<nums.size();i++){
            minHeap.push(nums[i]);
           
        }
       
    }
    
    int add(int val) {

        minHeap.push(val);
        while(minHeap.size()>size){
            minHeap.pop();
        }
        return minHeap.top();


      
        
    }
};


/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */
// @lc code=end

