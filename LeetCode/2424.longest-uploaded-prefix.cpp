/*
 * @lc app=leetcode id=2424 lang=cpp
 *
 * [2424] Longest Uploaded Prefix
 */

// @lc code=start
class LUPrefix {
public:
     vector<int> arr;
    int n;
    int curr;
    LUPrefix(int n) {
       
        arr.resize(n+1, 0);
        curr = 0;
        arr[curr] = 1;
    }
    
    void upload(int video) {
        arr[video] = 1;
    }
    
    int longest() {
        while(curr <= n and arr[curr] ==1){
            curr++;
        }
        curr--;
        return curr;
    }
};

/**
 * Your LUPrefix object will be instantiated and called as such:
 * LUPrefix* obj = new LUPrefix(n);
 * obj->upload(video);
 * int param_2 = obj->longest();
 */
// @lc code=end

