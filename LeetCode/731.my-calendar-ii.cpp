/*
 * @lc app=leetcode id=731 lang=cpp
 *
 * [731] My Calendar II
 */

// @lc code=start
class MyCalendarTwo {
public:
    
    vector<pair<int, int>> v;


    MyCalendarTwo() {
        
    }
    
    bool book(int start, int end) {

        int cnt=0;
        for(auto it: v)
        {
            if(max(start, it.first) < min(end, it.second))
                cnt++;

                if(cnt>1)
                    return false;
        }

        v.push_back({start, end});
        return true;
        
    }
};

/**
 * Your MyCalendarTwo object will be instantiated and called as such:
 * MyCalendarTwo* obj = new MyCalendarTwo();
 * bool param_1 = obj->book(start,end);
 */
// @lc code=end

