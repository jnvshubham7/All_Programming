class Solution {
public:
    int maxProduct(vector<int>& nums) {

        // Given the array of integers nums, you will choose two different indices i and j of that array. 
        // Return the maximum value of (nums[i]-1)*(nums[j]-1).


        //push all elements into a priority queue
        priority_queue<int, vector<int>> pq;
        for (int i = 0; i < nums.size(); i++) {
            pq.push(nums[i]);
        }

        //pop the first element and the second element
        int first = pq.top();
        pq.pop();
        int second = pq.top();
        pq.pop();

        //return the product of the two elements
        return (first - 1) * (second - 1);





//  priority_queue<int> pq{nums.begin(),nums.end()};
//         int x=pq.top();
//         pq.pop();
//         int y=pq.top();
//         return (x-1)*(y-1);







        


// find max and 2nd max 

        // int max = INT_MIN;
        // int secondMax = INT_MIN;
        // int maxIndex = 0;
        // int secondMaxIndex = 0;
        // for (int i = 0; i < nums.size(); i++) {
        //     if (nums[i] > max) {
        //         secondMax = max;
        //         secondMaxIndex = maxIndex;
        //         max = nums[i];
        //         maxIndex = i;
        //     }
        //     else if (nums[i] > secondMax) {
        //         secondMax = nums[i];
        //         secondMaxIndex = i;
        //     }
        // }
        // return (max - 1) * (secondMax - 1);





        
        
        
        
        
        
        
        

//find max and 2nd max  using priority queue
        // priority_queue<int, vector<int>, greater<int>> pq;
        // int max = INT_MIN;
        // int secondMax = INT_MIN;
        // for (int i = 0; i < nums.size(); i++) {
        //     pq.push(nums[i]);
        //     if (pq.size() > 2) {
        //         pq.pop();
        //     }
        //     if (pq.size() == 2) {
        //         secondMax = pq.top();
        //         pq.pop();
        //         max = pq.top();
        //     }
        // }
        // return (max - 1) * (secondMax - 1);




































        //use priority queue to find the max and min of the array
        // priority_queue<int, vector<int>, greater<int>> minHeap;
        // priority_queue<int, vector<int>, less<int>> maxHeap;
        // int max = INT_MIN;
        // for (int i = 0; i < nums.size(); i++) {
        //     if (nums[i] > 0) {
        //         maxHeap.push(nums[i]);
        //     }
        //     else {
        //         minHeap.push(nums[i]);
        //     }
        // }
        // while (maxHeap.size() > 1 && minHeap.size() > 1) {
        //     int max1 = maxHeap.top();
        //     maxHeap.pop();
        //     int max2 = maxHeap.top();
        //     maxHeap.pop();
        //     int min1 = minHeap.top();
        //     minHeap.pop();
        //     int min2 = minHeap.top();
        //     minHeap.pop();
        //     maxHeap.push(max1 - min2);
        //     minHeap.push(min1 - max2);
        // }
        // if (maxHeap.size() == 1) {
        //     max = maxHeap.top();
        // }
        // else {
        //     max = minHeap.top();
        // }
        // return max;

        
    }
};