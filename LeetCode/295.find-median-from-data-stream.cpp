/*
 * @lc app=leetcode id=295 lang=cpp
 *
 * [295] Find Median from Data Stream
 */

// @lc code=start
class MedianFinder {
public: 
    
   priority_queue<int> maxHeap;
    priority_queue<int, vector<int>, greater<int>> minHeap;
    MedianFinder() {


        
    }
    
    void addNum(int num) {

       


        
    }
    
    double findMedian() {

        if(nums.size() == 0) {
            return 0;
        }

        int n = nums.size();
        if (n % 2 == 0) {
            return (nums[n / 2] + nums[n / 2 - 1]) / 2.0;
        }
        else {
            return nums[n / 2];
        }
        
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */
// @lc code=end

