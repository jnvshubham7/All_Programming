class Solution {
public:
    int maximalNetworkRank(int n, vector<vector<int>>& roads) {
        vector<int> cityRank(n, 0);
        vector<vector<bool>> connected(n, vector<bool>(n, false));
        
        for (const vector<int>& road : roads) {
            cityRank[road[0]]++;
            cityRank[road[1]]++;
            connected[road[0]][road[1]] = true;
            connected[road[1]][road[0]] = true;
        }
        
        int maxRank = 0;
        
        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                int rank = cityRank[i] + cityRank[j];
                if (connected[i][j]) {
                    rank--;
                }
                maxRank = max(maxRank, rank);
            }
        }
        
        return maxRank;
    }
};
