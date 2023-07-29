class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        int n = intervals.size();
        int count = 0;
        int lastEnd = intervals[0][1];

        for (int i = 1; i < n; i++) {
            if (intervals[i][0] < lastEnd) {
                lastEnd = min(lastEnd, intervals[i][1]);
                count++;
            } else {
                lastEnd = intervals[i][1];
            }
        }
        
        return count;
    }
};
